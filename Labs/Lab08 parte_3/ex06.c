/* 6 Implemente uma função que calcule a área da superfície e o volume de uma
esfera de raio R. Essa função deve obedecer ao protótipo:
void calc_esfera(float R, float *area, float *volume); 

A área da superfície e o volume são dados, respectivamente, por:
A = 4 * Pi * R²
V = 4/3 * Pi * R³
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14

void calc_esfera(float R, float *area, float *volume){
    *area = 4 * PI * pow(R,2);
    *volume = 4/3.0 * PI * pow(R,3);
}

int main(){
    float Raio, A, V;

    printf("Digite o raio dessa esfera: ");
    scanf("%f", &Raio);

    calc_esfera(Raio, &A, &V);

    printf("Area da esfera = %.2f\nVolume da esfera = %.2f", A, V);

    return 0;

}