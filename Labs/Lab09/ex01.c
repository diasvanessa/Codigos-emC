/* 1 Crie um programa que contenha um array de float contendo 10 elementos.
Utilizando aritmética de ponteiro, imprima o endereço de cada posição
desse array.*/

#include <stdio.h>

int main(){
    float vet[10];
    float *p;
    int i;

    p = vet;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%f", p+i);
    }

    for (i = 0; i < 10; i++)
    {
        printf("Conteudo de vet[%d]: %.2f\n", i, *(p+i));
        printf("Endereco de vet[%d]: %p\n", i, (p+i));
    }
    
    return 0;
}