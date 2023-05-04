/*10. Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto
para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever
o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char mercadoria[20];
    float valormercadoria;

    printf("Digite o nome da mercadoria: ");
    fgets(mercadoria, 20, stdin);
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valormercadoria);

    printf("O nome da mercadoria eh: %s\n", strtok(mercadoria, "\n"));
    printf("O valor da mercadoria eh: R$%.2f\n", valormercadoria);
    printf("O valor do desconto eh = R$%.2f\n", valormercadoria*0.1);
    printf("O valor a vista da mercadoria eh = R$%.2f\n", valormercadoria*(1-0.1));

    return 0;
}