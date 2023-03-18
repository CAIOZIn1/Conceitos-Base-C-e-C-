# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    printf("Digite dois valores para saber o resultado absoluto de suas diferenças");
    printf("\n");

    float valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    float result = valor1 - valor2;

    printf("O resultado é: %d", abs(result));

}