/* 7 Faça um programa que declare três variáveis do tipo inteiro e três do tipo
ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros, leia
três números e os imprima em ordem crescente. O programa deve
apresentar também o endereço de memória desses números. */

#include <stdio.h>

int main(){
    int x, y, z, i;
    int* p1;
    int* p2;
    int* p3;

    p1 = &x; 
    p2 = &y;
    p3 = &z;

    printf("Digite um valor para x: ");
    scanf("%d", p1);
    printf("Digite um valor para y: ");
    scanf("%d", p2);
    printf("Digite um valor para z: ");
    scanf("%d", p3);

    if (x < y && y < z)
    {
        printf("Ordem crescente: %d, %d, %d\n", *p1, *p2, *p3);
        printf("Enderecos de memoria, respectivamente: %p, %p, %p", p1, p2, p3);
    }
    else if (x < y && z < y)
    {
        printf("Ordem crescente: %d, %d, %d\n", *p1, *p3, *p2);
        printf("Enderecos de memoria, respectivamente: %p, %p, %p", p1, p3, p2);
    }
    else if (y < x && x < z)
    {
        printf("Ordem crescente: %d, %d, %d\n", *p2, *p1, *p3);
        printf("Enderecos de memoria, respectivamente: %p, %p, %p", p2, p1, p3);
    }
    else if (y < x && z < x)
    {
        printf("Ordem crescente: %d, %d, %d\n", *p2, *p3, *p1);
        printf("Enderecos de memoria, respectivamente: %p, %p, %p", p2, p3, p1);
    }
    else if (z < x && x < y)
    {
        printf("Ordem crescente: %d, %d, %d\n", *p3, *p1, *p2);
        printf("Enderecos de memoria, respectivamente: %p, %p, %p", p3, p1, p2);
    }
    else if (z < y && y < x)
    {
        printf("Ordem crescente: %d, %d, %d\n", *p3, *p2, *p1);
        printf("Enderecos de memoria, respectivamente: %p, %p, %p", p3, p2, p1);
    }
    else{
        printf("Numeros sao iguais!\n");
        printf("Enderecos de memoria de x, y e z: %p, %p, %p", p1, p2, p3);
    }
    
    return 0;
}