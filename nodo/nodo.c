#include <stdlib.h>
#include <stdio.h>
#include "nodo.h"

Nodo* nodo_crear(int dato) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    if(nuevoNodo != NULL) {
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    return nuevoNodo;
    }
}

void nodo_destruir(Nodo* nodo) {
    if(nodo != NULL) {
        free(nodo);
    } 
} 
