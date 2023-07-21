/*7 Escreva uma função que aceita como parâmetro um array de inteiros com N
valores, e determina o maior elemento do array e o número de vezes que
este elemento ocorreu no array. Por exemplo, para um array com os
seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retorna para
o programa que a chamou o valor 15 e o número 3 (indicando que o número
15 ocorreu 3 vezes). A função deve ser do tipo void.*/

#include <stdio.h>

void Elemento(int *v, int tam, int *ma, int *n){
    int i;
    *ma = v[0];

    for (i = 1; i < tam; i++)
    {
        if (*(v+i) > *ma)
        {
            *ma = *(v+i);
        }           
    }

    for (i = 0; i < 10; i++)
    {
        if (*(v+i) == *ma)
        {
            (*n)++;
        }
    }
}

int main (){
    int vet[10], i, maior_valor = 0, n = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    
    Elemento(vet, 10, &maior_valor, &n);

    printf("O maior elemento desse vetor eh: %d e ele se repete %d vezes", maior_valor, n);

    return 0;
}