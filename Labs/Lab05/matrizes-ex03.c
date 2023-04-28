/*3. Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior
valor.*/

#include <stdio.h>

int main(){
    int mat[4][4], i, j, maior_valor;

    // laco para inicializar a matriz com os valores digitados pelo usuario
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite o valor de mat[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    // primeiro coloca os valores de posicao 1,1 nessa variavel para poder inicializar o laco 
    maior_valor = mat[0][0];

    // laco para colocar na variavel 'maior_valor' o maior valor encontrado nessa matriz
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (mat[i][j] > maior_valor)
            {
                maior_valor = mat[i][j];
            }
            
        }
    }

    // imprime a matriz
    printf("A matriz lida foi:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", mat[i][j]);
        }
        printf("\n");
    }

    // mostra o maior valor encontrado na matriz e indica a linha e coluna do maior valor 
    printf("O maior valor encontrado nessa matriz eh = %d\n", maior_valor);
    printf("A localizacao desse valor eh \n");
    for (i = 1; i < 4; i++)
    {
        for (j = 1; j < 4; j++)
        {
            if (maior_valor == mat[i][j])
            {
                printf("Linha: %d e coluna: %d", i, j);
            }
            
        }
    }

    return 0;
}