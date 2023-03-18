# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <stdbool.h>

void main(){
    setlocale(LC_ALL, "");

    int a = true, b = false, c = false;

    if (a) {
        printf("O a vem pra ca");
        printf("\n");
    } else{
        printf("");
    }

    if (b){
        printf("");
    } else {
        printf("O b vem pra ca");
        printf("\n");
    }

    if (c){
        printf("");
    } else if(!c){
        printf("Vem c pra ca");
        printf("\n");
    }
    
}

//testando condicionais e valores booleanos