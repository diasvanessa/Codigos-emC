/*1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: composto de uma data, horário e texto que descreve o compromisso.*/

#include <stdio.h>

// estrutura para guardar horario
struct horario{
    int hora;
    int min;
    int seg;
};

typedef struct horario horario;

// estrutura para data
struct data{
    int dia;
    int mes;
    int ano;
};

typedef struct data data;

// estrutura com o compromisso
struct compromisso{
    char descricao[200];
    horario hor_compromisso;
    data data_compromisso;

};

typedef struct compromisso compromisso;

// programa principal
int main(){
    compromisso compromissos[2];
    int i;
    
    // leitura dos compromissos
    for (i = 0; i < 2; i++)
    {
        printf("Compromisso %d: \n", i+1);
        printf("Digite o horario no formato hh:min:seg: ");
        scanf("%d:%d:%d", &compromissos[i].hor_compromisso.hora, &compromissos[i].hor_compromisso.min, &compromissos[i].hor_compromisso.seg);
        fflush(stdin);
        printf("Digite a data no formato dd/mm/aaaa: ");
        scanf("%d/%d/%d", &compromissos[i].data_compromisso.dia, &compromissos[i].data_compromisso.mes, &compromissos[i].data_compromisso.ano);
        fflush(stdin);
        printf("Digite a descricao: ");
        fgets(compromissos[i].descricao, 200, stdin);
        fflush(stdin);
    }
    
    // impressao dos compromissos
    printf("Compromissos: \n");
    for (i = 0; i < 2; i++)
    {
        printf("Descricao: %s", compromissos[i].descricao);
        printf("Data: %02d/%02d/%02d\n", compromissos[i].data_compromisso.dia,compromissos[i].data_compromisso.mes, compromissos[i].data_compromisso.ano);
        printf("Horario: %02d:%02d:%02d\n", compromissos[i].hor_compromisso.hora, compromissos[i].hor_compromisso.min, compromissos[i].hor_compromisso.seg);
        printf("\n");
    }
    return 0;
}