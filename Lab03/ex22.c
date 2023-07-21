/*22. Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois
números de 3 dígitos. Ex.: O maior palíndromo feito a partir do produto de dois números de dois
dígitos é 9009 = 91*99.*/

#include <stdio.h>

int main(){
    int a, b, reverso = 0, palindromo_maior = 0, prod, digito;

    for (a = 100; a < 1000; a++)
    {
        for (b = 100; b < 1000; b++)
        {
            prod = a*b;
            reverso = 0;
            while(prod > 0)
            {
                digito = prod % 10;
                reverso = (reverso * 10) + digito;
                prod /= 10;
            }
        
            if(reverso == (a*b) && reverso > palindromo_maior)
            {
                palindromo_maior = reverso;
            }
        }
    }
       
    printf("O maior palindromo feito por 3 digitos eh %d\n", palindromo_maior);
    return 0;
}