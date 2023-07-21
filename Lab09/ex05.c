/*5. Faça um programa que leia um número N e:
a) Crie dinamicamente e leia um vetor de inteiro de N posições;
b) Leia um número inteiro X e conte e mostre os múltiplos desse número
que existem no vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, N, X, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    p = (int *) malloc(N*(sizeof(int)));

    printf("Digite um valor para X: ");
    scanf("%d", &X);

    for (i = 0; i < N; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", (p+i));
    }
    
    printf("Multiplos de %d: \n", X);
    for (i = 0; i < N; i++)
    {
        if (X % *(p+i) == 0)
        {
            printf("%d\n", *(p+i));
        }
        
    }
    
    free(p);
    return 0;
}