/*14.Construa um programa que leia o número de linhas e de colunas de uma
matriz de números reais, aloque espaço dinamicamente para esta e a
inicialize com valores fornecidos pelo usuário. Ao final, o programa
deverá retornar a matriz na saída padrão com layout apropriado.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int **mat, linhas, colunas, i, j;

    printf("Digite o num de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o num de colunas: ");
    scanf("%d", &colunas);

    if ((mat = (int **) malloc(linhas * sizeof(int *))) == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA!");
        exit(1);
    }
    
    for (i = 0; i < linhas; i++)
    {
        if ((mat[i] = (int *) malloc(colunas * (sizeof(int)))) == NULL)
        {
            printf("ERRO AO ALOCAR MEMORIA!");
            exit(1);
        }   
    }
    
    // leitura dos valores
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("Digite um valor para mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    // impressao dos valores 
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    // limpeza da memoria
    for (i = 0; i < linhas; i++)
    {
        free(mat[i]); 
    }
    free(mat);
    mat = NULL;

    return 0;
}