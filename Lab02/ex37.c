/*37. As tarifas de certo parque de estacionamento são as seguintes:

-1ª e 2ª hora - R$1,00 cada;
-3ª e 4ª hora - R$1,40 cada;
-5ª hora e seguintes - R$2,00 cada

O número de hrs a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem
estacionar durante 61 min pagará por duas hrs, que é o mesmo que pagaria se tivesse
permanecido 120 min. Os momentos de chegada ao parque e partida deste são
apresentados na forma de pares de inteiros, representando hrs e min. Por exemplo, o par
12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo
teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo
estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24
hrs. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação
de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // variaveis para guardar o tempo de chegada e saida e para serem feitos os calculos 
    int Hrs_Chegada, Min_Chegada, Hrs_Saida, Min_Saida, Tempo_Chegada, Tempo_Saida, Tempo_Total;

    // variaveis que serao utilizados no laço
    float Preco = 4.80;
    int contador = 240;

    // pede ao usuario os horarios de chegada e saida
    printf("Digite a hora e min de chegada, respectivamente:\n");
    scanf("%d", &Hrs_Chegada);
    scanf("%d", &Min_Chegada);
    printf("Digite a hora e min de saida, respectivamente:\n");
    scanf("%d", &Hrs_Saida);
    scanf("%d", &Min_Saida);

    // calculo para converter as horas de chegada em saida em minutos
    Tempo_Chegada = (Hrs_Chegada * 60) + Min_Chegada;
    Tempo_Saida = (Hrs_Saida * 60) + Min_Saida;

    // caso o tempo de chegada for maior que o de saida, ou seja, a partida foi no dia seguinte

    if(Tempo_Chegada > Tempo_Saida){

        /* calculo dos minutos quando o tempo de chegada eh maior que o de saida, precisa ser feito um
        calculo diferente pois quando isso ocorre, a subtracao dos minutos ia dar um numero negativo,
        o que nao faria sentido. o calculo eh feito subtraindo os minutos correspondentes a aquela hora,
        por exemplo 23:30 eh 1410 minutos, dos minutos que tem em um dia, que sao 24 * 60, dessa forma
        o calculo irá da certo, o calculo ficara como se a pessoa tivesse estacionado as 00:00, mas
        os minutos que ele ja havia estacionado estarão sendo considerados no calculo.*/
        Tempo_Total = (24 * 60 - Tempo_Chegada) + Tempo_Saida;
    } 
        // calculo quando o tempo de saida eh maior que o da chegada
    else {
        Tempo_Total = Tempo_Saida - Tempo_Chegada;
    }

    /* condicionais para imprimir o valor total do estacionamento baseado nas horas que a pessoa
    ficou no estacionamento, lembrando que por exemplo, se ficou 61 minutos, arredonda como se 
    tivesse ficado 120 minutos; */

    // caso a pessoa tenha ficado uma hora 
    if(Tempo_Total <= 60){
        printf("A taxa de estacionamento eh R$1.00");
    } 
    // caso a pessoa tenha ficado mais de uma hora ate duas horas
    else if ((Tempo_Total > 60) && (Tempo_Total <= 120))
    {
        printf("A taxa de estacionamento eh R$2.00");
    }
    // caso a pessoa tenha ficado mais de 2 horas ate 3 horas 
    else if ((Tempo_Total > 120) && (Tempo_Total <= 180))
    {
        printf("A taxa de estacionamento eh R$3.40");
    }
    // caso a pessoa tenha ficado mais de 3 horas ate 4 horas 
    else if ((Tempo_Total > 180) && (Tempo_Total <= 240))
    {
        printf("A taxa de estacionamento eh R$4.80");
    }
    else if (Tempo_Total > 240)
    {
        /* loop feito para adicionar 2.00 para cada hora que passar depois de 4 horas,
        o contador adiciona 2.00 ao preco e 60 minutos ao contador
        ate que as os minutos 240 se igualem ao tempo total que ficou no estacionamento  */

        while (contador < Tempo_Total )
        {
            contador += 60;
            Preco += 2.00;
        }
        printf("A taxa de estacionamento eh: R$%.2f", Preco);
    }
    else 
    {
        printf("Digite uma hora valida!\n");
    }
    return 0;
}

