#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../bicola/bicola.h"
#include "../lista/lista.h"

Bicola* bicola_crear() {
    return lista_crear();
}

bool bicola_vacia(Bicola *c) {
    return lista_vacia(c);
}

void bicola_enqueue_head(Bicola *c, int dato) {
    llista_insertar_head(c);
}

void bicola_enqueue_tail(Bicola *c, int dato) {
    lista_insertar_tail(c);
}

void bicola_denqueue_head(Bicola *c, int dato) {
    if(cola_vacia(c)) printf("Cola vacia");
    Nodo aux_head = 
}

void bicola_denqueue_tail(Bicola *c, int dato);

int bicola_head(Bicola *c);

int bicola_tail(Bicola *c);

void bicola_destruir(Bicola *c);