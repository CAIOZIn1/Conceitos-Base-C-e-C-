#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, " ");
    
    int a = 10, b = 5, c = -3;

    //Soma
    printf("O resultado da soma entre %d e %d é :%d", a, b, a + b);
    printf("\n");

    //Subtração
    printf("O resultado da subtração entre %d e %d é :%d", a, b, a - b);
    printf("\n");

    //Multiplicação
    printf("O resultado da multiplicação entre %d e %d é :%d", a, b, a * b);
    printf("\n");

    //Divisão
    printf("O resultado da divisão entre %d e %d é :%d", a, b, a / b);
    printf("\n");

    //Resto
    printf("O resultado do resto da divisão entre %d e %d é :%d", a, b, a % b);
    printf("\n");

    //Absoluto
    printf("O resultado absoluto de %c é :%d", c, abs(-3));
    printf("\n");

}