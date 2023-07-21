/*16.Faça um programa que leia dois números N e M:
a) Crie e leia uma matriz N x M de inteiros;
b) Crie e construa uma matriz transposta M x N de inteiros;
c) Mostre as duas matrizes.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int **mat, **mat_transposta, N, M, i, j;

    printf("Digite um valor para as linhas: ");
    scanf("%d", &N);
    printf("Digite um valor para as colunas: ");
    scanf("%d", &M);

    // matriz
    if ((mat = (int **) malloc(N*sizeof(int *))) == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA!\n");
        exit(0);
    }
    
    for (i = 0; i < N; i++)
    {
        if ((mat[i] = (int *) malloc(M*sizeof(int))) == NULL)
        {
            printf("ERRO AO ALOCAR MEMORIA!\n");
            exit(0);
        }
    }
    
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("Digite um valor para mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("MATRIZ: \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
    

    // matriz tranposta

    if ((mat_transposta = (int **) malloc(M*sizeof(int *))) == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA!\n");
        exit(0);
    }
    
    for (i = 0; i < M; i++)
    {
        if ((mat_transposta[i] = (int *) malloc(N*sizeof(int))) == NULL)
        {
            printf("ERRO AO ALOCAR MEMORIA!\n");
            exit(0);
        }
    }
    
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            mat_transposta[i][j] = mat[j][i];
        }
    }
    
    printf("MATRIZ TRANSPOSTA: \n");
    for ( i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%2d ", mat_transposta[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}