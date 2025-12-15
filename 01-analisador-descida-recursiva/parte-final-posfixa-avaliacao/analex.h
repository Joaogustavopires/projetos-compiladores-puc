#ifndef ANALEX_H
#define ANALEX_H

#include <stdio.h>
#include <stdlib.h>

//Definição dos Tokens
#define NUM 257
#define ID  258

//Variáveis Globais
extern int linha;
extern char lexema[30];

//Protótipos
void erro_lexico();
int analex(char* input_string, int* pos); //Recebe a string de entrada

#endif
