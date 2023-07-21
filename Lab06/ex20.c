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

int AnoBissexto(int ano);
int Numero_Mes(int mes, int ano);
int dias_decorridos(dma data1, dma data2);

int main(){
    dma a, b;
    int dias_Entredatas;

    printf("Digite a primeira data no formato dd/mm/aaaa:\n");
    scanf("%d/%d/%d", &a.dia, &a.mes, &a.ano);
    printf("Digite a segunda data no formato dd/mm/aaaa: \n");
    scanf("%d/%d/%d", &b.dia, &b.mes, &b.ano);
    
    dias_Entredatas = (dias_decorridos(a, b));
    printf("Dias decorridos entre as datas: %d", dias_Entredatas);
    return 0;
}

// funcao para saber se ano eh bissexto ou nao
int AnoBissexto(int ano){
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        return 1;
    else
        return 0;
}

// funcao para saber quantos dias ha no mes 
int Numero_Mes(int mes, int ano){
    int dias;
    switch (mes)
    {
    case 2:
        if (AnoBissexto(ano)){
            dias = 29;
        }
        else{
            dias = 28;
        }
        break;
    case 4:
    case 6: 
    case 9:
    case 11:
        dias = 30;
        break;
    default:
        dias = 31;
        break;
    }
    return dias;
}

// funcao que realizara o calculo dos dias corridos
int dias_decorridos(dma data1, dma data2){
    int dias_decorridos = 0, i, dias, dias_decorridos2 = 0;
    dma aux;

    // caso o usuario digitou a data maior primeiro, troca a maior pela menor para facilitar e a proxima condicao ser valida
    if (data1.ano > data2.ano)
    {
        aux = data1;
        data1 = data2;
        data2 = aux;
    }

    // faz os calculos dos dias corridos para anos diferentes e a primeira data menor que a segunda
    if (data1.ano < data2.ano)
        {
            // caso a diferenca entre as datas seja de apenas um ano
            if (data2.ano - data1.ano == 1)
            {
                // calcula quantos dias se passaram desde 1/janeiro ate a primeira data 
                for (i = 1; i < data1.mes; i++){
                    dias = Numero_Mes(i, data1.ano);
                    dias_decorridos += dias;
                }
                for (i = 1; i <= data1.dia; i++)
                {
                    dias_decorridos += 1;
                }
                
                // faz a subtracao do total de dias no ano menos o que ja passou
                dias_decorridos = 365 - dias_decorridos;
                
                // calcula o resto dos dias decorridos a partir do valor anterior ate chegar na segunda data que o usuario digitou
                for (i = 1; i < data2.mes; i++)
                {
                    dias = Numero_Mes(i, data2.ano);
                    dias_decorridos += dias;
                }
                for (i = 1; i <= data2.dia; i++)
                {
                    dias_decorridos += 1;
                }
            }

            // calculos caso seja mais de um ano de diferenca entre as datas
            else if (data2.ano - data1.ano > 1)
            {
                for (i = 1; i < data1.mes; i++){
                    dias = Numero_Mes(i, data1.ano);
                    dias_decorridos += dias;
                }
                for (i = 1; i <= data1.dia; i++)
                {
                    dias_decorridos += 1;
                }
                dias_decorridos = 365 - dias_decorridos;

                for (i = 1; i < data2.mes; i++)
                {
                    dias = Numero_Mes(i, data2.ano);
                    dias_decorridos += dias;
                }
                for (i = 1; i <= data2.dia; i++)
                {
                    dias_decorridos += 1;
                }
                
                // somam os anos entre as datas digitadas pelo usuario
                for (i = data1.ano; i < data2.ano - data1.ano; i++)
                {
                    if (AnoBissexto(i))
                    {
                        dias_decorridos += 366;
                    }
                    else{
                        dias_decorridos += 365;
                    }
                }  
            }
            return dias_decorridos;
        }

    // caso se trate do caso das datas serem no mesmo ano
    else if (data1.ano == data2.ano)
    {
        // caso o usuario tenha colocado a maior data primeiro
        if (data1.mes > data2.mes)
        {
            for (i = 1; i < data1.mes; i++){
                dias = Numero_Mes(i, data1.ano);
                dias_decorridos += dias;
            }
            for (i = 1; i <= data1.dia; i++)
            {
                dias_decorridos += 1;
            }
            for (i = 1; i < data2.mes; i++)
            {
                dias = Numero_Mes(i, data2.ano);
                dias_decorridos2 += dias;
            }
            for (i = 1; i <= data2.dia; i++)
            {
                dias_decorridos2 += 1;
            }
            dias_decorridos = dias_decorridos - dias_decorridos2;
        }
        
        // usuario digitou a menor data primeiro ou as datas sao em um mesmo mes 
        else if (data1.mes <= data2.mes)
        {
            for (i = 1; i < data1.mes; i++){
                dias = Numero_Mes(i, data1.ano);
                dias_decorridos += dias;
            }
            for (i = 1; i <= data1.dia; i++)
            {
                dias_decorridos += 1;
            }
            for (i = 1; i < data2.mes; i++)
            {
                dias = Numero_Mes(i, data2.ano);
                dias_decorridos2 += dias;
            }
            for (i = 1; i <= data2.dia; i++)
            {
                dias_decorridos2 += 1;
            }
            dias_decorridos = dias_decorridos2 - dias_decorridos;
        }
        return dias_decorridos;
    }
}