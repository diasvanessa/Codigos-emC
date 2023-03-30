/*19. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5,
mas, não simultaneamente pelos dois.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x;
    printf("Digite um numero para verificar se eh divisivel por 3 ou por 5:");
    scanf("%d", &x);

    // Checa se um determinado número inteiro e divisível por 3 ou 5, mas, não simultaneamente pelos dois

    if((x % 3 == 0) ^ (x % 5 == 0)){
        printf("%d eh divisivel por 3 ou por 5\n", x);
    }
    else {
        printf("%d nao eh divisivel por 3 ou por 5, ou eh divisivel por ambos\n", x);
    }
    return 0; 
}

