/*23. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for
divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992,
1996 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // le o ano escolhido pelo usuario
    int Ano;
    printf("Digite um ano: ");
    scanf("%d", &Ano);

    /*checa se é bissexto ou nao, sendo que um ano é bissexto se for 
    divisível por 400 ou se for divisível por 4 e não for divisível por 10 */

    if((Ano % 400 == 0) || ((Ano % 4 == 0 ) && (Ano % 100 != 0))){
        printf("O ano eh bissexto!");
    } else {
        printf("Ano nao eh bissexto!");
    }
    return 0;
}