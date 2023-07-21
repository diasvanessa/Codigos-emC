/*4. Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas letras são vogais e quantas são consoantes.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    int cons = 0, vogais = 0, tamanho;
    char nomearq[20], c;

    printf("Digite o nome do arquivo: ");
    fgets(nomearq, 20, stdin);
    fflush(stdin);

    tamanho = strlen(nomearq);
    if (nomearq[tamanho - 1] == '\n')
    {
        nomearq[tamanho-1] = '\0';
    }
    

    fp = fopen(nomearq, "r");
    if (fp == NULL)
    {
        printf("Erro ao abrir arquivo!\n");
        exit(1);
    }
    
    while (1)
    {
        c = fgetc(fp);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            vogais++;
        }
        else if (feof(fp))
        {
            break;
        }
        else if ((c >= 98 && c <= 100) || (c >= 102 && c <= 104) || (c >= 106 && c <= 110) || (c >= 112 && c <= 116) || (c >= 118 && c <= 122))
        {
            cons++;
        }
        else if (((c >= 66 && c <= 68) || (c >= 70 && c <= 72) || (c >= 74 && c <= 78) || (c >= 80 && c <= 84) || (c >= 86 && c <= 90)))
        {
            cons++;
        }
        else
        {
            continue;
        }
    }
    
    printf("Numero de vogais: %d\nNumero de consoantes: %d", vogais, cons);

    fclose(fp);
    return 0;
}