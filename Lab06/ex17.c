/*17. Faça um programa que controla o consumo de energia dos eletrodomésticos de sua casa e:
 Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em
kW) e tempo ativo por dia (real, em horas);
 Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo.
Apresente este último dado em porcentagem.
*/

#include <stdio.h>

struct eletrodomesticos{
    char nome[15];
    int horas;
    float potencia;
};

typedef struct eletrodomesticos eletrodomesticos;

int main(){
    eletrodomesticos a[5];
    int i, tempo_uso;
    float consumo_total = 0, consumo[5], consumo_relativo[5];

    for (i = 0; i < 5; i++)
    {
        printf("Dados do eletrodomestico %d:\n", i+1);
        printf("Nome: ");
        fgets(a[i].nome, 15, stdin);
        fflush(stdin);
        printf("Potencia em kW: ");
        scanf("%f", &a[i].potencia);
        fflush(stdin);
        printf("Horas em uso por dia: ");
        scanf("%d", &a[i].horas);
        fflush(stdin);
        printf("\n");

        consumo[i] = a[i].potencia * a[i].horas;
        consumo_total += consumo[i];
    }

    printf("Digite o tempo em dias que os eletrodomesticos foram utilizados: ");
    scanf("%d", &tempo_uso);
    
    consumo_total = consumo_total * tempo_uso;
    printf("Consumo total nessa casa = %.2fkW\n", consumo_total);
    printf("\n");

    printf("Consumo relativo para cada eletrodomestico: \n");
    for (i = 0; i < 5; i++)
    {
        consumo_relativo[i] = consumo[i] / consumo_total;
        consumo_relativo[i] = consumo_relativo[i] * 100.0;
        printf("Eletrodomestico %d: \n", i+1);
        printf("Nome: %s", a[i].nome);
        printf("Consumo relativo em porcentagem: %f%%\n", consumo_relativo[i]);
        printf("\n");
    }
    return 0;
}