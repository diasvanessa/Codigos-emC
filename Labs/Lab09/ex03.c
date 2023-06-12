/*3. Faça um programa que leia do usuário o tamanho de um vetor a ser lido
e faça a alocação dinâmica de memória. Em seguida, leia do usuário
seus valores e mostre quantos dos números são pares e quantos são
ímpares.*/

#include <stdio.h>
#include <stdlib.h>

void Quant_num(int *v, int N, int *pares, int *impares){
    int i;

    for (i = 0; i < N; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", (v+i));
    }

    for (i = 0; i < N; i++)
    {
        if (*(v+i) % 2 == 0)
        {
            *pares += 1;
        }
        if (*(v+i) % 2 != 0)
        {
            *impares += 1;
        }
    }
}

int main(){
    int *p;
    int N, quant_pares = 0, quant_impares = 0;

    printf("Digite o tamanho desse vetor: \n");
    scanf("%d", &N);

    p = (int *) malloc(N*(sizeof(int)));

    Quant_num(p, N, &quant_pares, &quant_impares);
    printf("Quantidade de pares nesse vetor:%d\n", quant_pares);
    printf("Quantidade de impares nesse vetor:%d\n", quant_impares);

    free(p);
    return 0;
}