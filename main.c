#include <stdio.h>
#include "aresta.h"
#include "area.h"
#include "volume.h"

int main() {
    float aresta;

    printf("Digite o comprimento da aresta do cubo: ");
    scanf("%f", &aresta);

    Cubo* cubo = criar_cubo(aresta);

    printf("Comprimento da aresta: %.2f\n", obter_aresta(cubo));
    printf("Perímetro das arestas: %.2f\n", calcular_perimetro(cubo));
    printf("Área de uma face: %.2f\n", calcular_area_face(cubo));
    printf("Área total das faces: %.2f\n", calcular_area_total(cubo));
    printf("Volume do cubo: %.2f\n", calcular_volume(cubo));

    destruir_cubo(cubo);

    return 0;
}