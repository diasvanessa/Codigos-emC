/*1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.
O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
d) Mostre na tela cada valor do vetor A, um em cada linha.*/

#include <stdio.h>

int main(){
    int A[6], i, Soma = 0;

    // a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    /*b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
    A[0], A[1] e A[5] do vetor e mostre na tela esta soma.*/

    Soma = A[0] + A[1] + A[5];
    printf("A soma das posicoes 0, 1 e 5 eh = %d\n", Soma);

    // c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
    A[4] = 100;

    // d) Mostre na tela cada valor do vetor A, um em cada linha.*/
    for (i = 0; i < 6; i++)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}