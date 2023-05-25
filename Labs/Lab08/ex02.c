/* 2 Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use
&). Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e após a modificação.
*/

#include <stdio.h>

int main(){
    int x = 0;
    float y = 0;
    char c = '0';
    int* p1;
    float* p2;
    char* p3;
    p1 = &x;
    p2 = &y;
    p3 = &c;

    printf("x: %d\n", x);
    *p1 += 1;
    printf("x: %d\n", *p1);

    printf("y: %.2f\n", y);
    *p2 += 3.6;
    printf("y: %.2f\n", *p2);

    printf("c: %c\n", c);
    *p3 = 'A';
    printf("c: %c\n", *p3);
    return 0;
}