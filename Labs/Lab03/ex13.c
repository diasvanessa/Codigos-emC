/*13. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos
de 3 ou 5*/

#include <stdio.h>

int main(){
    int contador, Soma = 0;
    
    for (contador = 0; contador < 1000; contador++)
    {
        if ((contador % 3 == 0 ) || (contador % 5 == 0))
        {
            Soma += contador;
        }
        
    }
    printf("%d\n", Soma);
    return 0;
}