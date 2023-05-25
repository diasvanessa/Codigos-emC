/* 6 Escreva um programa que declare duas variáveis do tipo inteiro e duas do
tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
o programa deve ler dois números para essas variáveis e os imprimir,
realizando as quatro operações básicas de matemática com esses números.*/

#include <stdio.h>

int main(){
    int A, B; 
    int* p1;
    int* p2;

    printf("Digite um valor para A: ");
    scanf("%d", &A);
    printf("Digite um valor para B: ");
    scanf("%d", &B);

    p1 = &A;
    p2 = &B;

    if (*p1 < *p2)
    {
        printf("Subtracao = %d \n", *p2 - *p1 );
    }
    else{
        printf("Subtracao = %d \n", *p1 - *p2);
    }
    printf("Soma = %d\n", *p1 + *p2);
    printf("Divisao = %d\n", *p1 / *p2);
    printf("Produto = %d\n", *p1 * *p2);

    return 0;
}