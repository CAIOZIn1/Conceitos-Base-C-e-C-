# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int valor;

    printf("Digite um número para saber se o seu valor é impar ou par:");

    scanf("%d", &valor);

    if (valor % 2 != 0){
        printf("Este valor é impar");
    } else if (valor % 2 == 0) //-> poderia utilizar o else tbm
    {
        printf("Este valor é par");
    }

}

//Obs.: As condicionais matemáticas são identicas as das outras linguagens, portanto: ==, >=, <=, != se matem