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
    lista_insertar_head(c, dato);
}

void bicola_enqueue_tail(Bicola *c, int dato) {
    lista_insertar_tail(c, dato);
}

int bicola_denqueue_head(Bicola *c) {
    return lista_eliminar_head(c);
}

int bicola_denqueue_tail(Bicola *c) {
    return lista_eliminar_tail(c);
}

int bicola_head(Bicola *c) {
    if(bicola_vacia(c)) {
        printf("La bicola esta vacia");
        return -1;
    }

    return c->head->dato;
}

int bicola_tail(Bicola *c) {
    if(bicola_vacia(c)) {
        printf("La bicola esta vacia");
        return -1;
    }

    return c->tail->dato;
}

void bicola_destruir(Bicola *c) {
    lista_destruir(c);
}
