/*14. Faça uma função que receba a distância em Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela abaixo:
CONSUMO (Km/l) MENSAGEM
menor que 8 Venda o carro!
entre 8 e 14 Econômico!
maior que 14 Super econômico!*/

#include <stdio.h>

void Consumo_Carro(int Dist_Km, int Litros_Gasolina);

int main(){
    int DistKm_Usuario, LitrosGas_Usuario;
    printf("Digite a distancia em km do percurso: ");
    scanf("%d", &DistKm_Usuario);
    printf("Digite a quantidade de litros de gasolina consumidos: ");
    scanf("%d", &LitrosGas_Usuario);
    Consumo_Carro(DistKm_Usuario, LitrosGas_Usuario);
    return 0;
}

void Consumo_Carro(int Dist_Km, int Litros_Gasolina){
    int Consumo;
    Consumo = Dist_Km / Litros_Gasolina;
    if (Consumo < 8)
    {
        printf("Venda o carro!\n");
    }
    else if (Consumo >= 8 && Consumo < 14)
    {
        printf("Carro economico!\n");
    }
    else{
        printf("Carro super economico!");
    }
}