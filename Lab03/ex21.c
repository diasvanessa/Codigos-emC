/*21. Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são
números informados pelo usuário.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, count, num_primo = 0, i, voltas_loop = 0;

    printf("Digite a:");
    scanf("%d", &a);
    printf("Digite b:");
    scanf("%d", &b);

    for (; a <= b; a++)
    {
        count = 0;
        for (i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            num_primo++;
        }
        voltas_loop++;
    }
    
    printf("Existem %d numeros primos entre %d e %d", num_primo, (b - voltas_loop) + 1, b);
    return 0;
}