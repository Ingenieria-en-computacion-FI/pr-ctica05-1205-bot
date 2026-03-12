#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "lista.h"

Lista* lista_crear() {
    Lista *lista = NULL;
    lista = (Lista*)malloc(sizeof(Lista));

    lista->head = NULL;
    lista->tail = NULL;

    return lista;
}

int lista_vacia(Lista* lista) {
    return lista->head == NULL;
}

void lista_insertar_head(Lista* lista, int dato) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->dato = dato;
    nuevo->siguinte = NULL;

    if(lista_vacia(lista)) {
        lista->head = nuevo;
        lista->tail = nuevo;
    } else {
        nuevo->siguiente = lista->head;
        lista->head = nuevo;
    }
}

void lista_insertar_tail(Lista* lista, int dato) {
    Nodo *nuevo =(Nodo*)malloc(sizeof(Nodo));
    nuevo->dato = dato;
    nuevo->siguiente = NULL;

     if(lista_vacia(lista)) {
        lista->head = nuevo;
        lista->tail = nuevo;
    } else {
        lista->tail->siguiente = nuevo;
        lista->tail = nuevo;
    }
}

int lista_eliminar_head(Lista* lista) {
    if(lista_vacia(lista)) return -1;

    Nodo *temp = lista->head;
    int dato = temp->dato;

    lista->head = temp->siguiente;

    if(lista->head == NULL) lista->tail = NULL;
    free(temp);
    return dato;
}

int lista_eliminar_tail(Lista* lista) {
    if(lista_vacia(lista)) {
        printf("Errror");
        return -1;
    }

    Nodo *actual = lista->head;
    int dato;

    if(lista->head == lista->tail) {
        dato = actual->head;
        free(actual);
        lista->head = NULL;
        lista->tail = NULL;
        return dato;
    }

    while(actual->siguiente != lista->tail) {
        actual = actual->siguiente;
    }

    dato = lista->tail->dato;

    free(lista->tail);
    lista->tail = actual;
    lista->tail->siguiente = NULL;

    return dato;
}

void lista_imprimir(Lista* lista)
{
    Nodo* actual = lista->head;

    while(actual != NULL)
    {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

void lista_destruir(Lista* lista) {
    while( !lista_vacia(lista)) {
        lista_eliminar_head(lista);
    }

    free(lista);
}
