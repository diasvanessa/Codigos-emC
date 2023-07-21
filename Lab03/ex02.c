/*2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do-while.
*/

#include <stdio.h>

int main(){

    int contador = 1;

    for (contador = 1; contador <= 100; contador++)
    {
        printf("%d\n", contador);
    }

    contador = 1;

    while (contador <= 100)
    {
        printf("%d\n", contador);
        contador++;
    }
    
    contador = 1;

    do
    {
        printf("%d\n", contador);
        contador++;
    } while(contador <= 100);

    return 0;
}