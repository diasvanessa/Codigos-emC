/*30. Faça um programa que receba três números e mostre-os em ordem crescente*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // define as variaveis e le tres numeros digitados pelo usuario
    float x, y, z;
    printf("Digite tres numeros diferentes:");
    scanf("%f %f %f", &x, &y, &z);

    // define as condicionais para imprimir os numeros em ordem crescente

    if ((x < y) && (x < z) && (y < z)){
        printf("%.2f, %.2f, %.2f", x, y, z);
    }
    else if ((x < y) && (x < z) && (z < y)){
        printf("%.2f, %.2f, %.2f", x, z, y);
    }
    else if ((y < z) && (y < x) && (x < z)){
        printf("%.2f, %.2f, %.2f", y, x, z);
    }
    else if ((y < z) && (y < x) && (z < y)){
        printf("%.2f, %.2f, %.2f", y, z, x);
    } 
    else if ((z < x) && (z < y) && (x < y)){
        printf("%.2f, %.2f, %.2f", z, x, y);
    }
    else if ((z < x) && (z < y) && (y < x)){
        printf("%.2f, %.2f, %.2f", z, y, x);
    }

    // caso o usuario nao digite tres numeros iguais. 
    else {
        printf("Digite tres numeros diferentes!");
    }
    return 0;
}