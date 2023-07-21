/* 25. Calcule as raízes da equação de 2º grau.
Lembrando que:
x= -b +- sqrt(delta) / 2a
Onde delta = b² - 4ac 
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é
equação de segundo grau”.
- Se delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
- Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
- Se delta >= 0, imprima as duas raízes reais.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // define as variaveis e pede pro usuario o a, b, c da equacao do 2 grau 
    float x, x1, x2, a, b, c, Delta;
    printf("Digite o valor de a:");
    scanf("%f", &a);
    printf("Digite o valor de b:");
    scanf("%f", &b);
    printf("Digite o valor de c:");
    scanf("%f", &c);

    // calculo delta = b² - 4ac 

    Delta = (pow(b,2)) - (4*a*c);

    /* calcular as raizes da equacao do 2° grau baseado na equeacao: x= -b +- sqrt(delta) / 2a, 
    levar em consideração as condicoes: 
    Se delta < 0, não existe real.
    Se delta = 0, existe uma raiz real.
    Se delta >= 0, imprimir as duas raízes reais. */

    if(Delta < 0){
        printf("Nao existe raiz real");
    }
    else if(Delta == 0){
        x = -b / (2*a);
        printf("Equacao possui apenas uma raiz real = %.2f", x);
    }
    else if(Delta >= 0){
        x1 = (-b + sqrt(Delta)) / 2*a;
        x2 = (-b - sqrt(Delta)) / 2*a;
        printf("As raizes da equacao sao: x1 = %.2f e x2 = %.2f", x1, x2);
    }
    else {
        printf("Digite numeros validos!");
    }
    return 0;
}