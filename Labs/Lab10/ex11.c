/*11.Faça um programa no qual o usuário informa o nome do arquivo e uma
palavra, e retorne o número de vezes que aquela palavra aparece no
arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    FILE *fp;
    char nomearq[20], palavra[20], buscapalavra[20];
    int count = 0;

    printf("Digite o nome do arquivo(inclua o .txt): ");
    fgets(nomearq, 20, stdin);
    fflush(stdin);

    nomearq[strlen(nomearq)-1] = '\0';

    fp = fopen(nomearq, "r");
    if (fp == NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(1);
    }
    printf("Digite uma palavra pra procurar no arquivo: ");
    fgets(palavra, 20, stdin);
    fflush(stdin);
    palavra[strlen(palavra)-1] = '\0';

    while (1)
    {
        fscanf(fp, "%s", buscapalavra);
        if (feof(fp))
        {
            break;
        }
        else if(strcmp(buscapalavra, palavra) == 0)
        {
            count++;
        }
    }
    
    printf("A palavra %s aparece %d vezes.", palavra, count);

    fclose(fp);
    return 0; 
}

