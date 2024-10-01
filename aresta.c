#include <stdlib.h>
#include "aresta.h"

struct Cubo {
    float aresta;
};

Cubo* criar_cubo(float aresta) {
    Cubo* c = (Cubo*) malloc(sizeof(Cubo));
    if (c != NULL) {
        c->aresta = aresta;
    }
    return c;
}

void destruir_cubo(Cubo* c) {
    free(c);
}

float obter_aresta(Cubo* c) {
    return c->aresta;
}

float calcular_perimetro(Cubo* c) {
    return 12 * c->aresta;
}