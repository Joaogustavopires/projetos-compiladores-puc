#include <stdio.h>
#include <stdlib.h>

// Definição dos tokens
#define NUM 256
#define ID 257

// Variáveis globais
char c;                 // Armazena o caractere lido atualmente
char lexema[30];        // Vetor para armazenar o texto do token (ex: "123" ou "a")

// Função para reportar erro léxico e encerrar
void erro_lexico() {
    printf("Erro lexico\n");
    exit(1);
}

// Analisador Léxico
int analex() {
    int i = 0; // Zera o índice do lexema para cada novo token

    // Pula espaços em branco, tabs e novas linhas
    do {
        c = getchar();
    } while (c == ' ' || c == '\t' || c == '\n');

    //  Trata o fim do arquivo (EOF)
    if (c == EOF) {
        return EOF;
    }

    // Reconhece operadores e delimitadores (tokens de um caractere)
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')' || c == ';') {
        return c; // Retorna o próprio caractere como seu token
    }

    //  Reconhece Constantes Inteiras [0-9]+
    if (c >= '0' && c <= '9') {
        // Loop para ler todos os dígitos do número
        while (c >= '0' && c <= '9') {
            lexema[i] = c; // Guarda o dígito no vetor
            i++;
            c = getchar(); // Lê o próximo caractere
        }

        lexema[i] = '\0';   // Finaliza a string com o terminador nulo
        ungetc(c, stdin);   // Devolve o último caractere lido (que não é um dígito)
        return NUM;
    }

    //  Reconhece Identificadores (um caractere)
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        lexema[0] = c;      // Guarda o único caractere no vetor
        lexema[1] = '\0';   // Finaliza a string
        // Como o ID só tem 1 caractere, não precisamos ler o próximo nem usar ungetc
        return ID;
    }

    //  Se chegou até aqui, o caractere não foi reconhecido
    erro_lexico();
    return -1; // Nunca será atingido, mas evita warnings do compilador
}
