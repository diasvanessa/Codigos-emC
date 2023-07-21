/*27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes
categorias:
Categoria     Idade
Infantil A 	5 a 7
Infantil B 	8 a 10
Juvenil A  	11 a 13
Juvenil B  	14 a 17
Sênior    	maiores de 18 anos*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // define as variaveis e pede ao usuario para digitar uma idade 
    int Idade;
    printf("Digite a idade, entre 5 e 100 anos, do nadador: ");
    scanf("%d", &Idade);

    // condicionais para classificar o nadador de acordo com a idade do mesmo

    if ((Idade >= 5) && (Idade <= 7))
    {
        printf("Nadador eh da categoria Infantil A");
    }
    else if((Idade >= 8) && (Idade <= 10)){
        printf("Nadador eh da categoria Infantil B");
    }
    else if((Idade >= 11) && (Idade <= 13)){
        printf("Nadador eh da categoria Juvenil A");
    }
    else if((Idade >= 14) && (Idade <= 17)){
        printf("Nadador eh da categoria Juvenil B");
    }
    else if((Idade >= 18) && (Idade <= 100)){
        printf("Nadador eh da categoria Senior");
    } else{
        printf("Digite uma idade valida!");
    }
    return 0;
}