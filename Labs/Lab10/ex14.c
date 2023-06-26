/*14.Dado um arquivo contendo um conjunto de nome e data de nascimento
(DD MM AAAA), isto é, 3 inteiros em sequência), faça um programa que
leia o nome do arquivo e a data de hoje e construa outro arquivo
contendo o nome e a idade de cada pessoa do primeiro arquivo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *f1, *f2;
    int dia, mes, ano, diaatual, mesatual, anoatual;
    char nome[100], filename[50];

    printf("Digite o nome do arquivo(no formato .txt) com as datas: ");
    fgets(filename, 50, stdin);
    fflush(stdin);
    printf("Digite a data atual no formato DD MM AAAA:");
    scanf("%d %d %d", &diaatual, &mesatual, &anoatual);
    fflush(stdin);

    filename[strlen(filename)-1] = '\0';

    f1 = fopen(filename, "r");
    f2 = fopen("idade.txt", "w");
    if (f1 == NULL || f2 == NULL)
    {
        printf("Nao foi possivel abrir arquivo!");
        exit(1);
    }
    
    while (1)
    {
        fscanf(f1, "%[^,]%*c", nome);
        fscanf(f1, "%d", &dia);
        fscanf(f1, "%d", &mes);
        fscanf(f1, "%d", &ano);
        fprintf(f2,"Nome: %s\n", nome);
        fprintf(f2, "Idade: %d\n", anoatual-ano);
        if (feof(f1))
        {
            break;
        }
    }

    fclose(f1);
    fclose(f2);
    return 0;
}