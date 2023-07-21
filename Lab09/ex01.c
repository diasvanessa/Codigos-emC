/*1. Crie um programa que:
a) Aloque dinamicamente um array de 5 números inteiros;
b) Peça para o usuário digitar os 5 números no espaço alocado;
c) Mostre na tela os 5 números;
d) Libere a memória alocada.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    int i, N = 5;

    p = (int *) malloc(N*sizeof(int));

    for (i = 0; i < N; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", (p+i));
    }
    
    printf("Vetor criado: \n");
    for (i = 0; i < N; i++)
    {
        printf("%3d", *(p+i));
    }
    
    free(p);
    return 0;
}