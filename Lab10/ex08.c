/*8. Faça um programa que leia o conteúdo de um arquivo e crie um arquivo
com o mesmo conteúdo, mas com todas as letras minúsculas
convertidas para maiúsculas. Os nomes dos arquivos serão fornecidos,
via teclado, pelo usuário. A função que converte maiúscula para
minúscula é o toupper(). Ela é aplicada em cada caractere da string.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *fp1, *fp2;
    char c, nomearq1[20], nomearq2[20];
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
    fp1 = fopen(nomearq1, "r");
    fp2 = fopen(nomearq2, "w");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(1);
    }
    while (1)
    {
        c = fgetc(fp1);
        if (c >= 97 && c <= 122)
        {
            fputc(toupper(c), fp2);
        }
        else if(feof(fp1))
        {
            break;
        }
        else{
            fputc(c, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}