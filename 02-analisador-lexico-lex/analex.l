%{
#include <stdio.h>
#include "tokens.h"
#include "tabsimb.h"

extern int yylineno;
%}

%option yylineno

dig         [0-9]
letra       [a-zA-Z_]
identificador {letra}({letra}|{dig})*
inteiro     {dig}+
real        {dig}+\.{dig}+
string      \"[^"]*\"

%%

[ \t\r\n]+      { }
"//".* { }

"if"        { return IF; }
"else"      { return ELSE; }
"while"     { return WHILE; }
"return"    { return RETURN; }
"for"       { return FOR; }
"int"       { return INT; }
"void"      { return VOID; }
"float"     { return FLOAT; }
"char"      { return CHAR; }

"<="        { return LE; }
">="        { return GE; }
"=="        { return EQ; }
"&&"        { return AND; }
"||"        { return OR; }
"!"         { return NOT; }
"+"         { return '+'; }
"-"         { return '-'; }
"*"         { return '*'; }
"/"         { return '/'; }
"="         { return '='; }
"<"         { return '<'; }
">"         { return '>'; }
";"         { return ';'; }
","         { return ','; }
"("         { return '('; }
")"         { return ')'; }
"{"         { return '{'; }
"}"         { return '}'; }

{real}      { return REAL; }
{inteiro}   { return NUM; }
{string}    { return STRING; }
{identificador} { insere(yytext); return ID; }

.           { printf("erro lexico na linha %d - %s\n", yylineno, yytext); }

%%

int yywrap() {
    return 1;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Uso: %s <arquivo_de_entrada>\n", argv[0]);
        return 1;
    }
    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Erro ao abrir arquivo");
        return 1;
    }
    int token, i = 1;
    token = yylex();
    while(token) {
        printf("%d) %d %s\n", i++, token, yytext);
        token = yylex();
    }
    imprime();
    fclose(yyin);
    return 0;
}
