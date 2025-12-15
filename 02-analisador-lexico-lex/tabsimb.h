#ifndef TABSIMB_H
#define TABSIMB_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

struct symbol {
    char lexema[50];
    int tam;
    int tipo;
};

int tam_tab = 0;
struct symbol Tabela[MAX];

int procura(char *lexema) {
    int i;
    for (i = 0; i < tam_tab; i++)
        if (strcmp(Tabela[i].lexema, lexema) == 0)
            return i;
    return -1;
}

int insere(char *lexema) {
    int pos;
    if ((pos = procura(lexema)) != -1) {
        return pos;
    }
    strcpy(Tabela[tam_tab].lexema, lexema);
    return tam_tab++;
}

char* obtemLexema(int pos) {
        if (pos >= 0 && pos < tam_tab) {
        return Tabela[pos].lexema;
    }
    return NULL;
}

void imprime() {
    int i;
    printf("\nTABELA DE SIMBOLOS\n");
    for (i = 0; i < tam_tab; i++)
        printf("%d - %s\n", i, Tabela[i].lexema);
}

#endif
