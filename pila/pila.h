#ifndef PILA_H
#define PILA_H

#include "../lista/lista.h"
#include <stdbool.h>

typedef Lista Pila;

Pila* pila_crear();

bool pila_vacia(Pila* pila);

/*
TODO
push debe insertar por tail
*/
void pila_push(Pila* pila, int dato);

/*
TODO
pop debe eliminar por tail
*/
int pila_pop(Pila* pila);

/*
TODO
regresa elemento superior (tail)
*/
int pila_top(Pila* pila);

void pila_destruir(Pila* pila);

#endif
