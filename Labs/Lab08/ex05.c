/* 5 Faça um programa que leia dois variáveis do tipo inteiro (A e B) e duas do
tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
o programa deve retornar a soma do dobro dos dois números lidos. O dobro
de A na própria variável A e o dobro de B na própria variável B. */

#include <stdio.h>

int main(){
    int A, B, Soma;
    int* p1;
    int* p2;

    printf("Digite um valor para A: ");
    scanf("%d", &A);
    printf("Digite um valor para B: ");
    scanf("%d", &B);

    p1 = &A;
    p2 = &B;

    A = A*2;
    B = B*2;

    printf("A soma do dobro das variaveis = %d\n", *p1 + *p2);
    return 0; 
}