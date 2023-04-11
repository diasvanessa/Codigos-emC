/*1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
números maiores que 0.*/

#include <stdio.h>

int main(){

    int contador = 1, multiplo;

    while(contador <= 5)
    {
        multiplo = contador * 3;
        printf("%d\n", multiplo);
        contador ++;
    }
    return 0;
}