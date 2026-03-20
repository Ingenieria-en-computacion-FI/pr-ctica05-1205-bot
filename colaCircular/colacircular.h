#ifndef COLACIRCULAR_H
#define COLACIRCULAR_H

#include "../lista/lista.h"
#include "../nodo/nodo.h"
#include <stdbool.h>

typedef Lista ColaCircular;

ColaCircular* cola_circular_crear();

void empty(ColaCircular* cc);

bool is_empty(ColaCircular* cc);

void cola_circular_enqueue(ColaCircular* cc, int dato);

int cola_circular_dequeue(ColaCircular* cc);

int cola_circular_frente(ColaCircular* cc);

int cola_circular_fin(ColaCircular* cc);

void liberar_colaCircular(ColaCircular* cc);

#endif