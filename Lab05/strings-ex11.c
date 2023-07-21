/*11. Escreva um programa que recebe uma string S e inteiros não-negativos i e j e imprima o
segmento S[i..j].*/

#include <stdio.h>

int main(){
    char str[100];
    int i, j;

    printf("Digite uma palavra ou frase: ");
    fgets(str, 100, stdin);

    printf("Digite um valor para i: ");
    scanf("%d", &i);
    printf("Digite um valor para j: ");
    scanf("%d", &j);

    for (; i <= j; i++)
    {
        printf("%c", str[i]);
    }
    
    return 0;
}