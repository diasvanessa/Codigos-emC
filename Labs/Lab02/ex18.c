/*18. Faça um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x,y;
    char Operacao; 
    printf("Escolha entre: A para adicao, D para divisao, P para produto ou S para subtracao:\n");
    Operacao = getchar();
    printf("Digite um valor para x:");
    scanf("%f", &x);
    printf("Digite um valor para y:");
    scanf("%f", &y);

    // imprime o resultado de acordo com a operacao escolhida pelo usuario

    if(Operacao == 'A' || Operacao == 'a'){
        printf("x + y = %.2f + %.2f= %.2f\n", x, y, x+y);
    }
    else if(Operacao == 'S' || Operacao == 's'){
        printf("x - y = %.2f - %.2f = %.2f\n", x, y, x-y);
    }
    else if(Operacao == 'P' || Operacao == 'p'){
        printf("x * y =%.2f * %.2f = %.2f\n", x, y, x*y);
    }
    else if(Operacao == 'D' || Operacao == 'd'){
        printf("x / y = %.2f / %.2f = %.2f\n", x, y, x/y);
    } else {
        printf("Digite um caractere valido!");
    }
    return 0;
}