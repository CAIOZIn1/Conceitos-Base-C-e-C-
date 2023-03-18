# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    float num1, num2, num3, result;

    printf("Digite três valores para saber se sua média está acima de 7: ");

    scanf("%f %f %f", &num1, &num2, &num3);

    result = (num1 + num2 + num3) / 3;


    if (result >= 7){
        printf("O valor está acima da média, pois este é: %.2f", result);
    } else{
        printf("O valor não está acima da média, pois este é: %.2f", result);
    }
}