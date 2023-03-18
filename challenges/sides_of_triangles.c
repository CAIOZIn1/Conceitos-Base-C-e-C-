#include <stdlib.h>
#include <stdio.h>

int soma =0;

void main(){

    for (int i=1; i<=100; i++){
        soma = i + soma;
    }

    printf("%d", &soma);

}