#ifndef BICOLA_H
#define BICOLA_H

#include "../lista/lista.h"
#include "../cola/cola.h"
#include <stdbool.h>

typedef Lista Bicola;

Bicola* bicola_crear();

bool bicola_vacia(Bicola *c);

void bicola_enqueue_head(Bicola *c, int dato);

void bicola_enqueue_tail(Bicola *c, int dato);

int bicola_denqueue_head(Bicola *c);

int bicola_denqueue_tail(Bicola *c);

int bicola_head(Bicola *c);

int bicola_tail(Bicola *c);

void bicola_destruir(Bicola *c);

#endif
