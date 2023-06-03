/* 8 Implemente uma função que receba como parâmetro um array de números
reais de tamanho N e retorne quantos números negativos há nesse array.
Essa função deve obedecer ao protótipo: int negativos(float *vet, int
N); */

#include <stdio.h>

int negativos(float *v, int tam, int *n){
    int i;
    for (i = 0; i < tam; i++)
    {
        if (*(v+i) < 0)
        {
            (*n)++;
        }
    }

    return *n;
}

int main(){
    float vet[10];
    int i, vezes = 0, retorno_func;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%f", &vet[i]);
    }
    
    retorno_func = negativos(vet, 10, &vezes);
    printf("Ha %d numeros negativos nesse vetor!\n", retorno_func);

    return 0;
}