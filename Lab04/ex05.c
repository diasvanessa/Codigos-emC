/*5. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo
que o raio é passado por parâmetro.*/

#include <stdio.h>
#include <math.h>

float volume_esfera(float vol);

int main(){
    float raio;
    printf("Digite o raio da esfera:");
    scanf("%f", &raio);
    raio = volume_esfera(raio);
    printf("O volume da esfera eh: %f", raio);
    return 0;
}

float volume_esfera(float vol)
{
    vol = (4.0/3.0) * 3.14 * pow(vol, 3);
    return vol;
}