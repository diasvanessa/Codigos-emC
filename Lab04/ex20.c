/*20. Escreva uma função para determinar a quantidade de números primos abaixo de N*/

#include <stdio.h>
#include <math.h>

void Primos(int Num);

int main(){
    int N;
    printf("Digite um numero: ");
    scanf("%d", &N);
    Primos(N);
    return 0;
}

void Primos(int Num){
    int i, soma = 0, count, j;
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
            soma += 1;
        }
    }
    printf("Existem %d numeros primos de 2 ate %d", soma, Num);

}