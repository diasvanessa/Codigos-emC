/*13.Escreva um programa que aloque dinamicamente uma matriz (de
inteiros) de dimensões definidas pelo usuário e a leia. Em seguida,
implemente uma função que receba um valor, retorne 1 caso o valor
esteja na matriz ou retorne 0 caso não esteja na matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int Num_naMatriz(int **mat, int l, int c){
    int i, j, num, verifica = 0;

    printf("Digite um valor: ");
    scanf("%d", &num);

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (mat[i][j] == num)
            {
                verifica = 1;
            }
        }
    }

    if (verifica == 1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int main(){
    int **p, linhas, colunas, i, j, ret_func;

    printf("Digite o num de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o num de colunas: ");
    scanf("%d", &colunas);

    // cria um vetor de linhas 

    if ((p  = (int **) malloc(linhas * (sizeof(int *)))) == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA!\n");
        exit(1);
    }
     

    // criar colunas para as linhas da matriz

    for (i = 0; i < linhas; i++)
    {
        if ((p[i] = (int *) malloc(colunas * sizeof(int))) == NULL)
        {
            printf("ERRO AO ALOCAR MEMORIA!\n");
            exit(1);
        }
        
    }
    
    // le valores para a matriz

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("Digite um valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &p[i][j]);
        }
        
    }
    
    ret_func = Num_naMatriz(p, linhas, colunas);

    if (ret_func == 1)
    {
        printf("Esse valor esta na matriz!\n");
    }
    else{
        printf("Esse valor nao esta na matriz!\n");
    }
    
    // liberacao da memoria usada
    for (i = 0; i < linhas; i++)
    {
        free(p[i]);
    }
    free(p);
    p = NULL;

    return 0;
}