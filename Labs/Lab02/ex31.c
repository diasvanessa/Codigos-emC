/*31. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a
seguir, verifique e mostra qual a classificação dessa pessoa.
                                    Peso
                 Até 60 Entre 60 e 90 (Inclusive) Acima de 90
< 1,20              A          D                        G
> 1,20 E < 1,70     B          E                        H
> 1,70              C          F                        I   
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // define as variaveis e atribui a elas altura e peso do usuario
    float Altura, Peso;
    printf("Digite sua altura: ");
    scanf("%f", &Altura);
    printf("Digite seu peso: ");
    scanf("%f", &Peso);

    // condicionais caso altura seja menor que 1,20
    if((Altura > 0) && (Altura < 1.20))
    {
        if (Peso < 60){
        printf("CLASSIFICACAO A\n");
        }
        else if((Peso >= 60) && (Peso <= 90)){
            printf("CLASSIFICACAO D\n");
        }
        else{
            printf("CLASSIFICACAO G\n");
        }
    }

    // condicionais para altura entre 1.20 e 1.70 
    if((Altura >= 1.20) && (Altura <= 1.70))
    {
        if (Peso < 60){
        printf("CLASSIFICACAO B\n");
        }
        else if((Peso >= 60) && (Peso <= 90)){
            printf("CLASSIFICACAO E\n");
        }
        else{
            printf("CLASSIFICACAO H");
        }
    }

    // condicionais para altura maior que 1.70
    if(Altura > 1.70)
    {
        if (Peso < 60){
        printf("CLASSIFICACAO C\n");
        }
        else if((Peso >= 60) && (Peso <= 90)){
            printf("CLASSIFICACAO F\n");
        }
        else{
            printf("CLASSIFICACAO I");
        }
    } else if (Altura <= 0){
        printf("Digite um numero valido!");
    }
    return 0;
}