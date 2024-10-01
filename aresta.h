#ifndef ARESTA_H
#define ARESTA_H

typedef struct Cubo Cubo;

// Função para criar um cubo com uma aresta específica
Cubo* criar_cubo(float aresta);

// Função para destruir um cubo e liberar a memória
void destruir_cubo(Cubo* c);

// Função para retornar o comprimento da aresta
float obter_aresta(Cubo* c);

// Função para retornar o perímetro das arestas
float calcular_perimetro(Cubo* c);

#endif // ARESTA_H