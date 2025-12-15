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


{real} { return REAL; }
{inteiro} { return NUM; }
{string} { return STRING; }
{identificador} { insere(yytext); return ID; }

. { printf("erro lexico na linha %d - %s\n", yylineno, yytext); }

%%

int yywrap() {
    return 1;
}