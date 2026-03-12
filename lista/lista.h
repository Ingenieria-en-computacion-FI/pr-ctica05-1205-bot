#ifndef LISTA_H
#define LISTA_H
#include <stdbool.h>

#include "../nodo/nodo.h"

typedef struct {
    Nodo* head;
    Nodo* tail;
} Lista;

Lista* lista_crear();

bool lista_vacia(Lista* lista);

void lista_insertar_head(Lista* lista, int dato);

/*
TODO
Inserta al final usando tail
*/
void lista_insertar_tail(Lista* lista, int dato);

/*
TODO
Eliminar del inicio
*/
int lista_eliminar_head(Lista* lista);

/*
TODO
Eliminar del final
*/
int lista_eliminar_tail(Lista* lista);

void lista_imprimir(Lista* lista);

void lista_destruir(Lista* lista);

#endif
