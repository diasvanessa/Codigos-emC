/*10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares*/

#include <stdio.h>

int main(){
    int contador, Soma = 0, N = 50;

    for (contador = 1; N > 0; contador ++)
    {
        if (contador % 2 == 0)
        {
            Soma += contador;
            N--;
        }
    }  
    printf("A soma eh = %d\n", Soma);
    return 0;
}