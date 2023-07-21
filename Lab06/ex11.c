/*11. Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final),
armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima para a
aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados
do vetor de reprovados.*/

#include <stdio.h>

struct dados_aluno{
    char nome[50];
    char matricula[50];
    float media_final;
};

typedef struct dados_aluno dados_aluno;

int main(){
    dados_aluno alunos[10];
    dados_aluno aprovados[10];
    dados_aluno reprovados[10];

    int i, j = 0, c = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Dados do %d aluno: \n", i+1);
        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);
        fflush(stdin);
        printf("Matricula:");
        fgets(alunos[i].matricula, 50, stdin);
        fflush(stdin);
        printf("Media final: ");
        scanf("%f", &alunos[i].media_final);
        fflush(stdin);
    }
    
    for (i = 0; i < 10; i++)
    {
        if (alunos[i].media_final >= 5.0)
        {
            aprovados[j] = alunos[i]; 
            j++;
        }
        else{
            reprovados[c] = alunos[i];
            c++;
        }
    }

    printf("APROVADOS: \n");
    for (i = 0; i < j; i++)
    {
        printf("Nome: %s", aprovados[i].nome);
        printf("Matricula: %s", aprovados[i].matricula);
        printf("Media final: %.2f", aprovados[i].media_final);
        printf("\n");
    }
    
    printf("\n");
    printf("REPROVADOS: \n");
    for (i = 0; i < c; i++)
    {
        printf("Nome: %s", reprovados[i].nome);
        printf("Matricula: %s", reprovados[i].matricula);
        printf("Media final: %.2f", reprovados[i].media_final);
        printf("\n");
    }
    
    return 0;
}