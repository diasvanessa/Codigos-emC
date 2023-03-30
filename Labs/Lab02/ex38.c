/*38. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia,
Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia
fornecido é um dia válido: dia > 0, dia <= 28 para o mês de fevereiro (29 se o ano for bissexto),
dia <= 30 em abril, junho, setembro e novembro, dia <= 31 nos outros meses. Teste a validade do
mês: mês > 0 e mês < 13. Teste a validade do ano: ano <= ano atual (use uma constante definida
com o valor igual a 2022). Imprimir: “data válida” ou “data inválida” no final da execução do
programa.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

// define as variaveis e guarda o dia, mes e ano de aniversario digitados pelo usuario
    int Dia, Mes, Ano;
    printf("Digite o dia do nascimento(1-31): ");
    scanf("%d", &Dia);
    printf("Digite o mes do nascimento(1-12): ");
    scanf("%d", &Mes);
    printf("Digite o ano de nascimento(<= 2022): ");
    scanf("%d", &Ano);

    // caso usuario digite um mes menor que 1 e maior que 12

    if ((Mes < 1) || (Mes > 12)){
        printf("Digite um mes valido!\n");
    }

    // verificar se eh um ano valido

    if (Ano <= 2022)
    {
        // verificar se eh ano bissexto
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
    }
    else{
        printf("Data invalida!");
    }
        return 0;
}