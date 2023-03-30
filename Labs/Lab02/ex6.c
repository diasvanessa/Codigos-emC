/*6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos*/

#include <stdio.h>
#include <math.h>

int main(){

    // define as variaveis e atribui a elas dois valores digitados pelo usuario
    int x,y;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &x, &y);

    // condicionais para verificar qual numero eh maior e imprimir a subtracao entre os dois
    if(x > y){
        printf("%d eh o maior numero\n", x);
        printf("%d - %d = %d\n", x, y, x-y);
    } else if(x < y){
        printf("%d eh o maior numero\n", y);
        printf("%d - %d = %d\n", y, x, y-x);
    } else {
        printf("%d eh igual a %d\n", x,y);
        printf("%d - %d = %d\n", x, y, x-y);
    }
    return 0;
}
