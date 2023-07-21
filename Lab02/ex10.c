/*10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
- Homens: (72,7 * h) – 58,0
- Mulheres: (62,1 * h) – 44,7 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float Altura, Homem, Mulher; // define as variaveis 
    char S;
    printf("Digite o sexo da pessoa (H/M):"); // pede que usuario digite o sexo, especificando os caracteres desejados
    S = getchar(); // le o caractere digitado pelo usuario 
    printf("Digite a altura:");
    scanf("%f", &Altura); // le a altura 

    // operacoes para guardar o calculo a ser efetuado para caso o usuario digite 'M' ou 'H'

    Mulher = (62.1 * Altura) - 44.7;
    Homem = (72.7 * Altura) - 58.0;

    // condicionais para imprimir de acordo com os valores que o usuario digitou

    if((S == 'H') || (S == 'h')){
        printf("O seu peso ideal eh:%.0fkg", Homem);
    } else if((S == 'M') || (S == 'm')){
        printf("O seu peso ideal eh: %.0fkg", Mulher);
    } else {
        printf("Digite um caractere valido!");
    }
    return 0; 
}