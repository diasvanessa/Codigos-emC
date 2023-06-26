#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*Faça um programa que receba do usuário um arquivo que contenha o
nome e a nota de diversos alunos (da seguinte forma: NOME: JOÃO
NOTA: 8), um aluno por linha. Mostre na tela o nome e a nota do aluno
que possui a maior nota*/

int main(){
    FILE *file;
    char fileName[100];
    char tempName[100], highestName[100];
    float tempNote, highestNote;

    printf("Digite o nome do arquivo com as notas dos alunos: ");
    fgets(fileName, 100, stdin);
    setbuf(stdin, NULL);
    fileName[strlen(fileName)-1] = '\0';
    strcat(fileName,".txt");

    if((file = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao encontrado\n"); 
        exit(1);
    }
    
    fscanf(file, "NOME: %[^:]: %f\n", highestName, &highestNote);
    while(!feof(file)){
        fscanf(file, "NOME: %[^:]: %f\n", tempName, &tempNote);
        if(tempNote > highestNote){
            tempName[strlen(tempName) - 5] = '\0';
            strcpy(highestName, tempName);
            highestNote = tempNote;
        }
    }

    printf("%s obteve a nota mais alta, com %.2f pontos\n", highestName, highestNote);
    fclose(file);
    return 1;
}