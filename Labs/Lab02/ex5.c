/*5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.*/

#include <stdio.h>
#include <math.h>

int main(){

    // define as variaveis e atribui a ela um valor digitado pelo usuario
    int x,y;
    printf("x = ");
    scanf("%d", &x);

    // calculo para verificar se resto da divisao de x por 2 eh 0
    y = x % 2;

    /* imprime se eh par o impar de acordo com o resto da divisao de x por 0, 
    se for 0 eh par se nao eh impar */

    if(y == 0){
        printf("%d eh par", x);
    } else {
        printf("%d eh impar", x);
    }
    return 0;
}
