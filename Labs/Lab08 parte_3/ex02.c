/* 2 Faça um programa que leia dois valores inteiros e chame uma função que
receba estes 2 valores de entrada e retorne o maior valor na primeira
variável e o menor valor na segunda variável. Escreva o conteúdo das 2
variáveis na tela. */

#include <stdio.h>

void MaiorValor(int *num1, int *num2){
    int aux;
    aux = *num1;
    if (*num1 < *num2)
    {
        *num1 = *num2;
        *num2 = aux;
    }
}

int main(){
    int x, y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);

    MaiorValor(&x, &y);
    printf("x = %d\ny = %d ", x, y);

    return 0;
}