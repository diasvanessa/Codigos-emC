/* 3 Crie um programa que contenha uma função que permita passar por
parâmetro dois números inteiros A e B. A função deverá calcular a soma
entre estes dois números e armazenar o resultado na variável A. Esta função
não deverá possuir retorno, mas deverá modificar o valor do primeiro
parâmetro. Imprima os valores de A e B na função principal. */

#include <stdio.h>

void SomaNum(int *num1, int *num2){
    *num1 = *num1 + *num2;
}

int main(){
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    SomaNum(&A, &B);
    printf("A soma dos numeros eh igual a = %d", A);

    return 0;
}