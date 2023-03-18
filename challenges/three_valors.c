#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    printf("Digite três valores para saber seu produto: ");

    float valor1, valor2, valor3,result;

    scanf("%f %f %f", &valor1, &valor2, &valor3);

    result = valor1 * valor2 * valor3;

    printf("O resultado é: %.1f", result);
}