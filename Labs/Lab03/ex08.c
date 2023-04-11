/*8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
*/

#include <stdio.h>

int main(){
    int contador, Num, maior, menor;

    printf("Digite o primeiro valor:");
    scanf("%d", &Num);
    maior = Num;
    menor = Num;

    for (contador = 2; contador <= 10; contador++)
    {
        printf("Digite o %d valor: ", contador);
        scanf("%d", &Num);

        if (Num > maior)
        {
            maior = Num;
        }

        if(Num < menor)
        {
            menor = Num;
        }
        
    }
    
    printf("O menor numero eh = %d\n", menor);
    printf("O maior numero eh = %d\n", maior);
    return 0;
}