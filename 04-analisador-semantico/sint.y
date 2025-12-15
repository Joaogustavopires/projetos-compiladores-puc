%{ 
#include "analex.c" 
#include <stdio.h>
#include <stdlib.h>

int semantic_err = 0;

void verifica_var_declarada(int pos);
void verifica_func_declarada(int pos);
void verifica_tipos_atrib(int tipo1, int tipo2);
void yyerror(char *s);
%}

%union{
	struct ids{
		int ids[50];
		int tam;
	} id_list;
	struct simb{
		int posicao;
		char *lexema;
		int tipo;
	} simbolo;
	int val;
	float fval;
	char cval;
}

%token <val> NUM 
%token NUM_REAL
%token <simbolo> ID 
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
%token CHARACTERE

%type <id_list> IDs ParamList ArgList
%type <simbolo> AtribuicaoD 
%type <val> Atribuicao Type FunctionCall TypeF
%type <val> Exp

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
ProgL : Prog { 
        if(!semantic_err) printf("Compilação Finalizada\n"); 
    }
    ;
    
Prog : Prog Function
	| Function
	;	

Function :
	TypeF ID '(' ParamList ')' '{' Decls Statement_Seq '}'  
    { set_type($2.posicao, $1); set_num_param($2.posicao, $4.tam); }
	| TypeF ID '(' ')' '{' Decls Statement_Seq '}'   
    { set_type($2.posicao, $1); set_num_param($2.posicao, 0); }
	;

FunctionCall :
    ID '(' ArgList ')' { 
        verifica_func_declarada($1.posicao);
        if(!semantic_err) {
            if(param_args_diferentes($1.posicao, $3.tam)) {
                 printf("Argumentos e parâmetros da função não coincidem. na linha %d\n", yylineno);
                 semantic_err = 1;
            }
        }
        $$ = Tabela[$1.posicao].tipo; 
    }
    |
    ID '('  ')' { 
        verifica_func_declarada($1.posicao);
        if(!semantic_err) {
            if(param_args_diferentes($1.posicao, 0)) {
                 printf("Argumentos e parâmetros da função não coincidem. na linha %d\n", yylineno);
                 semantic_err = 1;
            }
        }
        $$ = Tabela[$1.posicao].tipo; 
    }
    ;

ArgList:
    ArgList ',' Arg { $$ = $1; $$.tam++; }
    | Arg { $$.tam = 1; }
    ;

Arg :
    ID { verifica_var_declarada($1.posicao); }
    | ID '[' Exp ']' { verifica_var_declarada($1.posicao); }
    | FunctionCall
    | NUM
    | STRING
	;

ParamList: 
    ParamList ',' Type ID { 
        $$ = $1;
        set_type($4.posicao, $3);
        $$.ids[$$.tam] = $4.posicao;
        $$.tam++;
    }
    | Type ID { 
        $$.tam = 1;
        $$.ids[0] = $2.posicao;
        set_type($2.posicao, $1);
    }
	;

Decls:
	  Decl ';' Decls  
	| 
	;

Decl:
	Type IDs { 
        int i;
        for(i=0; i < $2.tam; i++) {
            set_type($2.ids[i], $1);
        }
    }
	;

IDs :
	  IDs ',' ID { 
        $$ = $1;
        $$.ids[$$.tam] = $3.posicao;
        $$.tam++;
      }
	| IDs ',' ID '[' NUM ']' { 
        $$ = $1;
        $$.ids[$$.tam] = $3.posicao;
        $$.tam++;
      }
	| ID { 
        $$.tam = 1;
        $$.ids[0] = $1.posicao;
      }
	| ID '[' NUM ']' { 
        $$.tam = 1;
        $$.ids[0] = $1.posicao;
      }
	| IDs ',' AtribuicaoD { 
          $$ = $1;
          $$.ids[$$.tam] = $3.posicao;
          $$.tam++;
      }
	| AtribuicaoD { 
          $$.tam = 1;
          $$.ids[0] = $1.posicao;
      }
	;

