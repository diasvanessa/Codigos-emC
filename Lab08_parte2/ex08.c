/*8 Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um
programa que leia a variável ‘A’ e calcule e exiba o dobro, o triplo e o
quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B
deve ser usada para calcular o dobro, C o triplo e D o quádruplo.*/

#include <stdio.h>

int main(){
    int A;
    int *b, **c, ***d;

    b = &A;
    c = &b;
    d = &c;

    printf("Digite um valor: \n");
    scanf("%d", b);
    
    printf("Dobro do numero:%d\n", *b*2);
    printf("Triplo do numero:%d\n", **c*3);
    printf("Quadruplo do numero:%d\n", ***d*4);

    return 0;
}