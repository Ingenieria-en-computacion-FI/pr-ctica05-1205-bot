#ifndef COLACIRCULAR_H
#define COLACIRCULAR_H

#include "../lista/lista.h"
#include <stdbool.h>

typedef Lista ColaCircular;

ColaCircular* cola_circular_crear();

bool cola_circular_vacia(ColaCircular* cc);

void cola_circular_enqueue(ColaCircular* cc, int dato);

int cola_circular_dequeue(ColaCircular* cc);

int cola_circular_frente(ColaCircular* cc);

int cola_circular_fin(ColaCircular* cc);

void cola_circular_destruir(ColaCircular* cc);

#endif