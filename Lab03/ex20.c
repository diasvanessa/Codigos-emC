/*20. Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.*/

#include <stdio.h>
#include <math.h>

int main(){
    int i, count, Num = 2000000, j;
    long long Soma = 0;

    for (i = 2; i < Num; i++)
    {
        count = 1; 
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0){
                count++;
                break;
            }
        }
        if (count == 1)
        {
            Soma += i;
        }
        
    }
   
    printf("A soma de todos os numeros primos menores que 2000000 eh = %lld", Soma);
    return 0;
}