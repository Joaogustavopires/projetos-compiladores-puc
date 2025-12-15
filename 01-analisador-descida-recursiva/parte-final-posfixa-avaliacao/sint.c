#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
#include "analex.h"

//Variáveis Globais
int token;
char lexema[30];
int linha = 1;
char posfixa[MAX] = "";
int posfixa_idx = 0;

//Implementação do Analisador Léxico (lê de uma string)
void erro_lexico() {
    printf("ERRO LEXICO NA LINHA %d\n", linha);
    exit(1);
}

int analex(char* input_string, int* pos) {
    int i = 0;
    char c;

    //Ignora espaços e tabs
    while (input_string[*pos] == ' ' || input_string[*pos] == '\t' || input_string[*pos] == '\r') {
        (*pos)++;
    }

    //Conta novas linhas (embora com fgets, teremos apenas uma)
    if (input_string[*pos] == '\n') {
        linha++;
        (*pos)++;
    }

    c = input_string[*pos];

    if (c == '\0') {
        return EOF;
    }

    (*pos)++; //Avança na string

    //Operadores e Delimitadores
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')' || c == ';') {
        lexema[0] = c;
        lexema[1] = '\0';
        return c;
    }

    //Números
    if (c >= '0' && c <= '9') {
        lexema[i++] = c;
        while (input_string[*pos] >= '0' && input_string[*pos] <= '9') {
            lexema[i++] = input_string[(*pos)++];
        }
        lexema[i] = '\0';
        return NUM;
    }

    //Identificadores
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        lexema[i++] = c;
        while(((input_string[*pos] >= 'a' && input_string[*pos] <= 'z') ||
               (input_string[*pos] >= 'A' && input_string[*pos] <= 'Z') ||
               (input_string[*pos] >= '0' && input_string[*pos] <= '9'))) {
            lexema[i++] = input_string[(*pos)++];
        }
        lexema[i] = '\0';
        return ID;
    }

    erro_lexico();
    return -1;
}

void erro_sintatico() {
    printf("ERRO SINTATICO NA LINHA %d\n", linha);
    exit(1);
}

//O ponteiro da string de entrada
char* input_str;
int current_pos = 0;

void consome(int t) {
    if (token == t) {
        token = analex(input_str, &current_pos);
    } else {
        erro_sintatico();
    }
}

void adiciona_a_posfixa(const char* s) {
    strcat(posfixa, s);
    strcat(posfixa, " ");
}

int precedencia(int op) {
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

void F(); //Protótipo para E() poder enxergar F()
void T();
void E();

void F() {
    if (token == '(') {
        push('(');
        consome('(');
        E();
        consome(')');
        while (tam > 0 && topo() != '(') {
            char op_str[2] = { (char)pop(), '\0' };
            adiciona_a_posfixa(op_str);
        }
        if (tam > 0) pop(); // Remove o '('
    } else if (token == NUM) {
        adiciona_a_posfixa(lexema);
        consome(NUM);
    } else if (token == ID) {
        erro_sintatico();
    } else {
        erro_sintatico();
    }
}

void T() {
    F();
    while (token == '*' || token == '/') {
        int op = token;
        while (tam > 0 && precedencia(topo()) >= precedencia(op)) {
            char op_str[2] = { (char)pop(), '\0' };
            adiciona_a_posfixa(op_str);
        }
        push(op);
        consome(op);
        F();
    }
}

void E() {
    T();
    while (token == '+' || token == '-') {
        int op = token;
        while (tam > 0 && precedencia(topo()) >= precedencia(op)) {
            char op_str[2] = { (char)pop(), '\0' };
            adiciona_a_posfixa(op_str);
        }
        push(op);
        consome(op);
        T();
    }
}

void S() {
    E();
    while (tam > 0) {
        char op_str[2] = { (char)pop(), '\0' };
        adiciona_a_posfixa(op_str);
    }
    consome(';');
}

int avalia_posfixa(); //Protótipo

int main() {
    char buffer[MAX];

    printf("Digite a expressao a ser analisada, terminada com ';':\n");

    //LÊ A LINHA INTEIRA DE UMA VEZ
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return 1; // Erro ou sem entrada
    }

    input_str = buffer; //Aponta para o buffer lido
    current_pos = 0;    //Começa a análise do início do buffer

    token = analex(input_str, &current_pos);
    S();

    if (token != EOF && token != '\n') {
        erro_sintatico();
    }

    //Remove o último espaço em branco
    if (strlen(posfixa) > 0) {
        posfixa[strlen(posfixa) - 1] = '\0';
    }

    printf("EXPRESSAO CORRETA\n");
    printf("NOTACAO POSFIXA: %s\n", posfixa);
    printf("RESULTADO DA EXPRESSAO: %d\n", avalia_posfixa());

    return 0;
}


int avalia_posfixa() {
    tam = 0; //Zera a pilha
    char *tk = strtok(posfixa, " ");

    while (tk != NULL) {
        if (isdigit(tk[0]) || (tk[0] == '-' && isdigit(tk[1]))) {
            push(atoi(tk));
        } else {
            b = pop();
            a = pop();
            switch (tk[0]) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/':
                    if (b == 0) erro_sintatico();
                    push(a / b);
                    break;
            }
        }
        tk = strtok(NULL, " ");
    }
    return pop();
}
