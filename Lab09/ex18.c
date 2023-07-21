/*18.Escreva um programa para fazer a alocação dinâmica dos blocos de
dados conforme solicitado abaixo:
a) Vetor de 1024 Bytes (1 Kbyte);
b) Matriz de inteiros de dimensão 10 × 10;
c) Vetor para armazenar 50 registros contendo: nome do produto (30
caracteres), código do produto (inteiro) e preço em reais;
d) Texto de até 100 linhas com até 80 caracteres em cada linha*/

#include <stdio.h>
#include <stdlib.h>

struct produto{
    char nome[30];
    int codigo;
    float preco;
};

typedef struct produto produto;

int main(){
    int *vet, **mat, i;
    char **text;
    produto *s;

    // espaco para vetor para 1024 bytes - 256 inteiros 
    vet = (int *) calloc(256, sizeof(int));

    // espaco para guardar 50 dados do tipo struct 
    s = (produto*) malloc(50 * sizeof(produto));

    // espaco para guardar matriz 10x10
    if((mat = (int **) malloc(10 * sizeof(int *)) == NULL)){
        printf("ERRO AO ALOCAR MEMORIA!\n");
        exit(1);
    }

    for (i = 0; i < 10; i++){
        if((mat[i] = (int *) malloc(10 * sizeof(int)) == NULL)){
        printf("ERRO AO ALOCAR MEMORIA!\n");
        exit(1);
        }
    }
    
    // espaco para guardar texto de 100 linhas com 80 caracteres cada
    if ((text = (char **) malloc(100 * sizeof(char *))) == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA!\n");
        exit(1);
    }

    for (i = 0; i < 100; i++){
        if((text[i] = (char *) malloc(80 * sizeof(char)) == NULL)){
        printf("ERRO AO ALOCAR MEMORIA!\n");
        exit(1);
        }
    }

    // limpar memoria    
    for ( i = 0; i < 10; i++)
    {
        free(mat[i]);
    }
    free (mat);
    mat = NULL;

    for ( i = 0; i < 100; i++)
    {
        free(text[i]);
    }
    free (text);
    text = NULL;

    free(vet);
    free(s);
    return 0;
}