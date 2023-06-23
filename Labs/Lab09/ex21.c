/*21.Faça um programa que leia quatro números a, b, c e d, que serão as
dimensões de duas matrizes, e:
a) Crie e leia uma matriz, dadas as dimensões dela;
b) Crie e construa uma matriz que seja o produto de duas matrizes. Na
sua função main(), imprima as duas matrizes e o produto entre elas,
se existir.*/

#include <stdio.h>
#include <stdlib.h>

void preenche_matriz(int **m, int linha, int coluna){
    int i, j;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("Digite um valor para mat[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

int main(){
    int **mat1, **mat2, **mat_prod, i, j, a, b, c, d, soma = 0, k, prod;

    // matriz 1
    printf("Digite um valor para as linhas da matriz 1: ");
    scanf("%d", &a);
    printf("Digite um valor para as colunas da matriz 1: ");
    scanf("%d", &b);

    if ((mat1 = (int **) malloc(a*sizeof(int *))) == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA!\n");
        exit(1);
    }
    
    for (i = 0; i < a; i++)
    {
        if ((mat1[i] = (int *) malloc(b*sizeof(int))) == NULL)
        {
            printf("ERRO AO ALOCAR MEMORIA!\n");
            exit(1);
        }
    }
    
    printf("\nMatriz 1: \n");
    preenche_matriz(mat1, a, b);
    
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    
    // matriz 2;

    printf("Digite um valor para as linhas da matriz 2: ");
    scanf("%d", &c);
    printf("Digite um valor para as colunas da matriz 2: ");
    scanf("%d", &d);

    if ((mat2 = (int **) malloc(c*sizeof(int *))) == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA!\n");
        exit(1);
    }
    
    for (i = 0; i < a; i++)
    {
        if ((mat2[i] = (int *) malloc(d*sizeof(int))) == NULL)
        {
            printf("ERRO AO ALOCAR MEMORIA!\n");
            exit(1);
        }
    }

    printf("\nMATRIZ 2: \n");
    preenche_matriz(mat2, c, d);

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < d; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    // matriz produto
    if((mat_prod = (int **) malloc(a*sizeof(int *))) == NULL) {
        printf("ERRO AO ALOCAR MEMORIA!\n");
        exit(1);
    }
    
    for (i = 0; i < a; i++)
    {
        if((mat_prod[i] = (int *) malloc(d*sizeof(int))) == NULL){
            printf("ERRO AO ALOCAR MEMORIA!\n");
            exit(1);
        }
    }

    printf("\nMATRIZ PRODUTO:\n");
    if (b == c)
    {
        // preenche a  matriz   
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < d; j++)
            {
                soma = 0;
                for (k = 0; k < c; k++)
                {
                    prod = mat1[i][k] * mat2[k][j];
                    soma+=prod;
                }
                mat_prod[i][j] = soma;
            }
        }

        printf("MATRIZ PRODUTO: \n");
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < d; j++)
            {
                printf("%d ", mat_prod[i][j]);
            }
            printf("\n");
        }
        
    }
    else{
        printf("Nao eh possivel fazer esse produto!\n");
    }
    
    for (i = 0; i < a; i++)
    {
        free(mat_prod[i]); 
        free(mat1[i]);
    }
    for (i = 0; i < c; i++)
    {
        free(mat2[i]); 
    }
    free(mat1);
    free(mat2);
    free(mat_prod);

    return 0;
}

