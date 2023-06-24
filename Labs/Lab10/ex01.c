/*1. Escreva um programa que:
a) Crie/abra um arquivo texto de nome “arq.txt”;
b) Permita que o usuário grave diversos caracteres nesse arquivo, até
que o usuário entre com o caractere ‘0’;
c) Feche o arquivo.
Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela
todos os caracteres armazenados.*/

#include <stdio.h>

int main(){
    FILE *fp;
    char c;

    fp = fopen("arquivo.txt", "w");
    while (1)
    {
        printf("Digite um caractere a gravar ou 0 para sair: \n");
        scanf("%c", &c);
        
        if (c == '0')
        {
            break;
        }
        else{
            fputc(c, fp);
            fflush(stdin);
        }
    }

    fclose(fp);
    fp = fopen("arquivo.txt", "r");

    printf("Caracteres digitados: \n");
    while (1)
    {
        c = fgetc(fp);
        if (feof(fp))
        {
            break;
        }
        else
            printf("%c", c);
    }
    
    fclose(fp);

    return 0;
}