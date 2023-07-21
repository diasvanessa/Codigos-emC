/*16. Faça um programa que seja uma agenda de compromissos e:
 Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e
data. A data deve ser outra estrutura de dados contendo dia, mês e ano;
 Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o
procedimento até ler M = 0.*/

#include <stdio.h>

struct data{
    int dia;
    int mes;
    int ano;
};

typedef struct data data;

struct compromisso{
    data data_compromisso;
    char descricao[60];
};

typedef struct compromisso compromisso;

int main(){
    compromisso a[5];
    int i, M, N;

    for (i = 0; i < 5; i++)
    {
        printf("Dados do %d compromisso: \n", i+1);
        printf("Digite a data do compromisso no formato dd/mm/aaaa: ");
        scanf("%d/%d/%d", &a[i].data_compromisso.dia, &a[i].data_compromisso.mes, &a[i].data_compromisso.ano);
        fflush(stdin);
        printf("Digite a descricao do compromisso: ");
        fgets(a[i].descricao, 60, stdin);
        fflush(stdin);
        printf("\n");
    }
    
    do
    {
        printf("Digite o mes do compromisso: ");
        scanf("%d", &M);
        fflush(stdin);
        printf("Digite o ano do compromisso: ");
        scanf("%d", &N);
        fflush(stdin);
        printf("\n");

        if (M != 0)
        {
            printf("Compromissos marcados para %d/%d:\n", M, N);
            for (i = 0; i < 5; i++)
            {
                if (a[i].data_compromisso.mes == M && a[i].data_compromisso.ano == N)
                {
                    printf("Descricao do compromisso: %s", a[i].descricao);
                    printf("Na data: %d/%d/%d\n", a[i].data_compromisso.dia, a[i].data_compromisso.mes, a[i].data_compromisso.ano);
                    printf("\n");
                }
                else{
                    printf("Nenhum compromisso marcado para esse mes do ano!\n");
                }
            }
        }
        
    } while (M != 0);
    return 0;
}
