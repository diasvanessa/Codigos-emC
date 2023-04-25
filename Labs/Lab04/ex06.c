/*6. Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
minutos e segundos, e os converta em segundos*/

#include <stdio.h>

int total_segundos2(int seg2, int min2, int horas2);

int main(){
    int seg1, min1, horas1, total_segundos1;
    printf("Digite os segundos:");
    scanf("%d", &seg1);
    printf("Digite os minutos:");
    scanf("%d", &min1);
    printf("Digite as horas:");
    scanf("%d", &horas1);
    total_segundos1 = total_segundos2(seg1, min1, horas1);
    printf("O total de segundos em %d:%d:%d eh: %d", horas1, min1, seg1, total_segundos1);
    return 0;
}

int total_segundos2(int seg2, int min2, int horas2)
{
    min2 = min2 * 60;
    horas2 = horas2 * 3600;
    return min2 + horas2 + seg2;
}