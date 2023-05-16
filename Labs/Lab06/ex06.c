/*6. Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até
10 alunos. Após ler todos os dados digitados, e depois de armazena-los em um vetor de
estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais
(use uma média ponderada: Nota1 com peso = 1.0 e Nota2 com peso = 2.0).*/

#include <stdio.h>

struct info{
    char matricula[20];
    char nome[50];
    char cod_disciplina[5];
    int nota1;
    int nota2;
};

typedef struct info info;

int main(){
    info aluno[10];
    int i;
    float media_p[10];
    for (i = 0; i < 10; i++)
    {
        printf("Informacoes do %d aluno: \n", i+1);
        printf("Digite o numero de matricula: ");
        fgets(aluno[i].matricula, 20, stdin);
        fflush(stdin);
        printf("Digite o nome: ");
        fgets(aluno[i].nome, 50, stdin);
        fflush(stdin);
        printf("Digite o codigo da disciplina: ");
        fgets(aluno[i].cod_disciplina, 5, stdin);
        fflush(stdin);
        printf("Digite a nota 1:");
        scanf("%d", &aluno[i].nota1);
        fflush(stdin);
        printf("Digite a nota 2:");
        scanf("%d", &aluno[i].nota2);
        fflush(stdin);
        printf("\n");
    }
    
    for (i = 0; i < 10; i++)
    {
        media_p[i] = ((aluno[i].nota1*1) + (aluno[i].nota2*2)) / 3;
        printf("Aluno: %s", aluno[i].nome);
        printf("Media final = %2f\n", media_p[i]);
    }
    return 0;
}