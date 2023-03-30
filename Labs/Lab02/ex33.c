/* 33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule
e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a segunda tabela).

PREÇO ANTIGO 		     PERCENTUAL DE AUMENTO
até R$ 50 				      5%
entre R$ 50 e R$ 100		  10%
acima de R$ 100 			  15%

PREÇO NOVO		 			           MENSAGEM
até R$ 80 						       Barato
entre R$ 80 e R$ 120 (inclusive) 	   Normal
entre R$ 120 e R$ 200 (inclusive) 		Caro
acima de R$ 200 					  Muito caro
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // DEFINE AS VARIAVEIS E ATRIBUI AO PRECO ANTIGO UM VALOR DIGITADO PELO USUARIO
    float Preco_Antigo, Preco_Novo;
    float Aumento_5 = 0.05;
    float Aumento_10 = 0.10;
    float Aumento_15 = 0.15;   
    printf("Digite o preco antigo do produto: ");
    scanf("%f", &Preco_Antigo);

    // CONDICIONAIS PARA DEFINIR SE O PRODUTO POSSUI PRECO BARATO, NORMAL, CARO OU SUPER CARO

    // Preco antigo entre 0 e 49.99
    if((Preco_Antigo > 0) && (Preco_Antigo < 50.00)){
        Preco_Novo = Preco_Antigo * (1+Aumento_5);
        printf("O preco novo do produto eh = R%.2f\n", Preco_Novo);
        printf("Produto barato!\n");
    } 

    //Preco antigo entre 50.00 e 100.00
    else if((Preco_Antigo >= 50.00) && (Preco_Antigo <= 100.00)){
        Preco_Novo = Preco_Antigo * (1+Aumento_10);
        printf("O preco novo do produto eh = R$%.2f\n", Preco_Novo);

        if(Preco_Novo < 80){
            printf("Produto barato!\n");
        }
        else if ((Preco_Novo >= 80) && (Preco_Novo <= 120))
        {
            printf("Produto com preco normal!\n");
        }
    
    // Preco antigo acima de 100.00
    }
    else if(Preco_Antigo > 100.00){
        Preco_Novo = Preco_Antigo * (1+Aumento_15);
        printf("O preco novo do produto eh = R$%.2f\n", Preco_Novo);

        if((Preco_Novo >= 80) && (Preco_Novo <= 120)){
            printf("Produto com preco normal!\n");
        }
        else if((Preco_Novo > 120) && (Preco_Novo <= 200)){
            printf("Produto com preco caro!\n");
        }
        else{
            printf("Produto com preco super caro!\n");
        }
    }
    else{
        printf("Digite um preco correto!\n");
    }
    return 0;
}
