/*4. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em
1000, imprimindo seu valor na tela, até que seu valor seja 100.000 (cem mil).
*/

#include <stdio.h>

int main(){
    int Num;

    for (Num = 0; Num <= 100000; Num += 1000)
    {
        printf("%d\n", Num);
    }
    return 0;

}
    