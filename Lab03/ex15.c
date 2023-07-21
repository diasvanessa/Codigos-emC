/*15. Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada
de dados com um valor negativo ou zero.*/

#include <stdio.h>
#include <math.h>

int main(){
    float Num;

    while (Num > 0)
    {
        printf("Digite um numero positivo:");
        scanf("%f", &Num);
        if (Num > 0 )
        {
        printf("%.2f ao cubo eh = %.2f\n", Num, pow(Num,3));
        printf("%.2f ao quadrado eh = %.2f\n", Num, pow(Num,2));
        printf("A raiz quadrada de %.2f eh = %.2f\n", Num, sqrt(Num));
        }
    }

    return 0;
}