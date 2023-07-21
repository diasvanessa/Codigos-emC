/*9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares.
*/

#include <stdio.h>

int main(){
    int contador = 1, N;

    printf("Digite um numero N inteiro: ");
    scanf("%d", &N);
    printf("Os %d primeiros numeros impares sao: \n", N);

    for (contador = 1; N > 0; contador++)
    {
        if (contador % 2 == 1)
        {
            printf("%d\n", contador);
            N--;
        }
    }
}