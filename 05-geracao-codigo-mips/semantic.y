%{ 
#include "analex.c" 
#include "codigo.h" 
void verifica_var_declarada(int pos);
void verifica_func_declarada(int pos);
void verifica_tipos_atrib(int tipo1, int tipo2);
void verifica_tipo_indice(int tipo1);
void verifica_argumentos(int pos, int tam_args);
%}

%union{
	struct ids{
		int ids[50];
		int tam;
		char *code;
	} id_list;
	struct no{
		int place;
		char *code;
        int tipo;
	} node;
	int val;
}

%token <node> NUM 
%token <node> NUM_REAL
%token <val> ID 
%token FOR
%token WHILE
%token IF 
%token ELSE
%token ENDIF
%token CHAR
%token INT
%token FLOAT
%token VOID
%token RETURN
%token OR
%token AND
%token NOT
%token GE
%token LE
%token EQ
%token NEQ
%token DO
%token STRING
%token <node> CHARACTERE

%type <val> Type TypeF
%type <id_list> IDs ParamList ArgList
%type <node> Atribuicao Exp Function Prog Statement Statement_Seq
%type <node> If While Compound_Stt DoWhile FunctionCall For

%right '='

%left OR
%left AND

%nonassoc EQ NEQ

%left '>' '<' GE LE

%left '+' '-'
%left '*' '/' '%'

%right NOT

%right '(' '['


%start ProgL
%%
ProgL : Prog { printf("%s",$1.code);}
    ;
    
Prog : Prog Function { create_cod(&$$.code); insert_cod(&$$.code, $1.code); insert_cod(&$$.code, "\n"); insert_cod(&$$.code, $2.code); }
	| Function { $$ = $1;
    }
	;	

Function :
	TypeF ID '(' ParamList ')' '{' Decls Statement_Seq '}'  { for(int i=0; i<$4.tam; i++){ Tabela[$2].arg_list[Tabela[$2].tam_arg_list++] = $4.ids[i];
    } offset = 0; set_type($2, $1); set_num_param($2, $4.tam); Funct(&$$,$2,$8); }
	|
    TypeF ID '(' ')' '{' Decls Statement_Seq '}'  { Tabela[$2].tam_arg_list = 0; offset = 0; set_type($2, $1); set_num_param($2, 0);
    Funct(&$$,$2,$7); }
	;
	
FunctionCall :
    ID '(' ArgList ')' { verifica_func_declarada($1);
    verifica_argumentos($1, $3.tam); Call(&$$,$1,$3); }
	| ID '(' ')' { verifica_func_declarada($1); verifica_argumentos($1, 0); Call_blank(&$$,$1); }
    ;

ArgList:
    Exp ',' ArgList { 
        create_cod(&$$.code);
        insert_cod(&$$.code, $1.code); 
        insert_cod(&$$.code, $3.code); 
        $$.tam = 0;
        for(int i=0; i<$3.tam; i++) {
            $$.ids[$$.tam++] = $3.ids[i];
        } 
        $$.ids[$$.tam++] = $1.place; 
    }
    |
    Exp  { create_cod(&$$.code); insert_cod(&$$.code, $1.code); $$.tam = 1; $$.ids[0] = $1.place; }
    ;

ParamList: 
    ParamList ',' Type ID  {$$.tam = 0;
    for(int i=0; i<$1.tam; i++) {$$.ids[$$.tam++] = $1.ids[i];} $$.ids[$$.tam++] = $4; set_type($4, $3);}
    |
    Type ID {$$.tam = 1; $$.ids[0] = $2; set_type($2, $1);}
	; 
		
Decls:
	  Decl ';' Decls  
	| 
	;

Decl:
	Type IDs {for(int i=0; i<$2.tam; i++){
			set_type($2.ids[i], $1);
			set_num_param($2.ids[i], -1);
		}}
	;

IDs :
	  IDs ',' ID {for(int i=0; i<$1.tam; i++) {$$.ids[$$.tam] = $1.ids[i]; $$.tam++;} $$.ids[$$.tam++] = $3;}
	|
    IDs ',' Atribuicao {for(int i=0; i<$1.tam; i++) {$$.ids[$$.tam] = $1.ids[i]; $$.tam++;} $$.ids[$$.tam++] = $3.place;}
	|
    IDs ',' ID '[' NUM ']' {verifica_tipo_indice($5.tipo);for(int i=0; i<$1.tam; i++){$$.ids[$$.tam++] = $1.ids[i];} 
	$$.ids[$$.tam] = $3; $$.tam += 1;}
	|
    ID '[' NUM ']' {verifica_tipo_indice($3.tipo);$$.ids[$$.tam] = $1; $$.tam += 1; }
	| ID {$$.ids[$$.tam] = $1; $$.tam += 1; }
	|
    Atribuicao {$$.ids[$$.tam] = $1.place; $$.tam += 1; }
	;
	
TypeF :
	  VOID {$$ = VOID;}
	| Type {$$ = $1;}
	;

Type :
	  INT {$$ = INT;}
	| CHAR {$$ = CHAR;}
	| FLOAT {$$ = FLOAT;}
	;

Statement_Seq :
	Statement Statement_Seq { create_cod(&$$.code);
    insert_cod(&$$.code, $1.code); insert_cod(&$$.code, $2.code); }
	| Statement { create_cod(&$$.code); insert_cod(&$$.code, $1.code); }
	;
		
