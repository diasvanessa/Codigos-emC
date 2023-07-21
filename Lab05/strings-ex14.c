/*14. Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N.
Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’.*/

#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    int N, i, tamanho, j;

    printf("Digite a string 1: ");
    fgets(str1, 100, stdin);
    fflush(stdin);
    printf("Digite a string 2: ");
    fgets(str2, 100, stdin);
    fflush(stdin);
    printf("Digite um valor positivo N: ");
    scanf("%d", &N);

    tamanho = strlen(str1);
    j = tamanho - 1;

    for (i = 0; i < N; i++)
    {
        str1[j] = str2[i];
        j++;
    }
    
    str1[j] = '\0';

    printf("A nova string eh: %s", str1);
    return 0;
}