/*26. Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um
percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
CONSUMO    	(Km/l)       MENSAGEM
menor que     8        Venda o carro!
entre      8 e  14      Econômico!
maior que     14      Super econômico!
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // le distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso

    float Distancia, Quantidade_Litros, Consumo_Kml;
    printf("Digite a distancia em km do percurso: ");
    scanf("%f", &Distancia);
    printf("Digite a quantidade de litros consumidos pelo carro nesse percurso: ");
    scanf("%f", &Quantidade_Litros);

    // calculo do consumo em km/l
    Consumo_Kml = Distancia / Quantidade_Litros;

    /* escreve a mensagem de acordo com o calculo do consumo em km/l, quanto menos km roda na mesma 
    quantidade de litros, significa que ele consome mais. */

    if (Consumo_Kml < 8)
    {
        printf("Venda o carro!");
    }
    else if((Consumo_Kml > 8) && (Consumo_Kml < 14)){
        printf("Economico!");
    }
    else if(Consumo_Kml > 14){
        printf("Super economico!");
    }
    else{
        printf("Digite valores validos!");
    }
    return 0; 
}