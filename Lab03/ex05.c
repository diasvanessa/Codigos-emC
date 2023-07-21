/*5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.*/

#include <stdio.h>

int main(){
    int contador;
    float Soma = 0, Num;

    for (contador = 0; contador < 10; contador++)
    {
        printf("Digite o %d valor: ", contador+1);
        scanf("%f", &Num);
        Soma += Num;
    }
    printf("A soma eh = %.2f", Soma);    
    return 0;
}