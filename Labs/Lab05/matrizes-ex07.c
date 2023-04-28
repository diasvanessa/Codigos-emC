/*7. Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de
modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a
cartela gerada.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int bingo[5][5], i, j;
    srand(time(NULL));

    // inicializar a matriz bingo com valores aleatorios de 0 a 99
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            bingo[i][j] = rand() % 100;
        }
    }
    
     for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%3d", bingo[i][j]);
        }
        printf("\n");
    }
    return 0;
}