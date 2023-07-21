/*12.Abra um arquivo texto, calcule e escreva o número de caracteres, o
número de linhas e o número de palavras neste arquivo. Escreva
também quantas vezes cada letra ocorre no arquivo (ignorando letras
com acento). Obs.: palavras são separadas por um ou mais caracteres
espaço, tabulação ou nova linha.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int numchar = 0, numlinha = 1, numstr = 0, vet[26], i;
    char c, palavra[100];

    fp = fopen("arquivo.txt", "r");
    if (fp == NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    for (i = 0; i < 26; i++)
    {
        vet[i] = 0;
    }
    
    while(!feof(fp)){
        (fscanf(fp,"%s",palavra));
        numstr++;
    }

    fseek(fp,0,SEEK_SET);
    while (1)
    {
        c = getc(fp);
        if (feof(fp)){
            break;
        }
        else if (c == '\n'){
            numlinha++;
        }
        else if (c >= 'A' && c <= 'Z'){
            vet[(int)(c-'A')] += 1;
            numchar++;
        }
        else if (c >= 'a' && c <= 'z'){
            vet[(int)(c-'a')] += 1;
            numchar++;
        }
        else{
            numchar++;
        }
    }
    
    printf("Quantidade de cada letra: \n");
    for (i = 0; i < 26; i++)
    {
        printf("Letra %c:%d\n", i+'a', vet[i]);
    }
    printf("Palavras:%d\n", numstr);
    printf("Quantidade de linhas:%d\n", numlinha);
    printf("Quantidade de caracteres: %d\n", numchar);

    fclose(fp);
    return 0;
}
