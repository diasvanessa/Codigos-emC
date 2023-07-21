/*24. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a
saída para n = 6 seria:
        *
       ***
      *****
     *******
    *********
   *********** */

#include <stdio.h>

int main(){
    int Altura_Usuario;
    printf("Digite a altura desejada para o triangulo: ");
    scanf("%d", &Altura_Usuario);
    Triangulo_Arvore(Altura_Usuario);
    return 0;
}

void Triangulo_Arvore(int n){
    int i, j, c;
    for (i = 1; i <= n; i++)    // linhas
    {
         for(j = 1; j <= n-i; j++) { // imprime espaços antes do *
            printf(" ");
        }
        for(j = 1; j <= 2*i-1; j++) { // imprime os *
            printf("*");
        }
        printf("\n");
    }    

}