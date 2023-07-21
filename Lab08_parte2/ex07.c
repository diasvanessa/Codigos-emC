/*7 Escreva um programa que receba um array de inteiros com 10 elementos
digitados pelo usuário e encontre o menor (min) e o maior (max) elemento
desse array. Utilize ponteiros tanto para acessar o array quanto para acessar
as variáveis min e max, ou seja, são necessários pelo menos 3 ponteiros.*/

#include <stdio.h>

void Numero(int *v, int *me, int *ma, int tamanho){
    int i;
    *me = v[0];
    *ma = v[0];

    for (i = 1; i < tamanho; i++)
    {
        if(v[i] < *me){
            *me = v[i];
        }
        if (v[i] > *ma)
        {
            *ma = v[i];
        }
    }
    printf("Menor numero: %d\nMaior numero: %d", *me, *ma);
}

int main(){
    int vet[10], menor, maior, i;
    int *p;

    p = vet;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", (p+i));
    }
    
    Numero(p, &menor, &maior, 10);

    return 0;
}