/*20.Faça um programa que:
a) Peça para o usuário entrar com o nome e a posição (coordenadas X e
Y) de N cidades e as armazene em um vetor de estruturas (N é
informado pelo usuário);
b) Crie uma matriz de distâncias entre cidades de tamanho N x N;
c) Calcule as distâncias entre cada duas cidades e armazene na matriz;
d) Exiba na tela a matriz de distancias obtida;
e) Quando o usuário digitar o número de duas cidades o programa
deverá retornar a distância entre elas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct cidade{
    char nome[30];
    float x;
    float y;
};

typedef struct cidade cidade;

int main (){
    cidade *c; 
    int N, i, cid1, cid2, j;
    float **mat;

    printf("Digite o numero de cidades: ");
    scanf("%d", &N);
    fflush(stdin);

    c = (cidade *) malloc(N*sizeof(cidade));

    if ((mat = (float **) malloc(N * sizeof(float *))) == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA!");
        exit(1);
    }
    
    for (i = 0; i < N; i++)
    {
        if ((mat[i] = (float *) malloc(N * sizeof(float))) == NULL)
        {
            printf("ERRO AO ALOCAR MEMORIA!");
            exit(1);
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("Digite o nome da cidade %d:", i+1);
        fgets(c[i].nome, 30, stdin);
        fflush(stdin);
        printf("Digite a coordenada X: ");
        scanf("%f", &c[i].x);
        fflush(stdin);
        printf("Digite a coordenada Y: ");
        scanf("%f", &c[i].y);
        fflush(stdin);
        printf("\n");
    }
    
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            mat[i][j] = sqrt(pow(c[i].x - c[j].x,2) + pow(c[i].y - c[j].y,2));
        }
    }
    
    printf("Distancia entre as cidades:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
           printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("Digite duas cidades que deseja saber a distancia entre elas:");
    scanf("%d %d", &cid1, &cid2);
    printf("%.2f", mat[cid1][cid2]);

    for (i = 0; i < N; i++)
    {
        free(mat[i]);
    }
    free (mat);
    mat = NULL;

    return 0;
}