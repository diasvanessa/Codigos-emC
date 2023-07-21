/*10. Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabética.

*/

#include <stdio.h>
#include <string.h>

struct dados{
    char nome[50];
    char endereco [50];
    char telefone [15];
};

typedef struct dados dados;

int main(){
    dados pessoas[5];
    dados aux[5]; // variavel para ajudar a trocar os dados de lugar para ficar em ordem alfabetica
    int i, j, k;

    for (i = 0; i < 5; i++)
    {
        printf("Dados da %d pessoa: \n", i+1);
        printf("Nome: ");
        fgets(pessoas[i].nome, 50, stdin);
        fflush(stdin);
        printf("Endereco: ");
        fgets(pessoas[i].endereco, 50, stdin);
        fflush(stdin);
        printf("Telefone: ");
        fgets(pessoas[i].telefone, 15, stdin);
        fflush(stdin);
        printf("\n");
    }
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; pessoas[i].nome[j] != '\0'; j++)
        {
            if (pessoas[i].nome[j] >= 97 && pessoas[i].nome[j] <= 122)
            {
                pessoas[i].nome[j] -= 32;
            }
        }
    }
    
    for (i = 0; i < 4; i++)
    {
        k = 0;
        for (j = i+1; j < 5; j++)
        {
            if (pessoas[i].nome[k] == pessoas[j].nome[k])
            {
                while (pessoas[i].nome[k] == pessoas[j].nome[k])
                {
                    k++;
                    if (pessoas[i].nome[k] > pessoas[j].nome[k])
                    {
                        aux[i] = pessoas[j];
                        pessoas[j] = pessoas[i];
                        pessoas[i] = aux[i];
                    }
                }
            }
            else if (pessoas[i].nome[k] > pessoas[j].nome[k])
            {
                aux[i] = pessoas[j];
                pessoas[j] = pessoas[i];
                pessoas[i] = aux[i];
            }
        }
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("Nome: %s", pessoas[i].nome);
        printf("Endereco: %s", pessoas[i].endereco);
        printf("Telefone: %s", pessoas[i].telefone);
    }
    return 0;
}