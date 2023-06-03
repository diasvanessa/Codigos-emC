/* 11 Escreva uma função que retorna o maior valor de um array de tamanho N.
Escreva um programa que leia N valores inteiros, imprima o array com ‘k’
elementos por linha, e o maior elemento. O valor de ‘k’ também deve ser
fornecido pelo usuário.
*/

#include <stdio.h>

void Imprime_Vetor(int *v, int tam, int *ma){
    int i;
    *ma = v[0];

    for (i = 1; i < tam; i++)
    {
        if (*(v+i) > *ma)
        {
            *ma = *(v+i);
        }
    }
}

int main(){
    int vet[25], k, i, maior_elemento, j, count;

    printf("Digite um valor para k:");
    scanf("%d", &k);
    for (i = 0; i < 25; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    
    Imprime_Vetor(vet, 25, &maior_elemento);
    printf("Maior elemento desse vetor: %d\n", maior_elemento);

    printf("Vetor com 'k' elementos por linha:\n");
    for (i = 0; i < 25;)
    {
        count = 0;
        for (j = i; count < k; j++)
        {
            printf("%d ", vet[j]);
            count++;
            i++;
        }
        printf("\n");
    }
    
    return 0;
}