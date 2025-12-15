#include <stdio.h>
#include "semantic.h" 

int retorna_maior_tipo(int tipo1, int tipo2){
	if(tipo1 == FLOAT || tipo2 == FLOAT)
		return FLOAT;
	if(tipo1 == INT || tipo2 == INT)
		return INT;
	else
		return CHAR;
}

int get_tam_tipo(int tipo){
    switch(tipo){
        case INT: return 4;
        case FLOAT: return 4;
        case CHAR: return 1;
    }
    return -1;
}

int tipos_inconsistentes_atrib(int tipo1, int tipo2){
    if(tipo1 == tipo2)
        return 0;
    if(tipo1 == FLOAT && tipo2 == INT)
        return 0;
    if(tipo1 == FLOAT && tipo2 == CHAR)
        return 0;
    if(tipo1 == INT && tipo2 == CHAR)
        return 0;

    return 1;
}