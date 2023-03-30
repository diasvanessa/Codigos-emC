/*2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada
do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido. */

#include <stdio.h>

int main(){
    // define uma variavel e pede pra usuario dar um valor a ela
    float x;
    printf("x = ");
    scanf("%f", &x);

    // imprime o quadrado do numero se ele for positivo, se for negativo o programa nao executa a acao
    if(x > 0){
        printf("o quadrado de %.2f eh %.2f\n", x, x*x);
    } else
        printf("numero invalido\n");
    return 0;
}