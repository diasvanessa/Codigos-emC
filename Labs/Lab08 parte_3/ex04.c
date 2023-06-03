/* 4 Faça um programa que leia três valores inteiros e chame uma função que
receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o
menor valor na primeira variável, o segundo menor valor na variável do
meio, e o maior valor na última variável. A função deve retornar o valor 1 se
os três valores forem iguais e 0 se existirem valores diferentes. Exibir os
valores ordenados na tela. */

#include <stdio.h>

int OrdenaValor(int *num1, int *num2, int *num3){
    int aux, i;

    if ((*num1 == *num2) && (*num2 == *num3) && (*num1 == *num3))
    {
        return 1;
    }
    else{
        for (i = 0; i < 2; i++)
        {
            if (*num1 > *num2)
            {
                aux = *num1;
                *num1 = *num2;
                *num2 = aux;
            }
            if (*num2 > *num3)
            {
                aux = *num2;
                *num2 = *num3;
                *num3 = aux;
            }   
        }
        return 0;
    }

}

int main(){
    int x, y, z, ret_func;

    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para y: ");
    scanf("%d", &y);
    printf("Digite um valor para z: ");
    scanf("%d", &z);

    ret_func = OrdenaValor(&x, &y, &z);

    if (ret_func == 1)
    {
        printf("Os numeros sao iguais!\n");
    }
    else if (ret_func == 0)
    {
        printf("Numeros ordenados: %d %d %d\n", x, y, z);
    }

    return 0;
}