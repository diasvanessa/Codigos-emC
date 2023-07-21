/*23.Escreva um programa que leia a profissão e o tempo de serviço (em
anos) de cada um dos 5 funcionários de uma empresa e armazene-os no
arquivo “emp.txt”. Cada linha do arquivo corresponde aos dados de um
funcionário. Utilize o comando fprintf(). Em seguida, leia o mesmo
arquivo utilizando fscanf(). Apresente os dados na tela.*/

#include <stdio.h>

#define NUM_FUNCIONARIOS 5

typedef struct {
    char profissao[50];
    int tempoServico;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario funcionarios[NUM_FUNCIONARIOS];

    // Leitura dos dados dos funcionários
    printf("Informe os dados dos funcionários:\n");
    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
        printf("Funcionário %d:\n", i + 1);
        printf("Profissão: ");
        scanf("%s", funcionarios[i].profissao);
        printf("Tempo de serviço (em anos): ");
        scanf("%d", &funcionarios[i].tempoServico);
    }

    // Escrita dos dados no arquivo
    arquivo = fopen("emp.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
        fprintf(arquivo, "%s %d\n", funcionarios[i].profissao, funcionarios[i].tempoServico);
    }

    fclose(arquivo);

    // Leitura dos dados do arquivo e exibição na tela
    arquivo = fopen("emp.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("\nDados dos funcionários:\n");
    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
        fscanf(arquivo, "%s %d", funcionarios[i].profissao, &funcionarios[i].tempoServico);
        printf("Funcionário %d:\n", i + 1);
        printf("Profissão: %s\n", funcionarios[i].profissao);
        printf("Tempo de serviço: %d anos\n", funcionarios[i].tempoServico);
    }

    fclose(arquivo);

    return 0;
}
