/*6. Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a
matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos
acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/

#include <stdio.h>

int main(){
    int mat[4][4], i, j, min = 1, max = 20;

    // inicia a matriz com valores de 1 a 20 escolhidos pelo usuario
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            do
            {
                printf("Digite um valor para mat[%d][%d]: ", i, j);
                scanf("%d", &mat[i][j]);
            } while (mat[i][j] < 1 || mat[i][j] > 20);
        }
        
    }
    
    // imprime a matriz original
    printf("Matriz original:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }

    // imprime a matriz como um triangulo inferior
    printf("Matriz transformada:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            
            
        }
    }

    return 0;
}