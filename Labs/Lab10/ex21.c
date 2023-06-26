/*21.Crie um programa que receba como entrada o número de alunos de uma
disciplina. Aloque dinamicamente em uma estrutura para armazenar as
informações a respeito desses alunos: nome do aluno e sua nota final.
Use nomes com no máximo 40 caracteres. Em seguida, salve os dados
dos alunos em um arquivo binário. Por fim, leia o arquivo e mostre o
nome do aluno com a maior nota.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[41];
    float nota;
} Aluno;

void salvarDados(Aluno* alunos, int quantidade) {
    FILE* arquivo = fopen("dados.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fwrite(&quantidade, sizeof(int), 1, arquivo); // Escreve a quantidade de alunos no arquivo

    for (int i = 0; i < quantidade; i++) {
        fwrite(alunos[i].nome, sizeof(char), 41, arquivo); // Escreve o nome do aluno
        fwrite(&alunos[i].nota, sizeof(float), 1, arquivo); // Escreve a nota final do aluno
    }

    fclose(arquivo);
}

void lerDados() {
    FILE* arquivo = fopen("dados.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int quantidade;
    fread(&quantidade, sizeof(int), 1, arquivo); // Lê a quantidade de alunos do arquivo

    Aluno* alunos = (Aluno*)malloc(quantidade * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memoria.\n");
        fclose(arquivo);
        return;
    }

    for (int i = 0; i < quantidade; i++) {
        fread(alunos[i].nome, sizeof(char), 41, arquivo); // Lê o nome do aluno
        fread(&alunos[i].nota, sizeof(float), 1, arquivo); // Lê a nota final do aluno
    }

    fclose(arquivo);

    // Encontrar o aluno com a maior nota
    float maiorNota = 0.0;
    int indiceMaiorNota = -1;

    for (int i = 0; i < quantidade; i++) {
        if (alunos[i].nota > maiorNota) {
            maiorNota = alunos[i].nota;
            indiceMaiorNota = i;
        }
    }

    if (indiceMaiorNota != -1) {
        printf("Aluno com a maior nota: %s\n", alunos[indiceMaiorNota].nome);
        printf("Nota: %.2f\n", alunos[indiceMaiorNota].nota);
    }

    free(alunos);
}

int main() {
    int quantidade;

    printf("Digite o numero de alunos: ");
    scanf("%d", &quantidade);

    Aluno* alunos = (Aluno*)malloc(quantidade * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome); // Lê o nome do aluno com espaços
        printf("Digite a nota final do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }

    salvarDados(alunos, quantidade);
    free(alunos);

    lerDados();

    return 0;
}
