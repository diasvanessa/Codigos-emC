/*4 Escreva um programa que contenha duas variáveis inteiras. Leia essas
variáveis do teclado. Em seguida, compare seus endereços e exiba o
conteúdo do maior endereço.*/

#include <stdio.h>

int main(){
    int x, y;
    int* p1;
    int* p2;
    
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);

    p1 = &x;
    p2 = &y;

    if (p1 > p2)
    {
        printf("O endereco da variavel x = %p eh maior que da variavel y = %p", p1, p2);
    }
    else{
        printf("O endereco da variavel y = %p eh maior que da variavel x = %p", p2, p1);
    }
    
    return 0;
}