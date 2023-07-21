/* 2. Declare uma matriz 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos.
Escreva ao final a matriz obtida.
*/

#include <stdio.h>

int main(){
    int mat[5][5], i, j;

    // laco para colocar os 1 e os 0 nas posicoes corretas, sendo que 1 entra quando o numero da linha for 
    // igual o da coluna

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j)
            {
                mat[i][j] = 1;
            }
            else{
                mat[i][j] = 0;
            }
        }
        
    }
    
    // laco que imprime a matriz
    printf("A matriz final obtida eh: \n");
     for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}