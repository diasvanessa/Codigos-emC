/* 36. Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga
ao vendedor. Para calcular a comissão, considere a tabela abaixo:

Venda mensal 											                Comissão
Maior ou igual a R$100.000,00 							        R$700,00 + 16% das vendas
Menor que R$100.000,00 e maior ou igual a R$80.000,00 			R$650,00 + 14% das vendas
Menor que R$80.000,00 e maior ou igual a R$60.000,00 			R$600,00 + 14% das vendas
Menor que R$60.000,00 e maior ou igual a R$40.000,00 			R$550,00 + 14% das vendas
Menor que R$40.000,00 e maior ou igual a R$20.000,00 			R$500,00 + 14% das vendas
Menor que R$20.000,00 									        R$400,00 + 14% das vendas
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // define as variaveis e guarda na da venda mensal um valor digitado pelo usuario
    float Venda_Mensal, Comissao;
    printf("Digite o valor da venda: ");
    scanf("%f", &Venda_Mensal);

    // define as condicionais para imprimir o valor da comissao ganha

    // Venda mensal acima de 100000, comissao de 700 + 16% das vendas
    if (Venda_Mensal >= 100000.00)
    {
        Comissao = 700 + (Venda_Mensal * 16/100);
        printf("A comissao ganha eh de = R$%.2f", Comissao);
    }
    // Venda mensal entre 80000 e 100000, a comissao eh de 650 + 14% das vendas
    else if ((Venda_Mensal >= 80000) && (Venda_Mensal < 100000))
    {
        Comissao = 650 + (Venda_Mensal * 14/100);
        printf("A comissao ganha eh de = R$%.2f", Comissao);
    }
    // Venda mensal entre 60000 e 80000, a comissao eh de R$600,00 + 14% das vendas
    else if ((Venda_Mensal >= 60000) && (Venda_Mensal < 80000))
    {
        Comissao = 600 + (Venda_Mensal * 14/100);
        printf("A comissao ganha eh de = R$%.2f", Comissao);
    }
    // Venda mensal entre R$60.000,00 e R$40.000,00, a comissao eh de 550,00 + 14% das vendas
    else if ((Venda_Mensal >= 40000) && (Venda_Mensal < 60000))
    {
        Comissao = 550 + (Venda_Mensal * 14/100);
        printf("A comissao ganha eh de = R$%.2f", Comissao);
    }
    // Venda mensal entre R$40.000,00 e R$20.000,00 a comissao eh de R$500,00 + 14% das vendas
    else if ((Venda_Mensal >= 20000) && (Venda_Mensal < 40000))
    {
        Comissao = 500 + (Venda_Mensal * 14/100);
        printf("A comissao ganha eh de = R$%.2f", Comissao);
    }
    // Venda mensal menor que  R$20.000,00, a comissao eh de R$400,00 + 14% das vendas
    else if ((Venda_Mensal > 0) && (Venda_Mensal < 20000))
    {
        Comissao = 400 + (Venda_Mensal * 14/100);
        printf("A comissao ganha eh de = R$%.2f", Comissao);
    }
    else{
        printf("Digite um valor valido!");
    }
    return 0;
}