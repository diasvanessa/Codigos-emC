/*9. Faça um programa que receba dois arquivos do usuário, e crie um
terceiro arquivo com o conteúdo dos dois primeiros juntos (o conteúdo
do primeiro seguido do conteúdo do segundo).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *f1, *f2, *f3;
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
    f3 = fopen("arq3.txt", "w");
    if (f1 == NULL || f2 == NULL || f3 == NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(1);
    }
    while (1)
    {
        if (feof(f1))
        {
            break;
        }
        c = fgetc(f1);
        fputc(c,f3);
    }
    fclose(f1);
    while (1)
    {
        if (feof(f2))
        {
            break;
        } 
        c = fgetc(f2);
        fputc(c, f3);
    }
    fclose(f2);
    fclose(f3);
    return 0;
}