/* 26.Crie um programa que declare uma estrutura para o cadastro de alunos.
a) Dever ao ser armazenados, para cada aluno: matrícula, sobrenome
(apenas um), e ano de nascimento;
b) Ao início do programa, o usuário deverá informar o número de alunos
que serão armazenados;
c) O programa deverá alocar dinamicamente a quantidade necessária
de memória para armazenar os registros dos alunos;
d) O programa deverá pedir ao usuário que entre com as informações
dos alunos;
e) Em seguida, essas informações dever ˜ao ser gravadas em um
arquivo;
f) Ao final, mostrar os dados armazenados e liberar a memória alocada.
Ao iniciar o programa, forneça ao usuário uma opção para carregar os
registros do arquivo para a memória do computador alocando
dinamicamente a quantidade de memória necessária.
Dica: para que o usuário possa entrar com novos dados, além dos que
foram obtidos a partir do arquivo, use a função realloc() para realocar a
quantidade de memória usada.
*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int matricula;
    char sobrenome[50];
    int anoNascimento;
};

void gravarAlunos(struct Aluno* alunos, int numAlunos) {
    FILE* arquivo = fopen("alunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return;
    }

    for (int i = 0; i < numAlunos; i++) {
        fprintf(arquivo, "%d %s %d\n", alunos[i].matricula, alunos[i].sobrenome, alunos[i].anoNascimento);
    }

    fclose(arquivo);
    printf("Os dados foram gravados no arquivo.\n");
}

void mostrarAlunos(struct Aluno* alunos, int numAlunos) {
    printf("Dados dos alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        printf("Matricula: %d, Sobrenome: %s, Ano de Nascimento: %d\n",
               alunos[i].matricula, alunos[i].sobrenome, alunos[i].anoNascimento);
    }
}

int main() {
    struct Aluno* alunos = NULL;
    int numAlunos;
    int opcao;

    printf("Informe o numero de alunos que serao armazenados: ");
    scanf("%d", &numAlunos);

    alunos = (struct Aluno*)malloc(numAlunos * sizeof(struct Aluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memoria.");
        return 1;
    }

    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        printf("Ano de Nascimento: ");
        scanf("%d", &alunos[i].anoNascimento);
    }

    gravarAlunos(alunos, numAlunos);

    mostrarAlunos(alunos, numAlunos);

    free(alunos);

    printf("Deseja carregar os registros do arquivo? (1-Sim / 0-Nao): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        FILE* arquivo = fopen("alunos.txt", "r");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo.");
            return 1;
        }

        int numAlunosArquivo = 0;
        while (fscanf(arquivo, "%d %s %d\n", &alunos[numAlunosArquivo].matricula,
                      alunos[numAlunosArquivo].sobrenome, &alunos[numAlunosArquivo].anoNascimento) == 3) {
            numAlunosArquivo++;
            alunos = (struct Aluno*)realloc(alunos, (numAlunosArquivo + numAlunos) * sizeof(struct Aluno));
            if (alunos == NULL) {
                printf("Erro ao alocar memoria.");
                return 1;
            }
        }

        fclose(arquivo);

        numAlunos += numAlunosArquivo;
        mostrarAlunos(alunos, numAlunos);
    }

    free(alunos);

    return 0;
}
