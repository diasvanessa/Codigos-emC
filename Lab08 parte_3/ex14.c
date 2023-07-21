/* 14 Implemente uma função que calcule as raízes de uma equação do segundo
grau do tipo
Ax²+ Bx + C = 0.

Lembrando que:
x= −b±√delta/2a

Onde:
delta=b²−4 ac
A variável a tem que ser diferente de zero.
- Se delta < 0, não existe real;
- Se delta = 0, existe uma raiz real;
- Se delta ≥ 0, existem duas raízes reais.
Essa função deve obedecer ao seguinte protótipo:
int raizes(float A, float B, float C, float *X1, float *X2);
Essa função deve ter como valor de retorno o número de raízes reais e
distintas da equação. Se existirem raízes reais, seus valores devem ser
armazenados nas variáveis apontadas por X1 e X2.
*/

#include <stdio.h>
#include <math.h>

int Func_2grau(float A, float B, float C, float *x1, float *x2){
    float delta;

    delta = pow(B,2) - 4*A*C;

    if (delta >= 0)
    {
        *x1 = (-B + sqrt(delta))/(2.0*A); 
        *x2 = (-B - sqrt(delta))/(2.0*A);
        return 2;
    }
    else if (delta == 0)
    {
        *x1 = (-B)/(2*A);
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    float x, y, z, raiz1, raiz2;
    int ret_func;

    do
    {
        printf("Digite o valor de a(diferente de zero): ");
        scanf("%f", &x);
        fflush(stdin);
    } while (x == 0);

    printf("Digite o valor de b: ");
    scanf("%f", &y);
    printf("Digite o valor de c: ");
    scanf("%f", &z);
    
    ret_func = Func_2grau(x, y, z, &raiz1, &raiz2);

    if (ret_func == 2){
        printf("Raiz real 1: %.2f\nRaiz real 2: %.2f", raiz1, raiz2);
    }
    else if (ret_func == 1){
        printf("Raiz real: %.2f", raiz1);
    }
    else{
        printf("Nao existe valor real para a raiz dessa funcao!");
    }
    
    return 0;
}