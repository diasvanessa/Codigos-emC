/*9. Faça um programa que faca operações simples de números complexos:
 Crie e leia dois números complexos z e w, compostos por parte real e parte imaginária;
 Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o módulo
de ambos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct numero_complexo{
    float real;
    float imag;
};

typedef struct numero_complexo numero_complexo;

int main(){
    numero_complexo z, w, soma, sub, produto;
    float modulo_z, modulo_w;
    

    printf("Digite a parte real de z: ");
    scanf("%f", &z.real);
    printf("Digite a parte imaginaria de z:");
    scanf("%f", &z.imag);
    printf("Digite a parte real de w: ");
    scanf("%f", &w.real);
    printf("Digite a parte imaginaria de w:");
    scanf("%f", &w.imag);

    soma.real = z.real + w.real;
    soma.imag = z.imag + w.imag;
    sub.real = z.real - w.real;
    sub.imag = z.imag - w.imag;
    produto.real = z.real * w.real - z.imag * w.imag;
    produto.imag = z.real * w.imag + z.imag * w.real;
    modulo_z = sqrt(pow(z.real, 2) + pow(z.imag, 2));
    modulo_w = sqrt(pow(w.real, 2) + pow(w.imag, 2));

    printf("Soma: %.2f + %.2fi \n", soma.real, soma.imag);
    printf("Subtracao: %.2f - %.2fi \n", sub.real, sub.imag);
    printf("Produto: %.2f * %.2fi \n", produto.real, produto.imag);
    printf("Modulo de z: %.2f \n", modulo_z);
    printf("Modulo de w: %.2f \n", modulo_w);

    return 0;
}