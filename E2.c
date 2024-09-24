#include <stdio.h>

void TrocaValores(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

    
    int main(){
        int num1 = 10, num2 = 20;

        printf("Valores pre troca: num1 = %d, num2 = %d\n", num1, num2);

        TrocaValores (&num1, &num2);

        printf("Valores pos troca: num1 = %d, num2 = %d\n", num1, num2);

        return 0;
    }
