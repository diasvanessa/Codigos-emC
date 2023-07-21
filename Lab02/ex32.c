/*32. Escrever um programa que leia o código do produto escolhido do cardápio de uma
lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete
segue o padrão abaixo:

Especificação 	 Código     Preço
Cachorro Quente	  100 		1,20
Bauru Simples 	  101 		1,30
Bauru com Ovo 	  102 		1,50
Hambúrguer 		  103 		1,20
Cheeseburguer 	  104 		1,70
Suco 			  105 		2,20
Refrigerante 	  106 		1,00*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // define as variaveis e mostra um menu para usuario escolher qual o codigo do produto 

    int Quantidade, Codigo;
    float Preco;
    printf("Escolha um dos produtos e digite o codigo:\n");
    printf("100 - Cachorro quente\n");
    printf("101 - Bauru Simples\n");
    printf("102 - Bauru com Ovo\n");
    printf("103 - Hamburguer\n");
    printf("104 - Cheeseburguer\n");
    printf("105 - Suco\n");
    printf("106 - Refrigerante\n");
    printf("Digite o codigo do produto escolhido:");
    scanf("%d", &Codigo);

    // condicionais para calcular o preco do produto de acordo com o codigo e quantidade escolhida

    //cachorro quente
    if(Codigo == 100){
        printf("Cachorro quente selecionado\n");
        printf("Digite a quantidade de produtos: ");
        scanf("%d", &Quantidade);
        Preco = Quantidade * 1.20;
        printf("Valor final = R$%.2f", Preco);
    
    // bauru simples
    } else if(Codigo == 101){
        printf("Bauru simples selecionado\n");
        printf("Digite a quantidade de produtos: ");
        scanf("%d", &Quantidade);
        Preco = Quantidade * 1.30;
        printf("Valor final = R$%.2f", Preco);

    // bauru com ovo
    } else if(Codigo == 102){
        printf("Bauru com ovo selecionado\n");
        printf("Digite a quantidade de produtos: ");
        scanf("%d", &Quantidade);
        Preco = Quantidade * 1.50;
        printf("Valor final = R$%.2f", Preco);

    // hamburguer 
    } else if(Codigo == 103){
        printf("Hamburguer selecionado\n");
        printf("Digite a quantidade de produtos: ");
        scanf("%d", &Quantidade);
        Preco = Quantidade * 1.20;
        printf("Valor final = R$%.2f", Preco);

    // cheeseburguer
    } else if (Codigo == 104){
        printf("Cheeseburguer selecionado\n");
        printf("Digite a quantidade de produtos: ");
        scanf("%d", &Quantidade);
        Preco = Quantidade * 1.70;
        printf("Valor final = R$%.2f", Preco);

    // suco
    } else if(Codigo == 105){
        printf("Suco selecionado\n");
        printf("Digite a quantidade de produtos: ");
        scanf("%d", &Quantidade);
        Preco = Quantidade * 2.20;
        printf("Valor final = R$%.2f", Preco);
    
    // refrigerante
    } else if(Codigo == 106){
        printf("Refrigerante selecionado\n");
        printf("Digite a quantidade de produtos: ");
        scanf("%d", &Quantidade);
        Preco = Quantidade * 1.00;
        printf("Valor final = R$%.2f", Preco);
    
    // caso usuario nao digite um codigo valido 
    } else{
        printf("Digite um codigo valido!");
    }
    return 0;
}