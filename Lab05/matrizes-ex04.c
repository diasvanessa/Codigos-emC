/*4. Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”*/

#include <stdio.h>

int main(){
    int mat[5][5], Num, i, j, linha_mat = 9, col_mat = 9;
    printf("Digite um numero: ");
    scanf("%d", &Num);

    // laco para inicializar a matriz
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o valor de mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        
    }
    
    // salva qual linha e coluna foi encontrado o valor na matriz, se ele tiver sido encontrado
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (Num == mat[i][j])
            {
                linha_mat = i;
                col_mat = j;
            }
            
        }
        
    }

    // se o valor da variavel ficou diferente depois do laco, imprime onde foi encontrado o numero
    // se não, encontra que o numero nao foi encontrado dentro dessa matriz

    if ((linha_mat != 9) && (col_mat != 9))
    {
        printf("O numero foi encontrado na linha: %d, coluna: %d\n", linha_mat, col_mat);
    }
    else
    {
        printf("O numero nao foi encontrado dentro dessa matriz! \n");
    }
    
    return 0;
}
