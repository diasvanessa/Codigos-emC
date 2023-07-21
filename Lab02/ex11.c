/*11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5
+ 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:
“Número inválido”*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    /*define as variaveis, a variavel 'digito' sera utilizada para guardar cada digito do numero; 
    a variavel 'num' recebera um numero digitado pelo usuario e a variavel 'soma_digitos'
    recebera e somara cada digito do numero*/

    int digito, num, soma_digitos = 0;
    printf("Digite um numero inteiro maior que 0:\n");
    scanf("%d", &num);

    if(num > 0)
    {
        /*laço para retirar cada digito do numero e ir somando, o 'while' sera executado ate o resto do
        numero dar 0, e isso ocorrera apos o ultimo digito for retirado desse numero, a cada divisao por
        10 um digito eh retirado, ate que o resto seja 0.*/

        while(num > 0)
        {
            digito = num % 10;
            soma_digitos += digito;
            num /= 10;
        }
        printf("A soma dos digitos do numero eh igual a = %d\n", soma_digitos);
    }
    else{
        printf("Numero invalido!\n");
    }
    return 0; 
}