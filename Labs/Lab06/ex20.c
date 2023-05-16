/*20. Escreva um programa que receba dois structs do tipo “dma”, cada um representando uma
data válida, e calcule o número de dias que decorreram entre as duas datas.
struct dma {
 int dia;
 int mes;
 int ano;
};*/

#include <stdio.h>

struct dma{
    int dia;
    int mes;
    int ano;
};

typedef struct dma dma;

int main(){
    dma a[2];
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("Digite a %d data no formato dd/mm/aaaa: ", i+1);
        scanf("%d/%d/%d", &a[i].dia, &a[i].mes, &a[i].ano);
    }
    

    for (i = 0; i < 2; i++)
    {
        
    }
    

}