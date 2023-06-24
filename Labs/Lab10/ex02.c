/*2. Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas linhas esse arquivo possui.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char nomearq[20], c;
    int tamanho, linhas = 1;

    printf("Digite o nome do arquivo: \n");
    fgets(nomearq, 20, stdin);
    fflush(stdin);
    
    tamanho = strlen(nomearq);
    if (nomearq[tamanho-1] == '\n')
    {
        nomearq[tamanho-1] = '\0';
    }

    fp = fopen(nomearq, "r");
    if(fp == NULL){
        printf("ERRO NA ABERTURA DO ARQUIVO!\n");
        exit(1);
    }

    while ((c = fgetc(fp)) != EOF) {
        if (c == '\n') {
            linhas++;
        }
    }
    
    printf("num de linhas nesse arquivo: %d\n", linhas);
    fclose(fp);
}