/*4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
- O número digitado ao quadrado
- A raiz quadrada do número digitado*/

#include <stdio.h>
#include <math.h>

int main(){

    // define as variaveis e atribui a ela um valor digitado pelo usuario

    float x;
    printf("x = ");
    scanf("%f", &x);

    /*Imprime o quadrado e a raiz quadrada de um numero positivo*/

    if(x > 0){
        printf("O quadrado de %.2f eh: %.2f\n", x, pow(x,2));
        printf("A raiz quadrada de %.2f eh: %.2f\n", x, sqrt(x));
    } else {
        printf("Digite um numero positivo!\n");
    }
    return 0;
}