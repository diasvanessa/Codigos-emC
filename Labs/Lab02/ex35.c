/*35. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e
se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em
anos não bissextos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // define as variaveis e guarda o dia, mes e ano digitados pelo usuario
    int Dia, Mes, Ano;
    printf("Digite o dia (1-31): ");
    scanf("%d", &Dia);
    printf("Digite o mes (1-12): ");
    scanf("%d", &Mes);
    printf("Digite o ano: ");
    scanf("%d", &Ano);

    // caso usuario digite um mes menor que 1 e maior que 12

    if ((Mes < 1) || (Mes > 12)){
        printf("Digite um mes valido!\n");
    }

    // verificar se data eh valida para um ano bissexto

    if((Ano % 400 == 0) || ((Ano % 4 == 0 ) && (Ano % 100 != 0))){
    // checagem de meses com dia ate 31, se usuario digitar valor maior a data eh invalida
        if (Mes == 1 || Mes == 3 || Mes == 5 || Mes == 7 || Mes == 8 || Mes == 10 || Mes == 12){
            if((Dia >= 1) && (Dia <= 31)){
                printf("Data valida!\n");
            }
            else{
                printf("Data invalida!\n");
            }
        }
    // checagem de meses com dia ate 30, se usuario digitar valor maior a data eh invalida
        else if (Mes == 4 || Mes == 6 || Mes == 9 || Mes == 11 ){
            if ((Dia >= 1) && (Dia <= 30)){
                printf("Data valida!\n");
            }
            else{
                printf("Data invalida!\n");
            }
        }
    // checagem de fevereiro, como ano eh bissexto os dias vao ate 29
        else if (Mes == 2){
            if ((Dia >= 1) && (Dia <= 29)){
                printf("Data valida!\n");
            }
            else{
                printf("Data invalida!\n");
            }
        }
    }

    // condicionais para o ano que nao eh bissexto

    else{
        // checagem para meses com dias ate 31
        if (Mes == 1 || Mes == 3 || Mes == 5 || Mes == 7 || Mes == 8 || Mes == 10 || Mes == 12){
            if((Dia >= 1) && (Dia <= 31)){
                printf("Data valida!\n");
            }
            else{
                printf("Data invalida!\n");
            }
        }
        // checagem para meses com dias ate 30
        else if (Mes == 4 || Mes == 6 || Mes == 9 || Mes == 11 ){
            if ((Dia >= 1) && (Dia <= 30)){
                printf("Data valida!\n");
            }
            else{
                printf("Data invalida!\n");
            }
        }
        // checagem para fevereiro, que em ano nao bissexto os dias vao ate 28
        else if (Mes == 2){
            if ((Dia >= 1) && (Dia <= 28)){
                printf("Data valida!\n");
            }
            else{
                printf("Data invalida!\n");
            }
        }
    }
        return 0;
}