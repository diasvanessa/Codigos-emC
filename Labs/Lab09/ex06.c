/*6 Elabore um programa que dado um array e um valor do mesmo tipo do
array, preencha os elementos de array com esse valor. Não utilize índices
para percorrer o array, apenas aritmética de ponteiros.*/

#include <stdio.h>

int main(){
    int vet[8], i, num;
    int *p;

    p = vet;

    printf("Insira um valor para preencher o vetor:\n");
    scanf("%d", &num);

    for (i = 0; i < 8; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", p+i);
    }
    
    printf("Vetor preenchido:\n");
    for (i = 0; i < 8; i++)
    {
        *(p+i) = num;
        printf("%d ", *(p+i));
    }
    
    return 0;
}