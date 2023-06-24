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

int main(){
    FILE *f1, *f2;
    char nomearq1[20], nomearq2[20], c;
    int tamanho;

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
    f2 = fopen(nomearq2, "r");
    if (f1 == NULL || f2 == NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(1);
    }
    

    return 0;
}