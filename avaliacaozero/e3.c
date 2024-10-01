#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, 100, stdin); // Leitura da string incluindo espaços

    printf("A string tem %lu caracteres (incluindo espaços).\n", strlen(str) - 1); // -1 para excluir o '\n' lido pelo fgets
    return 0;
}
