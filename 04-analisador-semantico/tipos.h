#include "sint.h"
#include "stdio.h"

int retorna_maior_tipo(int tipo1, int tipo2){
    if (tipo1 == FLOAT || tipo2 == FLOAT) return FLOAT;
    if (tipo1 == INT || tipo2 == INT) return INT;
    return CHAR;
}

int get_tam_tipo(int tipo){
    if (tipo == INT) return 4;
    if (tipo == FLOAT) return 4;
    if (tipo == CHAR) return 1;
    return 0;
}

int tipos_inconsistentes_atrib(int tipo_destino, int tipo_origem){
    if (tipo_destino == tipo_origem) return 0;
    
    if (tipo_destino == INT && tipo_origem == CHAR) return 0;
    
    if (tipo_destino == FLOAT && (tipo_origem == INT || tipo_origem == CHAR)) return 0;
    
    return 1; 
}