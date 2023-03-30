/*3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima
o número ao quadrado. */

#include <stdio.h>
#include <math.h>

int main(){
    
    // define as variaveis e atribui a ela um valor digitado pelo usuario
    float x;
    printf("x = ");
    scanf("%f", &x);

    /* imprime a raiz quadrada do numero se ele for positivo e 
    o quadrado do numero se ele for negativo */

    if(x > 0){
        printf("A raiz quadrada de %.2f eh: %.2f", x, sqrt(x));
    } else if(x < 0){
        printf("%.2f ao quadrado eh: %.2f\n", x, pow(x,2));
    }
    return 0;
}