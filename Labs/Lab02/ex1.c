/*1. Faça um programa que receba dois números e mostre qual deles é o maior.*/

#include <stdio.h>

int main(){
    // define as variaveis e le dois numeros definidos pelo usuario
    float x,y;
    printf("Digite dois numeros:\n"); 
    scanf("%f %f", &x,&y); 

    // imprime qual dos dois numeros digitados eh maior
    
    if(x > y){
        printf("%f eh o maior numero\n", x);
    } else if(x < y){
        printf("%f eh o maior numero\n", y);
    } else {
        printf("%.2f eh igual a %.2f", x,y);
    }
    return 0;
}