/*17. Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce
3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão
necessários para que Zé seja maior que Chico*/

#include <stdio.h>

int main(){
    int anos = 0;
    float Altura_Chico = 1.5, Altura_Ze = 1.10;

    while(Altura_Ze < Altura_Chico)
    {
        Altura_Ze += 0.03;
        Altura_Chico += 0.02;
        anos++;
    }
    printf("Altura de Chico: %.2f\n", Altura_Chico);
    printf("Altura de Ze: %.2f\n", Altura_Ze);
    printf("Sao necessarios %d anos para que Ze seja maior que Chico", anos);

    return 0;
}