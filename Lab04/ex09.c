/*9. Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do
cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: 
𝑉 =pi * raio² ∗ 𝑎𝑙𝑡𝑢𝑟𝑎, onde pi = 3.141592.
*/

#include <stdio.h>
#include <math.h>

#define PI 3.141592

float volume_cilindro1(float raio2, float altura2);

int main(){
    float raio1, altura1, volume_cilindro2;
    printf("Digite o raio do cilindro circular: ");
    scanf("%f", &raio1);
    printf("Digite a altura do cilindro circular: ");
    scanf("%f", &altura1);
    volume_cilindro2 = volume_cilindro1(raio1, altura1);
    printf("O volume desse cilindro circular eh = %.2f", volume_cilindro2);
    return 0;
}

float volume_cilindro1(float raio2, float altura2){
    return PI * pow(raio2,2) * altura2;
}