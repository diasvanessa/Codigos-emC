/*20. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes
conceitos:
- O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois
lados;
- Chama-se equilátero o triângulo que tem três lados iguais;
- Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
- Recebe o nome de escaleno o triângulo que tem os três lados diferentes; */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int L_1, L_2, L_3;
    printf("Digite tres lados de um triangulo:");
    scanf("%d %d %d", &L_1, &L_2, &L_3);

    /*Condicao para checar se os lados formam um triangulo: 
    O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados;*/

    if ((L_1 < (L_2 + L_3)) && (L_2 < (L_1 + L_3)) && (L_3 < (L_1 + L_2))){

        // condicoes para definir se o triangulo eh equilatero, isoceles ou escaleno

        // triangulo equilatero, os tres lados sao iguais 
        if ((L_1 == L_2) && (L_2 == L_3)){
            printf("Esse eh um triangulo equilatero\n");
        }
        // triangulo isoceles, dois lados iguais
        else if ((L_1 == L_2) || (L_2 == L_3) || (L_3 == L_1)){
            printf("Esse eh um triangulo isoceles\n");
        } 
        // triangulo escaleno, os tres lados sao diferentes
        else {
            printf("Esse eh um triangulo escaleno!\n");
        }
    } else {
        printf("Os tres lados nao formam um triangulo valido!");
    }
    return 0;
}