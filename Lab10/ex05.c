/*5. Faça um programa que receba do usuário um arquivo texto e um
caractere. Mostre na tela quantas vezes aquele caractere ocorre dentro
do arquivo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    char c, userc, nomearq[20];
    int tamanho, count = 0;

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
        printf("Erro ao abrir arquivo!");
        exit(1);
    }
    
    printf("Digite um caractere para procurar nesse arquivo: \n");
    scanf("%c", &userc);

    while(1){
        c = fgetc(fp);
        if (c == userc)
        {
            count++;
        }
        else if (feof(fp))
        {
            break;
        }
    }

    printf("Numero de vezes que esse caractere se repete: %d", count);

    fclose(fp);
    return 0;
}