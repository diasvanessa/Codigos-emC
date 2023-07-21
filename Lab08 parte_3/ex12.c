/* 12 Escreva uma função que receba um array de inteiros V e os endereços de
duas variáveis inteiras, min e max, e armazene nessas variáveis o valor
mínimo e máximo do array. Escreva também uma função main que use essa
função. */

#include <stdio.h>

void Min_Max(int *v, int *min, int *max, int tam){
    int i;
    *min = v[0];
    *max = v[0];

    for (i = 1; i < tam; i++)
    {
        if (*(v+i) > *max)
        {
            *max = *(v+i);
        }
        if (*(v+i) < *min)
        {
            *min = *(v+i);
        }
    }
}

int main(){
    int vet[10], val_min, val_max, i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    
    Min_Max(vet, &val_min, &val_max, 10);
    printf("Valor minimo desse vetor: %d\nValor maximo desse vetor: %d", val_min, val_max);

    return 0;
}