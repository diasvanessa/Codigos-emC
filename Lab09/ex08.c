/*8. Faça um programa para armazenar em memória um vetor de dados
contendo 1500 valores do tipo int, usando a função de alocação
dinâmica de memória CALLOC:
a) Faça um loop e verifique se o vetor contém realmente os 1500
valores inicializados com zero (conte os 1500 zeros do vetor);
b) Atribua para cada elemento do vetor o valor do seu índice junto a
este vetor;
c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, i, count = 0;

    p = (int *) calloc(1500,sizeof(int));

    for (i = 0; i < 1500; i++)
    {
        if (*(p+i) == 0)
        {
            count++;
        }
        *(p+i) = i;
    }
    
    printf("Quantidade de 0 nesse vetor antes da modificacao: %d\n", count);

    printf("10 primeiros numeros:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(p+i));
    }

    printf("\n10 ultimos numeros: \n");

    for (i = 1499; i > 1489; i--)
    {
        printf("%d ", *(p+i));
    }
    
    free(p);
    return 0;
}