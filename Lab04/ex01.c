/* 1. Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro. */

#include <stdio.h>

int dobro_2(int num);

int main(){
    int x, dobro_1;
    printf("Digite um numero inteiro:");
    scanf("%d", &x);
    dobro_1 = dobro_2(x);
    printf("O dobro de %d eh = %d", x, dobro_1);
    return 0;
}

int dobro_2(int num){
    return num*2;
}