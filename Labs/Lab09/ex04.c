/*4 Crie um programa que contenha um array contendo 5 elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo
valores pares.
*/

#include <stdio.h>

int main(){
    int vet[5];
    int *p;
    int i;

    p = vet;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", (p+i));
    }
    
    for (i = 0; i < 5; i++)
    {
        if (*(p+i) % 2 == 0)
        {
            printf("Numero par: %d ", *(p+i));
            printf("Endereco: %p\n", (p+i));
        }   
    }
    
    return 0;
}