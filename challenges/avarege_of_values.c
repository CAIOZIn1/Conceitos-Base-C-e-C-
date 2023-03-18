#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, " ");

    printf("Digite dois valores para saber a sua média:");
    printf("\n");

    printf("=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-");
    printf("\n");

    int num1 , num2;

    printf("Digite o primeiro valor:");
    printf("\n");
    scanf("%d", &num1);

    printf("Digite o segundo valor:");
    printf("\n");
    fflush(stdin);
    scanf("%d", &num2);

    printf("\n");
    printf("O resultado da divisão entre os valores %d e %d é: %d:", num1, num2, (num1+num2)/2);
}