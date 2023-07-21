/*2. Faça um programa que leia do usuário o tamanho de um vetor a ser lido
e faça a alocação dinâmica de memória. Em seguida, leia do usuário
seus valores e imprima o vetor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, i, N;

    printf("Digite o tamanho desse vetor: ");
    scanf("%d", &N);


    p = (int *) malloc(N*sizeof(int));

    for (i = 0; i < N; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", (p+i));
    }
    
    printf("Vetor digitado:\n");
    for (i = 0; i < N; i++)
    {
        printf("%5d", *(p+i));
    }

    free(p);
    return 0;
}