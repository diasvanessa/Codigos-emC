/*3. Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a
informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.
*/

#include <stdio.h>
#include <string.h>

struct Aluno{
    char nome[100];
    char curso[100];
    char nmatricula[100];
};

typedef struct Aluno Aluno;

int main(){
    Aluno alunos[5];
    int i, count = 1;

    // recebe os dados
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno %d: ", count);
        fgets(alunos[i].nome, 100, stdin);
        fflush(stdin);
        printf("Digite o curso do aluno %d: ", count);
        fgets (alunos[i].curso, 100, stdin);
        fflush(stdin);
        printf("Digite o numero de matricula do aluno %d: ", count);
        fgets(alunos[i].nmatricula, 100, stdin);
        fflush(stdin);
        count++;
    }
    
    printf("\n");
    count = 1;

    // imprime os dados
    for (i = 0; i < 5; i++)
    {
        printf("Nome do aluno %d: %s", count, alunos[i].nome);
        printf("Curso do aluno %d: %s", count, alunos[i].curso);
        printf("Numero de matricula do aluno %d: %s\n", count, alunos[i].nmatricula);
        printf("\n");
        count++;
    }
    
    return 0;
}



