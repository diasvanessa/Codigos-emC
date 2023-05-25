/* 8 Faça um programa que leia seis números e armazene-os em um vetor.
Utilizando aritmética de ponteiro, imprima os valores do vetor. O programa
deve apresentar também o endereço de memória desses números */

#include <stdio.h>

int main(){
    int numeros[6], i;
    int *p;

    p = numeros;

    for (i = 0; i < 6; i++)
    {
        printf("Digite um valor para numeros[%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 6; i++)
    {
        printf("Numero da posicao %d: %d\n", i, *(p+i));
        printf("Endereco de memoria: %p\n", (p+i));
    }  

    return 0;
}