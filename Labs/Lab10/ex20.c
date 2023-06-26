#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*Crie um programa que receba como entrada o número de alunos de uma
disciplina. Aloque dinamicamente dois vetores para armazenar as
informações a respeito desses alunos. O primeiro vetor contém o nome
dos alunos e o segundo contém suas notas finais. Crie um arquivo que
armazene, a cada linha, o nome do aluno e sua nota final. Use nomes
com no máximo 40 caracteres. Se o nome não contém 40 caracteres,
complete com espaço em branco.*/

int main(){
    FILE *fileOutput;
    int n, len, i, j;
    char **nome;
    float *nota;

    if((fileOutput = fopen("notas.txt","a")) == NULL){ 
        printf("Arquivo nao pode ser criado\n"); 
        exit(1);
    }

    printf("Insira a quantidade de alunos a armazenar: ");
    scanf("%d",&n);
    
    //aloca vetor de nomes
    if((nome = (char**)malloc(n*sizeof(char*))) == NULL){
        printf("Erro de alocacao de memoria\n");
        exit(1);
    }for(i=0; i<n; i++){
        if((nome[i] = (char*)malloc(40*sizeof(char))) == NULL){
            printf("Erro de alocacao de memoria\n");
            exit(1);
        }
    }
    //aloca vetor de notas
    if((nota = (float*)malloc(n*sizeof(float))) == NULL){
        printf("Erro de alocacao de memoria\n");
        exit(1);
    }

    //lendo alunos
    for(i = 0; i < n; i++){
        printf("Insira o nome do aluno %d: ", i+1);
        setbuf(stdin, NULL);
        fgets(nome[i], 40, stdin);
        nome[i][strlen(nome[i])-1] = '\0';

        printf("Insira a nota do aluno %d: ", i+1);
        scanf("%f",&nota[i]);
    }

    //inserindo nomes e notas no arquivo
    for(i = 0; i < n; i++){
        fprintf(fileOutput, "NOME: ");
        len = strlen(nome[i]);
        for(j = 0; j < len; j++){
            fputc(nome[i][j], fileOutput);
        }for(; j < 39; j++){
            fputc(' ', fileOutput);
        }
        fprintf(fileOutput, "NOTA: %.2f\n", nota[i]);
    }

    printf("Nomes e notas adicionadas ao arquivo notas.txt!\n");
    fclose(fileOutput);
    return 1;
}