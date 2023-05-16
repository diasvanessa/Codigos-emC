/*4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com maior nota da primeira prova;
c) Encontre o aluno com maior média geral;
d) Encontre o aluno com menor média geral;
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.*/

#include <stdio.h>
#include <string.h>

struct Aluno{
    char nome[100];
    char matricula[100];
    int notas[3]; 
};

typedef struct Aluno Aluno;

int main(){
    Aluno alunos[5];
    int i, j, nota_p1[5], Soma = 0;
    int maior_nota;
    float media[5], maior_media, menor_media;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno %d: ", i+1);
        fgets(alunos[i].nome, 100, stdin);
        fflush(stdin);
        printf("Digite a matricula do aluno %d: ", i+1);
        fgets(alunos[i].matricula, 100, stdin);
        fflush(stdin);
        
        for (j = 0; j < 3; j++)
        {
            printf("Digite a nota %d do aluno %d: ", j+1, i+1);
            scanf("%d", &alunos[i].notas[j]);
            fflush(stdin);
        }
        printf("\n");
    }
    
    for (i = 0; i < 5; i++)
    {
        nota_p1[i] = alunos[i].notas[0];
        for (j = 0; j < 3; j++)
        {
            Soma+= alunos[i].notas[j];
        }
        media[i] = Soma / 3;
        Soma = 0;
    }

    maior_media = media[0];
    menor_media = media[0];
    maior_nota = nota_p1[0];

    for (i = 1; i < 5; i++)
    {
        if (media[i] > maior_media)
        {
            maior_media = media[i];
        }
        if (media[i] < menor_media)
        {
            menor_media = media[i];
        }
        if (nota_p1 == maior_nota)
        {
            maior_nota = nota_p1[i];
        }
        
    }

    for (i = 0; i < 5; i++)
    {
        if (maior_media == media[i])
        {
            printf("A maior media eh do aluno: %s", alunos[i].nome);
        }
        if (menor_media == media[i])
        {
            printf("A menor media eh do aluno: %s", alunos[i].nome);
        }
        if (maior_nota == alunos[i].notas[1])
        {
            printf("A maior nota na prova 1 foi do aluno: %s", alunos[i].nome);
        }     
    }
    
    printf("Alunos aprovados:\n");
    for (i = 0; i < 5; i++)
    {
        if (media[i] >= 6)
        {
            printf("%s", alunos[i].nome);
        }
        
    }
    printf("Alunos reprovados:\n");
    for (i = 0; i < 5; i++)
    {
        if (media[i] < 6)
        {
            printf("%s", alunos[i].nome);
        }
        
    }
    return 0;
}