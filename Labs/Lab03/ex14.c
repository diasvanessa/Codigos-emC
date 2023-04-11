/*14. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.*/

#include <stdio.h>
#include <time.h>

int main(){
    int contador, d1, d2, n;
    srand(time(NULL));

    n = (rand() % 100) + 1; // os dados foram lançado n vezes, sendo n, um numero aleatorio de 1 a 100
    printf("Os dado foram lancados simulteamente %d vezes\n", n);

    for (contador = 0; contador < n; contador++)
    {
        d1 = (rand() % 6) + 1; // para evitar que o numero gerado seja 0 
        d2 = (rand() % 6) + 1;
        
        if (d1 < d2)
        {
            printf("Lancamento %d:\n", contador+1);
            printf("Dado um = %d, Dado dois = %d, Dado 1 < Dado 2\n", d1, d2);
        }
        else if (d1 > d2)
        {
            printf("Lancamento %d:\n", contador+1);
            printf("Dado um = %d, Dado dois = %d, Dado 1 > Dado 2\n", d1, d2);
        }
        else
        {
            printf("Lancamento %d:\n", contador+1);
            printf("Dado um = %d, Dado dois = %d, Dado 1 = Dado 2\n", d1, d2);
        }
        
    }
    return 0;
}
