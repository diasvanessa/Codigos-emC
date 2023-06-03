/*9 Escreva um programa que declare um array de inteiros e um ponteiro para
inteiros. Associe o ponteiro ao array. Agora, some mais um (+1) a cada
posição do array usando o ponteiro (use *).*/

#include <stdio.h>

int main(){
    int vet [10], *p, i;
    p = vet;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", (p+i));
        *(p+i) += 1;
    }
    
    printf("Vetor somado +1: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(p+i));
    }
    
    return 0;
}
