#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // -> importar biblioteca que pertime o uso de acentos

//#define NUMERO_CONSTANTE = 0 -> define um número constante para a aplicação

void main(){
    //Permite que usemos acentos nas palavras
    setlocale (LC_ALL, ""); // -> permite colocar letras com acentos
    printf("Hello World = Olá mundo.\n");

    int num1 = 5;
    int num2 = 6;
    //printf("%d", a + b);
    printf("O valor de num1 + num2 = %d \n", num1 + num2);
    scanf("%d", &num1); // -> funciona semelhante a um input
    printf("A variável 'num1' mudou para: %d", num1);

    float num3 = 6.5;
    printf("\nO valor da variável 'num3' é: %f", num3);

    char letra = 'C';
    printf("\n O valor de 'letra' é: %c", letra);
    fflush(stdin); // -> limpar a memória que utilizamos anteriormente
    scanf("%c", &letra);
    printf("\nMudamos o valor de 'letra' para: %c", letra);
}