Statement: 
	  Atribuicao ';' {verifica_var_declarada($1.place); verifica_tipos_atrib(Tabela[$1.place].tipo, $1.tipo);
    $$ = $1;}
	| If
	| For
	| While
	| DoWhile
	| FunctionCall ';' {$$ = $1;}
	|
    RETURN ID ';' { 
        create_cod(&$$.code);
        struct no val_ret;
        Lw(&val_ret, $2);
        insert_cod(&$$.code, val_ret.code);
        char reg_val[10];
        getName(val_ret.place, reg_val);
        char instr[100];
        sprintf(instr, "\tmove $v0,%s\n", reg_val);
        insert_cod(&$$.code, instr);
    }
	| RETURN NUM ';'
    { 
        create_cod(&$$.code);
        struct no val_ret;
        Li(&val_ret, $2.place);
        insert_cod(&$$.code, val_ret.code);
        char reg_val[10];
        getName(val_ret.place, reg_val);
        char instr[100];
        sprintf(instr, "\tmove $v0,%s\n", reg_val);
        insert_cod(&$$.code, instr);
    }
	| RETURN ';' { create_cod(&$$.code); }
	;

Compound_Stt :
	  Statement {$$ = $1;}
	| '{' Statement_Seq '}' {$$ = $2;}
	;

If :
	  IF '(' Exp ')' Compound_Stt ENDIF { If(&$$,$3,$5);
    }
	| IF '(' Exp ')' Compound_Stt ELSE Compound_Stt ENDIF { IfElse(&$$,$3,$5,$7); }
	;

While:
	WHILE '(' Exp ')' Compound_Stt  { While(&$$,$3,$5);
    }
	;
	
For:
	FOR '(' Atribuicao ',' Exp ',' Exp ')' Compound_Stt { }
	;

DoWhile:
	DO Compound_Stt WHILE '(' Exp ')' ';'
    { DoWhile(&$$,$5,$2); }
	;
			
Atribuicao : ID '[' NUM ']' '=' Exp { verifica_tipo_indice($3.tipo);
    verifica_var_declarada($1); verifica_tipos_atrib(Tabela[$1].tipo, $6.tipo); $$.tipo = $6.tipo; $$.place = $1; Atrib(&$$,$1,$6); } 
    |
    ID '=' Exp { verifica_var_declarada($1); verifica_tipos_atrib(Tabela[$1].tipo, $3.tipo); $$.tipo = $3.tipo; $$.place = $1; Atrib(&$$,$1,$3); }
	;

Exp :
	  Exp '+' Exp {$$.tipo = retorna_maior_tipo($1.tipo, $3.tipo);
    ExpAri("add",&$$,$1,$3); }
	| Exp '-' Exp {$$.tipo = retorna_maior_tipo($1.tipo, $3.tipo); ExpAri("sub",&$$,$1,$3); }
	| Exp '*' Exp {$$.tipo = retorna_maior_tipo($1.tipo, $3.tipo); ExpAri("mul",&$$,$1,$3); }
	|
    Exp '/' Exp {$$.tipo = retorna_maior_tipo($1.tipo, $3.tipo); ExpAri("div",&$$,$1,$3); }
	| Exp '>' Exp {$$.tipo = INT; ExpRel("bgt",&$$,$1,$3); }
	|
    Exp '<' Exp {$$.tipo = INT; ExpRel("blt",&$$,$1,$3); }
	| Exp GE Exp {$$.tipo = INT; ExpRel("bge",&$$,$1,$3); }
	|
    Exp LE Exp {$$.tipo = INT; ExpRel("ble",&$$,$1,$3); }
	| Exp EQ Exp {$$.tipo = INT; ExpRel("beq",&$$,$1,$3); }
	|
    Exp NEQ Exp {$$.tipo = INT; ExpRel("bne",&$$,$1,$3); }
	| Exp OR Exp {$$.tipo = INT; ExpAri("or",&$$,$1,$3); }
	|
    Exp AND Exp {$$.tipo = INT; ExpAri("and",&$$,$1,$3); }
	| NOT Exp {$$.tipo = INT;} 
	| '(' Exp ')' {$$ = $2;}
	|
    NUM {$$.tipo = $1.tipo; Li(&$$,$1.place); }
	| NUM_REAL {$$.tipo = FLOAT; Li(&$$,$1.place); }
	| ID '[' Exp ']' {verifica_var_declarada($1); $$.tipo = Tabela[$1].tipo;
    verifica_tipo_indice($3.tipo); Lw(&$$,$1); }
	| ID  {verifica_var_declarada($1); $$.tipo = Tabela[$1].tipo; Lw(&$$,$1); }
	| CHARACTERE {$$.tipo = CHAR; Li(&$$,$1.place); }
	|
    FunctionCall {$$.tipo = $1.tipo; $$.place = $1.place; $$.code = $1.code; }
	| STRING {}
	;

%%  
int main(int argc, char **argv) {     
  yyin = fopen(argv[1],"r");
  yyparse();
} 


void verifica_var_declarada(int pos){
	if(Tabela[pos].tipo == -1)
		yyerror("Uso de variável não declarada!");
}

void verifica_func_declarada(int pos){
	if(Tabela[pos].tipo == -1)
		yyerror("Uso de função não declarada!");
}

void verifica_tipos_atrib(int tipo1, int tipo2){
	if(tipos_inconsistentes_atrib(tipo1, tipo2))
		yyerror("Tipos incompatíveis!");
}

void verifica_tipo_indice(int tipo1){
	if(tipo1 != INT)
		yyerror("Indice de vetor não inteiro");
}

void verifica_argumentos(int pos, int tam_arg){
	if(Tabela[pos].tam_arg_list != tam_arg){
		char error_string[100];
		sprintf(error_string, "Numero de parametros (%d) e argumentos (%d) distintos", Tabela[pos].tam_arg_list, tam_arg);
		yyerror(error_string);
    }
}