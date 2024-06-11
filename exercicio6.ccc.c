#include <stdio.h>

int main(){
    int soma=0, media;
    int notas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i <10; i++){
        soma = soma + notas[i];
        }
        printf("soma: %d \n", soma);
}
