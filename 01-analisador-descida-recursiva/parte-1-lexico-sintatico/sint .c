#include "analex.h"
#include <stdio.h>
#include <stdlib.h>

void S();
void E();
void T();
void E_linha();
void T_linha();
void F();
void erro_sintatico();

// O Token atual
int token;

//Consome um Token e vai para o próximo
void consome(int t) {
    if (token == t)
        token = analex();
    else
        erro_sintatico();
}


void S() {
    E();
    consome(';');
}

void E() {
    T();
    E_linha();
}

void E_linha() {
    if (token == '+') {
        consome('+');
        T();
        E_linha();
    } else if (token == '-') {
        consome('-');
        T();
        E_linha();
    }
}

void T() {
    F();
    T_linha();
}

void T_linha() {
    if (token == '*') {
        consome('*');
        F();
        T_linha();
    } else if (token == '/') {
        consome('/');
        F();
        T_linha();
    }
}

void F() {
    if (token == ID)
        consome(ID);
    else if (token == NUM)
        consome(NUM);
    else if (token == '(') {
        consome('(');
        E();
        consome(')');
    } else {
        erro_sintatico();
    }
}

void erro_sintatico() {
    printf("Erro sintatico\n");
    exit(1);
}

int main() {
    printf("Digite a expressao a ser analisada, terminada com ';':\n");
    token = analex(); // Pega o primeiro token da entrada

    S(); // Chama o símbolo inicial da gramática (que agora espera um ';')

    // Se a função S() terminou sem chamar erro_sintatico(), então a análise foi bem-sucedida.
    printf("Analise sintatica bem-sucedida\n");

    return 0;
}
