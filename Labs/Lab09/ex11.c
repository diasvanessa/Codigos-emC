/*11.Crie um programa que declare uma estrutura (registro) para o cadastro
de alunos.
a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome
(apenas um) e ano de nascimento;
b) Ao início do programa, o usuário deverá informar o número de alunos
que serão armazenados;
c) O programa deverá alocar dinamicamente a quantidade necessária
de memória para armazenar os registros dos alunos;
d) O programa deverá pedir ao usuário que entre com as informações
dos alunos.
e) Ao final, mostrar os dados armazenados e liberar a memória alocada.
*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char sobrenome[20];
    char matricula[20];
    int ano_nasc;
};

typedef struct Aluno Aluno;

int main(){
    int num,i;
    Aluno *p;

    printf("Digite o numero de alunos: ");
    scanf("%d", &num);

    p = (Aluno*)malloc(num*(sizeof(Aluno)));

    for (i = 0; i < num; i++)
    {
        printf("Dados do %d aluno: \n", i+1);
        fflush(stdin);
        printf("Sobrenome: " );
        fgets(p[i].sobrenome, 20, stdin);
        fflush(stdin);
        printf("Matricula: ");
        fgets(p[i].matricula, 20, stdin);
        fflush(stdin);
        printf("Ano de nascimento: ");
        scanf("%d", &p[i].ano_nasc);
        fflush(stdin);
        printf("\n");
    }
    
    printf("Dados dos alunos: \n");
    for (i = 0; i < num; i++)
    {
        printf("Aluno %d: \n", i+1);
        printf("Sobrenome: %s", p[i].sobrenome);
        printf("Matricula: %s", p[i].matricula);
        printf("Ano de nascimento: %d\n", p[i].ano_nasc);
        printf("\n");
    }
    
    free(p);
    return 0;
}