TypeF : VOID { $$ = VOID; } | Type { $$ = $1; };
Type : INT { $$ = INT; } | CHAR { $$ = CHAR; } | FLOAT { $$ = FLOAT; };
			
Statement_Seq : Statement Statement_Seq | ;

Statement: 
	  Atribuicao ';' { }
	| If
	| While
	| DoWhile
	| FunctionCall ';'
	| RETURN ID ';'
	| RETURN NUM ';'
	| RETURN ';'
	;

Compound_Stt : Statement | '{' Statement_Seq '}';
		
If :
	  IF '(' Exp ')' Compound_Stt ENDIF
	| IF '(' Exp ')' Compound_Stt ELSE Compound_Stt ENDIF
	;

While: WHILE '(' Exp ')' Compound_Stt;
DoWhile: DO Compound_Stt WHILE '(' Exp ')' ';';

Atribuicao : ID '[' NUM ']' '=' Exp { 
        verifica_var_declarada($1.posicao);
        verifica_tipos_atrib(Tabela[$1.posicao].tipo, $6);
        $$ = Tabela[$1.posicao].tipo;
    }
    | ID '=' Exp { 
        verifica_var_declarada($1.posicao);
        verifica_tipos_atrib(Tabela[$1.posicao].tipo, $3);
        $$ = Tabela[$1.posicao].tipo;
    }
	;

AtribuicaoD : ID '[' NUM ']' '=' Exp { 
        $$.posicao = $1.posicao;
        $$.tipo = $6; 
    }
    | ID '=' Exp { 
        $$.posicao = $1.posicao;
        $$.tipo = $3;
    }
	;

Exp :
	  Exp '+' Exp { $$ = retorna_maior_tipo($1, $3); }
	| Exp '-' Exp { $$ = retorna_maior_tipo($1, $3); }
	| Exp '*' Exp { $$ = retorna_maior_tipo($1, $3); }
	| Exp '/' Exp { $$ = retorna_maior_tipo($1, $3); }
	| Exp '>' Exp { $$ = INT; }
	| Exp '<' Exp { $$ = INT; }
	| Exp GE Exp { $$ = INT; }
	| Exp LE Exp { $$ = INT; }
	| Exp EQ Exp { $$ = INT; }
	| Exp NEQ Exp { $$ = INT; }
	| Exp OR Exp { $$ = INT; }
	| Exp AND Exp { $$ = INT; }
	| NOT Exp { $$ = INT; }
	| '(' Exp ')' { $$ = $2; }
	| NUM { $$ = INT; }
	| NUM_REAL { $$ = FLOAT; }
	| ID '[' Exp ']' { 
          verifica_var_declarada($1.posicao);
          $$ = Tabela[$1.posicao].tipo;
      } 
	| ID  { 
          verifica_var_declarada($1.posicao);
          $$ = Tabela[$1.posicao].tipo;
      } 	   
	| CHARACTERE { $$ = CHAR; }
	| FunctionCall { $$ = $1; }
	;

%%  
int main(int argc, char **argv) {     
  if (argc < 2) return 1;
  yyin = fopen(argv[1],"r");
  if (!yyin) return 1;
  yyparse();
  return 0;
} 

void verifica_var_declarada(int pos){
    
    if (semantic_err) return; 

	if(pos < 0 || Tabela[pos].tipo == -1) {
        printf("Uso de variável não declarada! na linha %d\n", yylineno);
        semantic_err = 1; 
    }
}

void verifica_func_declarada(int pos){
    if (semantic_err) return;

	if(pos < 0 || Tabela[pos].tipo == -1) {
        printf("Uso de função não declarada! na linha %d\n", yylineno);
        semantic_err = 1;
    }
}

void verifica_tipos_atrib(int tipo1, int tipo2){
    if (semantic_err) return;
    if (tipo1 == -1 || tipo2 == -1) return;

	if(tipos_inconsistentes_atrib(tipo1, tipo2)) {
        printf("Tipos incompatíveis! na linha %d\n", yylineno);
        semantic_err = 1;
    }
}

void yyerror(char *s) {
    
    if (semantic_err) return;

    printf("%s na linha %d\n", s, yylineno);
    semantic_err = 1;
}