#ifndef BICOLA_H
#define BICOLA_H

#include "../lista/lista.h"
#include "../cola/cola.h"
#include <stdbool.h>

typedef struct {
    Cola *c;
} Bicola;

Bicola* cola_crear();

bool bicola_vacia(Cola *c);

void bicola_enqueue_head(Cola *c, int dato);

int bicola_dequeue_head(Cola *c);

int bicola_dequeue_tail(Cola *c);

void bicola_destruir(Cola *c);

#endif
