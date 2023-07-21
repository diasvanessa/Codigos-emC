/*8. Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação:
hipotenusa = √𝑎2 + 𝑏2. Faça uma função que receba os valores de a e b e calcule o valor
da hipotenusa através da equação.
*/

#include <stdio.h>
#include <math.h>

float hipotenusa_triangulo(float cateto2_a, float cateto2_b);

int main(){
    float cateto1_a, cateto1_b, hipotenusa1_triangulo;
    printf("Digite o valor do cateto a do triangulo: ");
    scanf("%f", &cateto1_a);
    printf("Digite o valor do cateto b do triangulo: ");
    scanf("%f", &cateto1_b);
    hipotenusa1_triangulo = hipotenusa_triangulo(cateto1_a, cateto1_b);
    printf("O valor da hipotenusa desse triangulo eh = %.2f", hipotenusa1_triangulo);   
    return 0;
}

float hipotenusa_triangulo(float cateto2_a, float cateto2_b){
    return sqrt(pow(cateto2_a, 2) + pow(cateto2_b, 2));
}