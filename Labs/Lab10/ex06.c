/*6. Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas vezes cada letra do alfabeto aparece dentro do arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    char c, nomearq[20];
    int tamanho, letra_alfabeto[26], i;

    printf("Digite o nome do arquivo: ");
    fgets(nomearq, 20, stdin);
    fflush(stdin);

    tamanho = strlen(nomearq);
    if (nomearq[tamanho-1] == '\n')
    {
        nomearq[tamanho-1] = '\0';
    }
    
    fp = fopen(nomearq, "r");
    if (fp == NULL)
    {
        printf("Erro ao abrir arquivo.");
        exit(1);
    }
    
    for (i = 0; i < 26; i++)
    {
        letra_alfabeto[i] = 0;
    }
    
    while (1)
    {
        c = fgetc(fp);
        letra_alfabeto[(int)(c-'a')] += 1;

        if (feof(fp))
        {
            break;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (letra_alfabeto[i] != 0)
        {
            printf("Letra %c:%d\n", i+'a', letra_alfabeto[i]);
        }
    }
    
    fclose(fp);
    return 0;
}