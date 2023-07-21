/*22.Faça um programa que recebe como entrada o nome de um arquivo de
entrada e o nome de um arquivo de saída. O arquivo de entrada contém
o nome de um aluno ocupando 40 caracteres e três inteiros que indicam
suas notas. O programa deverá ler o arquivo de entrada e gerar um
arquivo de saída onde aparece o nome do aluno e as suas notas em
ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo a estrutura para armazenar as informações do aluno
typedef struct {
    char nome[41];
    int notas[3];
} Aluno;

// Função de comparação para usar com a função qsort
int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    // Abrindo o arquivo de entrada para leitura
    FILE *arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Abrindo o arquivo de saída para escrita
    FILE *arquivoSaida = fopen(nomeArquivoSaida, "w");
    if (arquivoSaida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    Aluno aluno;
    while (fscanf(arquivoEntrada, "%40s %d %d %d", aluno.nome, &aluno.notas[0], &aluno.notas[1], &aluno.notas[2]) == 4) {
        // Ordenando as notas em ordem crescente
        qsort(aluno.notas, 3, sizeof(int), comparar);

        // Escrevendo no arquivo de saída
        fprintf(arquivoSaida, "%s: %d %d %d\n", aluno.nome, aluno.notas[0], aluno.notas[1], aluno.notas[2]);
    }

    // Fechando os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída gerado com sucesso.\n");

    return 0;
}
