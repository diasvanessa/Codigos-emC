/*1. Faça um programa que leia uma string e a imprima.*/

#include <stdio.h>

int main(){
    char palavra[30];

    printf("Digite uma palavra: ");
    fgets(palavra, 30, stdin);
    printf("A palavra digitada foi: %s\n", palavra);
    return 0;
}