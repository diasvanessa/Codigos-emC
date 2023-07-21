/*16. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
correspondente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante. */

#include <stdio.h>
#include <stdlib.h>
# include <math.h>

int main(){
    int Num;
    printf("Digite um numero de 1 a 12:");
    scanf("%d", &Num);

    /*Le um inteiro entre 1 e 12 e imprime o mês correspondente a este número.
    Isto é, janeiro se 1, fevereiro se 2, e assim por diante. */

    switch (Num)
    {
    case 1: printf("JANEIRO\n"); break;
    case 2: printf("FEVEREIRO\n"); break;
    case 3: printf("MARCO\n"); break;
    case 4: printf("ABRIL\n"); break;
    case 5: printf("MAIO\n"); break;
    case 6: printf("JUNHO\n"); break;
    case 7: printf("JULHO\n"); break;
    case 8: printf("AGOSTO\n"); break;
    case 9: printf("SETEMBRO\n"); break;
    case 10: printf("OUTUBRO\n"); break;
    case 11: printf("NOVEMBRO\n"); break;
    case 12: printf("DEZEMBRO\n"); break;
    default: printf("Digite um numero de 1 a 12!");
    }
    return 0;
}