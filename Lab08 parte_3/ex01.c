/* 1 Faça um programa que leia 2 valores inteiros e chame uma função que
receba estas 2 variáveis e troque o seu conteúdo, i.e., esta função é
chamada passando duas variáveis A e B, por exemplo, e após a execução da
função, A conterá o valor de B e B terá o valor de A. Imprima os valores
antes e depois da troca. */

#include <stdio.h>

void TrocaNum(int *num1, int *num2){
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int main(){
    int x, y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);

    printf("Antes: x = %d\ny = %d\n", x, y);
    TrocaNum(&x, &y);
    printf("Depois: x = %d\ny = %d", x, y);

    return 0;
}