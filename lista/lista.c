#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "lista.h"
#include "nodo.h"

Lista* lista_crear() {
    Lista *lista = NULL;
    lista = (Lista*)malloc(sizeof(Lista));

    lista->head = lista->tail = NULL;

    return lista;
}

bool lista_vacia(Lista *lista) {
    return lista->head == NULL;
}

void lista_insertar_head(Lista* lista, int dato) {
    nodo_crear(dato);

    if(lista_vacia(lista)) {
        lista->head = nuevoNodo;
        lista->tail = nuevoNodo;
    } else {
        nuevoNodo->siguiente = lista->head;
        lista->head = nuevoNodo;
    }
}

void lista_insertar_tail(Lista* lista, int dato) {
    nodo_crear(dato);

     if(lista_vacia(lista)) {
        lista->head = nuevoNodo;
        lista->tail = nuevoNodo;
    } else {
        lista->tail->siguiente = nuevoNodo;
        lista->tail = nuevoNodo;
    }
}

int lista_eliminar_head(Lista* lista) {
    if(lista_vacia(lista)) printf("Lista vacia");

    Nodo *aux_head = lista->head;
    int dato = aux_head->dato;//aqui no nos pasan dato pero lo necesitamos para devolverlo al final de la función
    lista->head = aux_head->siguiente;

    if(lista->head == NULL) lista->tail = NULL;// si solo habia un nodo, tail queda en NULL
    free(aux_head);
    return dato;
}

int lista_eliminar_tail(Lista* lista) {
    if(lista_vacia(lista)) printf("Lista vacia");

    Nodo *aux_head = lista->head;
    int dato; 

    if(lista->head == lista->tail) {
        dato = aux_head->dato;
        free(aux_head);
        lista->head = lista->tail = NULL;
        return dato;
    }

    while(aux_head->siguiente != lista->tail) {
        aux_head = aux_head->siguiente;
    }

    dato = lista->tail->dato;

    free(lista->tail);
    lista->tail = aux_head;
    lista->tail->siguiente = NULL;

    return dato;
}

void lista_imprimir(Lista* lista) {
    Nodo* actual = lista->head;

    while(actual != NULL)
    {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

void lista_destruir(Lista* lista) {
    while( !lista_vacia(lista)) {//mientras la lista no este vacia
        lista_eliminar_head(lista);//podria usar lista_eliminar_tail pero es menos eficiente
    }

    free(lista);
}
