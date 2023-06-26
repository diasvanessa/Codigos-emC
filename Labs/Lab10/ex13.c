/*13.Faça um programa que permita que o usuário entre com diversos nomes
e telefone para cadastro, e crie um arquivo com essas informações, uma
por linha. O usuário finaliza a entrada com ‘0’ para o telefone.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro{
    char nome[100], telefone[15];
}cadastro;

int main(){
    FILE *fp;
    int escolha, num = 1, i = 0, j;
    cadastro *c;

    c = (cadastro *) malloc(num*sizeof(cadastro));

    fp = fopen("cadastro.txt", "w");
    if (fp == NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(1);
    }
    
    do
    {
        printf("Digite uma opcao: \n");
        printf("0 - Sair\n");
        printf("1 - Cadastrar novo nome e telefone.\n");
        scanf("%d", &escolha);

        if (escolha == 1)
        {
            fflush(stdin);
            c = (cadastro *) realloc(c,num*sizeof(cadastro));
            printf("Digite um nome: ");
            fgets(c[i].nome, 100, stdin);
            fflush(stdin);
            printf("Digite o telefone: ");
            fgets(c[i].telefone, 15, stdin);
            fflush(stdin);
            i++;
            num++;
        }
        else if(escolha == 0){
            break;
        }

    } while (escolha != 0);
    
    for (j = 0; j < i; j++)
    {
        fprintf(fp,"Nome: %s Telefone: %s", c[j].nome, c[j].telefone);
    }
    
    fclose(fp);
    return 0;
}