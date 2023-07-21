/*7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média.*/

#include <stdio.h>

int main(){
    int contador = 0, Soma = 0, Num;
    float Media;

    for (contador = 0; contador < 10; contador++)
    {
        printf("Digite o %d valor: ", contador+1);
        scanf("%d", &Num);
        if (Num < 0)
        {
            continue;
        }
        Soma += Num;
    }
    
    Media = (float)Soma / 10;
    printf("A media de eh = %.2f", Media);

    return 0;
}