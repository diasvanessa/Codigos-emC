/*3 Escreva um programa que contenha duas variáveis inteiras. Compare seus
endereços e exiba o maior endereço.
*/

#include <stdio.h>

int main(){
    int x = 0, y = 0;

    if (&x > &y)
    {
        printf("O endereco da variavel x = %p eh maior que da variavel y = %p", &x, &y);
    }
    else{
        printf("O endereco da variavel y = %p eh maior que da variavel x = %p", &y, &y);
    }
    
    return 0;
}