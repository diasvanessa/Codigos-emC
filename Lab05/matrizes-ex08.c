/*8. Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um
menu de opções:
a) somar as duas matrizes
b) subtrair a primeira matriz da segunda
c) adicionar uma constante às duas matrizes
d) imprimir as matrizes
*/

#include <stdio.h>
#include <stdlib.h>

void Menu_Escolha();

int main(){
    int mat1[2][2], mat2[2][2], i, j, mat3[2][2], num;
    char opcao;

    // usuario inicializa as matrizes
    printf("Inicializacao da matriz 1: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite o valor de mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Inicializacao da matriz 2: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite o valor de mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    fflush(stdin);

    // usuario escolha uma das opcoes
    Menu_Escolha();
    scanf("%c", &opcao);

    // realiza a operacao de acordo com a escolha do usuario
    if (opcao == 'a')
    {
        printf("A soma das duas matrizes resulta na matriz: \n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
            
        }

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%4d", mat3[i][j]);
            }
            printf("\n");
        }
    }
    else if (opcao == 'b')
    {
        printf("A subtracao das duas matrizes resulta na matriz: \n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                mat3[i][j] = mat1[i][j] - mat2[i][j];
            }
            
        }

        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%2d", mat3[i][j]);
            }
            printf("\n");
        }
    }
    else if (opcao == 'c')
    {
        printf("Digite um valor para a constante a ser adicionada as duas matrizes: ");
        scanf("%d", &num);
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                mat1[i][j] = mat1[i][j] + num;
                mat2[i][j] = mat2[i][j] + num;
            }

        }
        printf("Matriz 1:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%4d", mat1[i][j]);
            }
        printf("\n");
        }

        printf("Matriz 2:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%4d", mat2[i][j]);
            }
            printf("\n");
        }
    }
    else if (opcao == 'd')
    {
        printf("Matriz 1:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%3d", mat1[i][j]);
            }
        printf("\n");
        }

        printf("Matriz 2:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%3d", mat2[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Escolha uma das opcoes!\n");
    }
    return 0;
}
void Menu_Escolha(){
    printf("Digite uma das opcoes:\n");
    printf("a) Somar as duas matrizes.\n");
    printf("b) Subtrair a primeira matriz da segunda.\n");
    printf("c) Acionar uma constante as duas matrizes.\n");
    printf("d) Imprimir as matrizes.\n");
}