#ifndef PILHA_H
#define PILHA_H

#define MAX 1000
int Pilha[MAX];
int tam = 0;
int a,b;

void push(int valor) {
    if (tam < MAX) {
	    Pilha[tam++] = valor;
    } else {
        printf("ERRO: Pilha cheia!\n");
        exit(1);
    }
}

int pop() {
    if (tam > 0) {
	    return Pilha[--tam];
    }
    return -1;
}

int topo() {
    if (tam > 0) {
        return Pilha[tam-1];
    }
    return -1;
}

#endif
