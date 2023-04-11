/*18. Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
ano anterior. Faça programa que determine o salário atual do funcionário.*/

#include <stdio.h>

int main(){
    int ano, ano_atual = 2023;
    float aumento = 0.015;
    double salario = 2000;

    // 1996 ate ano atual
    for (ano = 1996; ano <= ano_atual; ano++)
    { 
        salario += salario * aumento;
        aumento = 2*aumento;
    }
    printf("O salario do funcionario no ano %d corresponde a: R$%lf\n", ano_atual, salario);
    return 0;
}