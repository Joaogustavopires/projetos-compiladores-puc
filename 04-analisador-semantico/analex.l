%{
#include <stdio.h>
#include "sint.h"  
#include "tabsimb.h"

extern int yylineno;
%}

%option yylineno

dig [0-9]
letra [a-zA-Z_]
identificador {letra}({letra}|{dig})*
inteiro {dig}+
real {dig}+\.{dig}+
string \"[^"]*\"
charactere \'[^']\'

%%

[ \t\r\n]+ { }
"//".* { }

"if" { return IF; }
"else" { return ELSE; }
"endif" { return ENDIF; } 
"while" { return WHILE; }
"return" { return RETURN; }
"for" { return FOR; }
"int" { return INT; }
"void" { return VOID; }
"float" { return FLOAT; }
"char" { return CHAR; }

"<=" { return LE; }
">=" { return GE; }
"==" { return EQ; }
"&&" { return AND; }
"||" { return OR; }
"!" { return NOT; }
"+" { return '+'; }
"-" { return '-'; }
"*" { return '*'; }
"/" { return '/'; }
"=" { return '='; }
"<" { return '<'; }
">" { return '>'; }
";" { return ';'; }
"," { return ','; }
"(" { return '('; }
")" { return ')'; }
"{" { return '{'; }
"}" { return '}'; }
"[" { return '['; } 
"]" { return ']'; } 

{real} { return NUM_REAL; }
{inteiro} { yylval.val = INT; return NUM; }
{charactere} { return CHARACTERE; }
{string} { return STRING; }
{identificador} { 
    int pos = insere(yytext);
    yylval.simbolo.posicao = pos;
    yylval.simbolo.lexema = obtemNome(pos);
    yylval.simbolo.tipo = Tabela[pos].tipo;
    return ID; 
}

. { printf("erro lexico na linha %d - %s\n", yylineno, yytext); }

%%

int yywrap() {
    return 1;
}