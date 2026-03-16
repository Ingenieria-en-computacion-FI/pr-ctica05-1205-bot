#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pila.h"
#include "../lista/lista.h"

Pila* pila_crear() {
    Pila *pila = (Pila*)malloc(sizeof(Pila));
    
    if(pila != NULL) {
        pila->lista = lista_crear();  
    }
    return pila;
}

bool pila_vacia(Pila* pila) {
    if(pila == NULL) return true; 
    
    return lista_vacia(pila->lista);
}

void pila_push(Pila* pila, int dato) {
    lista_insertar_tail(pila->lista, dato);
}

int pila_pop(Pila* pila) {
    return lista_eliminar_tail(pila->lista);
}

int pila_top(Pila* pila) {
    return pila->lista->tail->dato; 
}

void pila_destruir(Pila* pila) {
    if(pila != NULL) {
        lista_destruir(pila->lista);
        free(pila);
    }
}
