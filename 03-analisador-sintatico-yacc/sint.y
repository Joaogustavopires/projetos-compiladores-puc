%{ 
#include "analex.c" 
int parse_errors = 0; 
extern int yylineno; 

void yyerror(char *s) {
    if (parse_errors == 0) { 
        parse_errors = yylineno;
    }
}
%}


%token NUM 
%token ID 
%token INT
%token IF 
%token ELSE
%token ENDIF
%token WHILE
%token GE
%token DO
%token VOID
%token CHAR
%token RETURN
%token FOR
%token FLOAT
%token LE
%token EQ
%token AND
%token OR
%token NOT
%token REAL
%token STRING

%right '='
%left AND OR
%left '<' '>' LE GE EQ
%left '+' '-'
%left '*' '/'
%right NOT

%start Prog 

%%


Prog : ListaDeclaracoes
    ;

ListaDeclaracoes: 
    | ListaDeclaracoes Declaracao
    ;

Declaracao: Tipo ListaInit ';' 
    | Funcao
    ;

ListaInit: Init
    | ListaInit ',' Init
    ;

Init: ID
    | ID '=' Exp
    ;

Tipo: INT | VOID | CHAR | FLOAT ;

Funcao: Tipo ID '(' Parametros ')' Bloco
    | Tipo ID '(' ')' Bloco
    ;

Parametros: Tipo ID
    | Parametros ',' Tipo ID
    | VOID
    ;

Bloco: '{' ListaSentencas '}'
    ;

ListaSentencas: 
    | ListaSentencas Sentenca
    ;

Sentenca: IfSentenca
    | WhileSentenca
    | ReturnSentenca
    | Atribuicao
    | FuncaoCall ';' 
    | Bloco
    | Declaracao
    ;

IfSentenca: IF '(' Exp ')' Sentenca ENDIF
    | IF '(' Exp ')' Sentenca ELSE Sentenca ENDIF
    ;

WhileSentenca: WHILE '(' Exp ')' Sentenca
    ;

ReturnSentenca: RETURN Exp ';'
    | RETURN ';'
    ;

Atribuicao: ID '=' Exp ';' ;

FuncaoCall : ID '(' ListaArgs ')'
    | ID '(' ')'
    ;

ListaArgs : Exp
    | ListaArgs ',' Exp
    ;

Exp : Exp '+' Exp
    | Exp '-' Exp
    | Exp '*' Exp
    | Exp '/' Exp
    | Exp '<' Exp
    | Exp '>' Exp
    | Exp LE Exp
    | Exp GE Exp
    | Exp EQ Exp
    | Exp AND Exp
    | Exp OR Exp
    | NOT Exp
    | '(' Exp ')'
    | NUM		   
    | REAL
    | STRING
    | ID
    | FuncaoCall 
    | ID '[' Exp ']'
	;

%%  

void main(int argc, char **argv) {     
  if (argc < 2) {
      fprintf(stderr, "Uso: %s <arquivo_de_entrada>\n", argv[0]);
      return;
  }
  yyin = fopen(argv[1],"r");
  if (!yyin) {
      perror("Erro ao abrir arquivo");
      return;
  }

  
  yyparse();      

  
  if (parse_errors == 0) {
            printf("Sem erros sintáticos\n");
  } else {
     
      printf("syntax error na linha %d\n", parse_errors);
  }
}