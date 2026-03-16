#include <stdlib.h>
#include <stdio.h>
#include "cola.h"


Cola* cola_crear() {
    Cola* cola = (Cola*)malloc(sizeof(Cola));
    if(cola != NULL) {
        cola->lista = lista_crear();
    }   
    return cola;
}

bool cola_vacia(Cola* cola) {
    if(cola == NULL) return true;
    return lista_vacia(cola->lista);
}

void cola_enqueue(Cola* cola, int dato) {
    return lista_insertar_tail(cola->lista, dato);
}

int cola_dequeue(Cola* cola) {
    return lista_eliminar_head(cola->lista);
}

int cola_frente(Cola* cola) {
    if(cola_vacia(cola)) return -1;
    
    return cola->lista->head->dato;
}

void cola_destruir(Cola* cola) {
    lista_destruir(cola->lista);
    free(cola);
}
