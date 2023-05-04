/*7. Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de
modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a
cartela gerada.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int bingo[5][5], i, j, vet[1], k;
    srand(time(NULL));

    // inicializar a matriz bingo com valores aleatorios de 0 a 99
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
                bingo[i][j] = rand() % 100;
        }
    }


    // matriz para verificar se foram gerados numeros aleatorios repetidos, caso tenha sido, esse numero sera trocado
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            // guarda o valor da matriz em um vetor
            vet[i] = bingo[i][j];

            // laco para verificar se há numeros repetidos
            for(k = j; k < 4; k++)
            {
                if(vet[i] == bingo[i][j+1])
                {
                    bingo[i][j+1] = rand() % 100;
                }
            }
        }
    }

    // imprime a cartela de bingo
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
