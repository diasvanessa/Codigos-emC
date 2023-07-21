/* 5 Escreva uma função que dado um número real passado como parâmetro,
retorne a parte inteira e a parte fracionária deste número. Escreva um
programa que chama esta função.

 Protótipo: void frac(float num, int *inteiro, float *frac);*/

#include <stdio.h>

void frac(float num, int *inteiro, float *frac){
    *inteiro = ((int) num);
    *frac = num - (int) num; 
}

int main(){
    float real, parte_real;
    int parte_inteira; 

    printf("Digite um numero real: ");
    scanf("%f", &real);


    frac(real, &parte_inteira, &parte_real);

    printf("Parte inteira: %d\nParte real: %.2f", parte_inteira, parte_real);

    return 0;
}