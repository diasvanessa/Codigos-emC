/*12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float num, logaritmo_natural, logaritmo_base10;
    printf("Digite um numero positivo:");
    scanf("%f", &num);

    // condicional para calcular o logaritmo do numero, o usuario tem que ter digitado um numero positivo.
    if (num > 0){
        logaritmo_natural = log(num);
        logaritmo_base10 = log10(num);
        printf("O logaritmo de %.2f eh = %.2f\n", num, logaritmo_natural);
        printf("O logaritmo de %.2f na base 10 eh = %.2f\n", num, logaritmo_base10);
    } else {
        printf("Digite um numero valido!\n");
    }
    return 0; 
}
