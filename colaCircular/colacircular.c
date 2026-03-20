#include "colacircular.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

ColaCircular* cola_circular_crear() {
    return lista_crear();
}

void empty(ColaCircular* cc) {
    while(cc->head != NULL) {
        cola_circular_dequeue(cc);
    }
}

bool is_empty(ColaCircular* cc) {
    return cc->head == NULL;
}

void cola_circular_enqueue(ColaCircular* cc, int dato) {
    lista_insertar_tail(cc, dato);
    cc->tail->siguiente = cc->head;
}

int cola_circular_dequeue(ColaCircular* cc) {
    if(is_empty(cc)) {
        printf("Cola circular vacia");
        return -1;
    } 
    
    int dato;

    if(cc->tail == cc->head) {
        dato = cc->head->dato;
        nodo_destruir(cc->head);
        cc->head = cc->tail = NULL;
    } else {
        Nodo *tmp = cc->head;
        cc->tail->siguiente = cc->head->siguiente;
        cc->head = cc->head->siguiente;
        tmp->siguiente = NULL;
        nodo_destruir(tmp);
    }
    return dato;
}

int cola_circular_frente(ColaCircular* cc) {
    if(is_empty(cc)) return -1;
    return cc->head->dato;
}

int cola_circular_fin(ColaCircular* cc) {
    if(is_empty(cc)) return -1;
    return cc->tail->dato;
}

void liberar_colaCircular(ColaCircular* cc) {
    if(!is_empty(cc)) empty(cc);
    free(cc);
}