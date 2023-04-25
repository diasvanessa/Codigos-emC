/* 2. Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no
formato textual por extenso. Ex.: Data: 18/11/2022, Imprimir: 18 de novembro de 2022.*/

#include <stdio.h>

void mes_extenso(int dia_2, int mes_2, int ano_2);

int main(){
    int dia_1, mes_1, ano_1;
    printf("Digite o dia atual do mes: ");
    scanf("%d", &dia_1);
    printf("Digite o mes atual: ");
    scanf("%d", &mes_1);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_1);
    mes_extenso(dia_1, mes_1, ano_1);
    return 0;
}

void mes_extenso(int dia_2, int mes_2, int ano_2){
    switch (mes_2)
    {
        case 1: printf("%d de janeiro de %d", dia_2, ano_2); break;
        case 2: printf("%d de fevereiro de %d", dia_2, ano_2); break;
        case 3: printf("%d de marco de %d", dia_2, ano_2); break;
        case 4: printf("%d de abril de %d", dia_2, ano_2); break;
        case 5: printf("%d de maio de %d", dia_2, ano_2); break;
        case 6: printf("%d de junho de %d", dia_2, ano_2); break;
        case 7: printf("%d de julho de %d", dia_2, ano_2); break;
        case 8: printf("%d de agosto de %d", dia_2, ano_2); break;
        case 9: printf("%d de setembro de %d", dia_2, ano_2); break;
        case 10: printf("%d de outubro de %d", dia_2, ano_2); break;
        case 11: printf("%d de novembro de %d", dia_2, ano_2); break;
        case 12: printf("%d de dezembro de %d", dia_2, ano_2); break;
    }
}