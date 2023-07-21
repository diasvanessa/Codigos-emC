/*Faça um programa para associar nomes as linhas de uma matriz de
caracteres. O usuário irá informar o número máximo de nomes que
poderão ser armazenados. Cada nome poderá ter até 30 caracteres com
o '\0'. O usuário poderá usar 5 opções diferentes para manipular a
matriz:
a) Gravar um nome em uma linha da matriz;
b) Apagar o nome contido em uma linha da matriz;
c) Informar um nome, procurar a linha onde ele se encontra e substituir
por outro nome;
d) Informar um nome, procurar a linha onde ele se encontra e apagar;
e) Pedir para recuperar o nome contido em uma linha da matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void opcao(char **m, char escolha, int linhas, int colunas){
    int i, j, l;
    char s[31];

    if (escolha == 'a')    
    {
        printf("Digite a linha onde deseja guardar o nome: ");
        scanf("%d", &l);
        fflush(stdin);
        printf("Digite o nome que deseja guardar: \n");
        fgets(m[l], colunas + 1, stdin);
        fflush(stdin);
    }
    else if (escolha == 'b')
    {
        printf("Digite a posicao onde deseja apagar o nome: ");
        scanf("%d", &l);
        fflush(stdin);   

        for (i = l; i < linhas; i++)
        {
            for (j = 0; j < colunas; j++)
            {
                m[i][j] = ' ';
            }
        }
    }
    else if (escolha == 'c')
    {
        printf("Digite um nome que deseja procurar: ");
        fgets(s, 31, stdin);
        fflush(stdin);

        for (i = 0; i < linhas; i++)
        {
            if (strcmp(m[i], s) == '\0')
            {
                printf("Digite o novo nome a inserir: ");
                fgets(m[i], colunas + 1, stdin);
                fflush(stdin);
            }
        }
    }
    else if (escolha == 'd')
    {
        printf("Digite um nome que deseja apagar: ");
        fgets(s, colunas, stdin);
        fflush(stdin);

        for (i = 0; i < linhas; i++)
        {
            if (strcmp(m[i], s) == '\0')
            {
                m[i][0] = '\0';
            }
        }
    }
    else if (escolha == 'e')
    {
        printf("Qual linha do nome que deseja recuperar? \n");
        scanf("%d", &l);

        printf("%s", m[l]);
    }
}

int main(){
    char **nomes, escolha;
    int num, i;

    printf("Digite a quantidade de nomes: \n");
    scanf("%d", &num);

    if ((nomes = (char **) malloc(num * sizeof(char *))) == NULL)
    {
        printf("ERRO AO ALOCAR MEMORIA!\n");
        exit(1);
    }

    for (i = 0; i < num; i++)
    {
        if ((nomes[i] = (char *) malloc(31 * sizeof(char))) == NULL)
        {
            printf("ERRO AO ALOCAR MEMORIA!\n");
            exit(1);
        }
    }
    
    do
    {
        printf("a) Gravar um nome em uma linha da matriz\n");
        printf("b) Apagar o nome contido em uma linha da matriz\n");
        printf("c) Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome\n");
        printf("d) Informar um nome, procurar a linha onde ele se encontra e apagar\n");
        printf("e) Pedir para recuperar o nome contido em uma linha da matriz.\n");
        printf("f) Sair\n");

        printf("Digite sua escolha: \n");
        scanf(" %c", &escolha);
        fflush(stdin);

        if (escolha == 'a' || escolha == 'b' || escolha == 'c' || escolha == 'd' || escolha == 'e')
        {
            opcao(nomes, escolha, num, 31);
        }
        else if (escolha == 'f')
        {
            break;
        }
        else
        {
            printf("Digite uma escolha valida!");
        }
    } while (escolha != 'f');
         
    for (i = 0; i < num; i++)
    {
        free(nomes[i]);
    }
    free(nomes);
    nomes = NULL;

    return 0;
}
