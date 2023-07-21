/*6. Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>

int main(){
    int contador, N = 10, Soma = 0, Num;
    float Media;

    for (contador = 0; contador < 10; contador++)
    {
        printf("Digite o %d valor:", contador+1);
        scanf("%d", &Num);
        Soma += Num;
    }
    
    Media = Soma / 10;
    printf("A media dos 10 numeros eh = %.2f", Media);
    return 0;
}