/*9. Faça um programa que preencha uma matriz de string com os modelos de cinco carros
(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo
desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível.
Calcule e mostre:
a) O modelo de carro mais econômico;
b) Quantos litros de combustível cada um dos carros cadastrados consome para
percorrer uma distância de 1.000 quilômetros.*/

#include <stdio.h>
#include <string.h>

int main(){
    char modelos_carros[5][100];
    int consumo[5], i, mais_economico = 0;

    // inicializacao da matriz com os modelos de carro
    printf("Digite os modelos: \n");
    for (i = 0; i < 5; i++)
    {
        printf("- ");
        gets(modelos_carros[i]);
    }
    
    // le os consumos de cada modelo de carro 
    for (i = 0; i < 5; i++)
    {
        printf("Digite o consumo do modelo %s:", modelos_carros[i]);
        scanf("%d", &consumo[i]);
    }

    // guarda o maior valor na variavel 
    for (i = 0; i < 5; i++)
    {
        if (consumo[i] > mais_economico)
        {
            mais_economico = consumo[i];
        }
    }
    
    // verifica qual posicao da matriz de string eh compativel com o maior valor de consumo e imprime
    for (i = 0; i < 5; i++)
    {
        if (consumo[i] == mais_economico)
        {
            printf("O modelo mais economico eh o: %s\n", modelos_carros[i]);
        }
    }

    // imprime quantos litros de combustível cada um dos carros cadastrados consome para
    // percorrer uma distância de 1.000 quilômetros.
    for (i = 0; i < 5; i++)
    {
        printf("O consumo para percorrer 1000km para o modelo %s eh = %dL\n", modelos_carros[i], consumo[i] * 1000);
    }
    return 0;
}