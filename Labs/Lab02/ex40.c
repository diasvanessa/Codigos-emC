/*40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica,
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.

CUSTO DE FÁBRICA 					% DO DISTRIBUIDOR 		% DOS IMPOSTOS
até R$12.000,00 						5 					isento
entre R$12.000,00 e R$25.000,00 		10 					15
acima de R$25.000,00 					15 					20

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // define a variavel do custo de fabrica e atribui a ela um valor digitado pelo usuario
    float Custo_Fabrica, Custo_Final;
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &Custo_Fabrica);

    // Condicionais para determinar o custo final para o consumidor
    // Custo de fabrica menor que 12000, imposto do distribuidor eh 5% e isento de impostos
    if((Custo_Fabrica > 0) && (Custo_Fabrica < 12000)){
        Custo_Final = Custo_Fabrica + (Custo_Fabrica * 0.05);
        printf("Custo final do carro para o consumidor eh de: R$%.2f\n", Custo_Final);
    }

    /*Custo de fabrica maior igual que 12000 e menor que 25000, taxa  de 12% do distribuidor
    e 15% dos impostos*/
    else if ((Custo_Fabrica >= 12000) && (Custo_Fabrica < 25000))
    {
        Custo_Final = Custo_Fabrica + (Custo_Fabrica * 0.12) + (Custo_Fabrica * 0.15);
        printf("Custo final do carro para o consumidor eh de: R$%.2f\n", Custo_Final);
    }
    
    /*Custo de fabrica maior igual que 25000, taxa do distribuidor de 15% e 20% dos impostos*/
    else if ((Custo_Fabrica > 25000))
    {
        Custo_Final = Custo_Fabrica + (Custo_Fabrica * 0.15) + (Custo_Fabrica * 0.20);
        printf("Custo final do carro para o consumidor eh de: R$%.2f\n", Custo_Final);
    }
    else{
        printf("Digite um valor valido!\n");
    }
    return 0;
}