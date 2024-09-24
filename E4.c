#include <stdio.h>


void lerMatriz(int matriz[3][3]) {
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}


int somaDiagonalPrincipal(int matriz[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i]; 
    }
    return soma;
}

int main() {
    int matriz[3][3];
    
    lerMatriz(matriz);
    
    int soma = somaDiagonalPrincipal(matriz);
    
    printf("A soma dos elementos da diagonal principal é: %d\n", soma);
    
    return 0;
}
