/* 24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um
programa em que o usuário entre com o valor e o estado destino do produto e o programa
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o
estado digitado não for válido, mostrar uma mensagem de erro. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // define as variaveis e pede para o usuario escolher entre as opcoes dadas, o estado de destino
    int Estado;
    float Valor_MG, Valor_SP, Valor_RJ, Valor_MS, Valor_Produto;
    printf("Digite o valor do produto:");
    scanf("%f", &Valor_Produto);
    printf("Escolha o estado de destino:\n");
    printf("1)MG\n2)SP\n3)RJ\n4)MS\n");
    printf("Digite sua escolha de 1-4:\n");
    scanf("%d", &Estado);

    /*Calcula o imposto de acordo com o estado digitado pelo usuario. Cada estado possui
    uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%)*/

    // imposto para MG
    if(Estado == 1){
        Valor_MG = Valor_Produto * (1+0.07);
        printf("O valor final do produto eh:R$%.2f\n", Valor_MG);
    } 
    // imposto para SP
    else if(Estado == 2){
        Valor_SP = Valor_Produto * (1+0.12);
        printf("O valor final do produto eh R$%.2f\n", Valor_SP);
    }
    // imposto para RJ
    else if (Estado == 3){
        Valor_RJ = Valor_Produto * (1+0.15);
        printf("O valor final do produto eh R$%.2f\n", Valor_RJ);
    }
    // imposto para MS
    else if(Estado == 4){
        Valor_MS = Valor_Produto * (1+0.08);
        printf("O valor final do produto eh R$%.2f\n", Valor_MS);
    }
    // caso usuario nao escolha uma opcao valida
    else {
        printf("Escolha um estado valido!");
    }
    return 0;
}