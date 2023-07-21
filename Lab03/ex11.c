/*11. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.*/

#include <stdio.h>

int main(){
    int N, contador;
    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);

    printf("Os numeros de 0 ate %d em ordem crescente sao: \n");
    for (contador = 0; contador <= N; contador++)
    {
        printf("%d\n", contador);
    }
    return 0;
}