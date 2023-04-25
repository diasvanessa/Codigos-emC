/*7. Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em
graus Fahrenheit. A fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,0/5,0) + 32,0, sendo F a temperatura
em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

float Temperatura_Calculo(float Temp_2C);

int main(){
    float Temp1_C, Temp1_F;
    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &Temp1_C);
    Temp1_F = Temperatura_Calculo(Temp1_C);
    printf("A temperatura de %.2f graus celsius eh %.2f em graus fahrenheit", Temp1_C, Temp1_F);
    return 0;
}


float Temperatura_Calculo(float Temp_2C){
    return Temp_2C * (9.0/5.0) + 32.0;
}