#include "area.h"

float calcular_area_face(Cubo* c) {
    return c->aresta * c->aresta;
}

float calcular_area_total(Cubo* c) {
    return 6 * calcular_area_face(c);
}