/*3. Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas letras são vogais.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    char nomearq[20], c;
    int tamanho, vogais = 0;

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
        printf("Erro ao abrir arquivo!\n");
        exit(1);
    }
    
    while (1)
    {
        c = fgetc(fp);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
        {
            vogais++;
        }
        else if (feof(fp))
        {
            break;
        }
        
    }
    
    printf("Numero de vogais nesse arquivo: %d", vogais);

    fclose(fp);
    return 0;
}