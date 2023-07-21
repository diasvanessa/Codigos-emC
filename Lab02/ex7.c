/*7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: “Números iguais”*/

#include <stdio.h>
#include <math.h>

int main(){

    // define as variaveis e atribui a elas dois valores digitados pelo usuario
    int x,y;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &x, &y);

    // imprime qual dos numeros eh maior, se forem iguais imprime que sao iguais.
    if(x > y){
        printf("%d eh maior que %d\n", x,y);
    } else if(x < y){
        printf("%d eh o maior que %d\n", y,x);
    } else {
        printf("%d eh igual a %d", x,y);
    }
    return 0;
}
