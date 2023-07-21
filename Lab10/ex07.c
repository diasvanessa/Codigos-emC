/*7. Faça um programa que receba do usuário um arquivo texto. Crie outro
arquivo texto contendo o texto do arquivo de entrada, mas com as
vogais substituídas por ‘*’.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp1, *fp2;
    char nomearq[20], c;
    int tamanho;

    printf("Digite o nome do arquivo: ");
    fgets(nomearq, 20, stdin);
    fflush(stdin);

    tamanho = strlen(nomearq);
    if (nomearq[tamanho-1] == '\n')
    {
        nomearq[tamanho-1] = '\0';
    }
    
    fp1 = fopen(nomearq, "r");
    fp2 = fopen("arquivo2.txt", "w");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Erro ao abrir arquivo.");
        exit(1);
    }

    while (1)
    {
        c = fgetc(fp1);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            c = '*';
            fputc(c, fp2);
        }
        else if (feof(fp1))
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