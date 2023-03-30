/* 28. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:
(a) Geométrica: raiz cubica de ?? * ?? * z
(b)  Ponderada: (1*x)+(2*y)+(3*z) / 6 
(c) Harmônica: 1/ 1/x+ 1/y + 1/z
(d) Aritmética: (x+y+z) / 3 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    /* define as variaveis e le tres numeros escolhidos pelo usuario e pede pra que 
    ele escolha uma media a ser realizada */

    int Media, x, y, z;
    float Geometrica, Ponderada, Harmonica, Aritmetica;
    printf("Escolha a media a ser realizada:\n");
    printf("1) Geometrica\n");
    printf("2) Ponderada\n");
    printf("3) Harmonica\n");
    printf("4) Aritmetica\n");
    printf("Digite um numero de 1 a 4, de acordo com a media escolhida:\n");
    scanf("%d", &Media);

    /* efetua o cálculo de uma das
    seguintes médias de acordo com um valor numérico digitado pelo usuário 
    1) Geométrica: raiz cubica de 𝑥 ∗ 𝑦 ∗ z
    2) Ponderada: (1*x)+(2*y)+(3*z) / 6 
    3) Harmônica: 1/ 1/x+ 1/y + 1/z
    4) Aritmética: (x+y+z) / 3 */

    if (Media == 1)
    {
        printf("Digite tres numeros inteiros:");
        scanf("%d %d %d", &x, &y, &z);
        Geometrica = cbrt(x*y*z);
        printf("A media geometrica de %.d, %d e %d eh = %.2f", x, y, z, Geometrica);
    }
    else if(Media == 2){
        printf("Digite tres numeros inteiros:");
        scanf("%d %d %d", &x, &y, &z);
        Ponderada = ((1*x) + (2*y) + (3*z)) / 6;
        printf("A media ponderada de %.d, %d e %d eh = %.2f", x, y, z, Ponderada);
    }
    else if(Media == 3){
        Harmonica = 1 / ((1/x) + (1/y) + (1/z));
        printf("Digite tres numeros inteiros:");
        scanf("%d %d %d", &x, &y, &z);
        printf("A media harmonica de %.d, %d e %d eh = %.2f", x, y, z, Harmonica);
    }
    else if(Media == 4){
        printf("Digite tres numeros inteiros:");
        scanf("%d %d %d", &x, &y, &z);
        Aritmetica = (x+y+z) / 3;
        printf("A media aritmetica de %.d, %d e %d eh = %.2f", x, y, z, Aritmetica);
    } else{
        printf("Escolha uma opcao valida!");
    }
    return 0;
}