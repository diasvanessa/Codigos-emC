/*15.Faça um programa que leia dois números N e M e:
a) Crie e leia uma matriz de inteiros N x M;
b) Localize os três maiores números de uma matriz e mostre a linha e a
coluna onde estão.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int **mat, N, M, i, j;

    printf("Digite o num de linhas: ");
    scanf("%d", &N);
    printf("Digite o num de colunas: ");
    scanf("%d", &M);

    if ((mat = (int **) malloc(N * sizeof(int *))) == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA!");
        exit(1);
    }
    
    for (i = 0; i < N; i++)
    {
        if ((mat[i] = (int *) malloc(M * (sizeof(int)))) == NULL)
        {
            printf("ERRO AO ALOCAR MEMORIA!");
            exit(1);
        }   
    }

}