/*10.Faça um programa que receba o nome de um arquivo de entrada e outro
de saída. O arquivo de entrada contém em cada linha o nome de uma
cidade (ocupando 40 caracteres) e o seu número de habitantes. O
programa deverá ler o arquivo de entrada e gerar um arquivo de saída
onde aparece o nome da cidade mais populosa seguida pelo seu número
de habitantes.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cidades{
    char nome[40];
    int hab;
};

typedef struct cidades cidades;

int main(){
    FILE *f1, *f2;
    char nomearq1[20], nomearq2[20];
    int tamanho, i, hab, posicao;
    cidades *c;

    c = (cidades *) malloc(4*sizeof(cidades));

    printf("Digite o nome do arquivo 1: ");
    fgets(nomearq1, 20, stdin);
    fflush(stdin);
    printf("Digite o nome do arquivo 2: ");
    fgets(nomearq2, 20, stdin);
    fflush(stdin);
    tamanho = strlen(nomearq1);
    if (nomearq1[tamanho-1] == '\n')
    {
        nomearq1[tamanho-1] = '\0';
    }
    tamanho = strlen(nomearq2);
    if (nomearq2[tamanho-1] == '\n')
    {
        nomearq2[tamanho-1] = '\0';
    }
    f1 = fopen(nomearq1, "r");
    f2 = fopen(nomearq2, "w");
    if (f1 == NULL || f2 == NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(1);
    }
    
    for (i = 0; i < 4; i++)
    {
        fscanf(f1, "%[^,]%*c", c[i].nome);
        fscanf(f1, "%d", &c[i].hab);
    }
    
    hab = c[0].hab;
    for (i = 1; i < 4; i++)
    {
        if (c[i].hab > hab)
        {
            hab = c[i].hab;
            posicao = i;
        }   
    }
    
    fprintf(f2, "Cidade mais populosa:%s\nHabitantes: %d", c[posicao].nome, hab);

    fclose(f1);
    fclose(f2);
    free(c);
    return 0;
}