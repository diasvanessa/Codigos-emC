/*1. Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui.*/

#include <stdio.h>

int main(){
    int mat[4][4], i, j, Val_maior = 0;

    // laco para inicializar a matriz com os valores digitados pelo usuario
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite o valor de mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        
    }
    
    // laco para imprimir quais foram os valores maiores que 10 digitados e para imprimir a quantidade de valores
    printf("Valores maiores que 10 digitado em mat: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (mat[i][j] > 10)
            {
                printf("%d\n", mat[i][j]);
                Val_maior += 1;
            }
        }
    }
    printf("Total de valores maiores que 10 digitados:%d\n", Val_maior);
    return 0;
}