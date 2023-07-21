/*12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 +
6 + 11 + 22 + 33 = 78*/

#include <stdio.h>

int main(){
    int contador, N, Soma = 0;

    printf("Digite um numero inteiro:");
    scanf("%d", &N);

    for (contador = 1; contador < N; contador++)
    {
        if (N % contador == 0)
        {
            Soma += contador;
        }
        
    }
    printf("%d", Soma);
}