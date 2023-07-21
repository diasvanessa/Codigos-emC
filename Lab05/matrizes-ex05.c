/*5. Gerar e imprimir uma matriz de tamanho 10 × 10, onde seus elementos são da forma:
A[i][j] = 2i + 7j - 2 se i < j;
A[i][j] = 3i² - 1 se i = j;
A[i][j] = 4i^3 – 5j² + 1 se i > j:
*/

#include <stdio.h>

int main(){
    int i, j, mat[10][10];

    /*laco com condicoes para fazer a matriz seguindo as seguintes regras:
        A[i][j] = 2i + 7j - 2 se i < j;
        A[i][j] = 3i² - 1 se i = j;
        A[i][j] = 4i^3 – 5j² + 1 se i > j:*/

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i < j)
            {
                mat[i][j] = ((2*i) + (7*j)) - 2;
            }
            else if (i == j)
            {
                mat[i][j] = 3*(i*i) - 1;
            }
            else
            {
                mat[i][j] = 4*(i*i*i) - 5*(j*j);
            }
            
        }
        
    }
    
    // laco para imprimir a matriz

    printf("A matriz tem a seguinte conformacao:\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%6d", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}