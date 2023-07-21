/*15.Faça um programa que leia dois números N e M e:
a) Crie e leia uma matriz de inteiros N x M;
b) Localize os três maiores números de uma matriz e mostre a linha e a
coluna onde estão.
*/

#include <stdio.h>
#include <stdlib.h>

void Organiza_Num(int **p, int linhas, int colunas, int *v_func){
    int i, j, k = 0, aux;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            v_func[k] = p[i][j];
            k++;
        }
    }
    
    for (i = 0; i < k; i++)
    {
        for (j = i+1; j < k; j++)
        {
            if (*(v_func+i) < *(v_func+j))
            {
                aux = *(v_func+i);
                *(v_func+i) = *(v_func+j);
                *(v_func+j) = aux; 
            }
        }   
    } 
}

int main(){
    int **mat, N, M, i, j, *v, c;

    printf("Digite o num de linhas: ");
    scanf("%d", &N);
    printf("Digite o num de colunas: ");
    scanf("%d", &M);

    if ((v = (int *) malloc((N*M)*(sizeof(int)))) == NULL) 
    {
        printf("ERRO AO ALOCAR MEMORIA!");
        exit(1);
    }
    
    if ((mat = (int **) malloc(N * sizeof(int *))) == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA!");
        exit(1);
    }
    
    for (i = 0; i < N; i++)
    {
        if ((mat[i] = (int *) malloc(M * (sizeof(int)))) == NULL)
        {
            printf("ERRO AO ALOCAR MEMORIA!");
            exit(1);
        }   
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("Digite um valor para mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    Organiza_Num(mat, N, M, v);

    for (i = 0; i < N*M; i++)
    {
        printf("%d \n", v[i]);
    }
    

    printf("Tres maiores numeros dessa matriz: \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            for (c = 0; c < 3; c++)
            {
                if (mat[i][j] == *(v+c))
                {
                    printf("%d -> Na posicao linha:%d coluna:%d\n", mat[i][j], i, j);

                }
            }
        }
    }
    
    for (i = 0; i < N; i++)
    {
        free(mat[i]); 
    }
    free(mat);

    return 0;
}