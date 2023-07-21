/*23. Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo,
a saída para n = 4 seria:
*
**
***
****
***
**
**
* */

#include <stdio.h>

void Triangulo_Lateral(int Largura_Lateral);

int main(){
    int Largura_Usuario;
    printf("Digite a largura desejada para o triangulo lateral: ");
    scanf("%d", &Largura_Usuario);
    Triangulo_Lateral(Largura_Usuario);
    return 0;
}

void Triangulo_Lateral(int Largura_Lateral){
    int i, j;
    // triangulo superior
    for (i = 1; i <= Largura_Lateral; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");        
    }
    // triangulo inferior 
    for (i = 1; i < Largura_Lateral; i++)
    {
        for (j = Largura_Lateral - 1; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}