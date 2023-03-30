/*17. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
A = (basemaior + basemenor) * altura / 2
Lembre-se a base maior e a base menor devem ser números maiores que zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float Base_Menor, Base_Maior, Area_Trapezio, Altura;
    printf("Digite o valor da base menor do trapezio:\n");
    scanf("%f", &Base_Menor);
    printf("Digite o valor da base maior do trapezio:\n");
    scanf("%f", &Base_Maior);
    printf("Digite a altura desse trapezio:\n");
    scanf("%f", &Altura);

    // estabelece a condicao para que seja feito o calculo 𝐴 = (basemaior + basemenor) ∗ altura / 2

    if((Base_Maior > 0) && (Base_Menor > 0 )){
        Area_Trapezio = ((Base_Maior + Base_Menor) * Altura) / 2;
        printf("Area do trapezio = %.2f", Area_Trapezio);
    } else {
        printf("Digite valores validos!");
    }
    return 0;
}