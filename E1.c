#include <stdio.h>

void TrocaValores(int a, int b){
    int temp = a;
    a = b;
    b = temp;
     printf("a = %d, b = %d\n", a, b);
}

    
    int main(){
        int num1 = 10, num2 = 20;

        printf("Valores pre troca: num1 = %d, num2 = %d", num1, num2);

        TrocaValores (num1, num2);

        printf("Valores pos troca: num1 = %d, num2 = %d", num1, num2);

        return 0;
    }
