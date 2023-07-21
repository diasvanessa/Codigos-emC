/* 3 Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e
imprima o dobro de cada valor lido.
*/

#include <stdio.h>

int main(){
    int vet[5];
    int *p;
    int i;

    p = vet;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", (p+i));
    }

    for (i = 0; i < 5; i++)
    {
        printf("Numero: %d\n", *(p+i));
        printf("Dobro: %d\n", (*(p+i)*2));
    }
    
    return 0;
}