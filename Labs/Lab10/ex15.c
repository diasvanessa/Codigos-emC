#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*Faça um programa que receba como entrada o ano corrente e o nome de
dois arquivos: um de entrada e outro de saída. Cada linha do arquivo de
entrada contém o nome de uma pessoa (ocupando 40 caracteres) e o
seu ano de nascimento. O programa deverá ler o arquivo de entrada e
gerar um arquivo de saída onde aparece o nome da pessoa seguida por
uma string que representa a sua idade.
- Se a idade for menor do que 18 anos, escreva “menor de idade”;
- Se a idade for maior do que 18 anos, escreva “maior de idade”;
- Se a idade for igual a 18 anos, escreva “entrando na maior idade”.*/

int verificaData(int dd, int mm, int aa);

int main(){
    FILE *fileDatas, *fileIdades;
    char fileName[100], nome[100];
    int diaAtual, mesAtual, anoAtual;
    int diaFile, mesFile, anoFile;
    int idade;

    printf("Digite o nome do arquivo com os nomes e datas: ");
    fgets(fileName, 100, stdin);
    setbuf(stdin, NULL);
    fileName[strlen(fileName)-1] = '\0';
    strcat(fileName,".txt");
    
    if((fileDatas = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao existe\n"); 
        exit(1);
    }

    if((fileIdades = fopen("idades.txt","a")) == NULL){ 
        printf("Arquivo nao pode ser criado\n"); 
        exit(1);
    }

    printf("Insira a data de hoje (dd/mm/dddd): ");
    scanf("%d/%d/%d", &diaAtual, &mesAtual, &anoAtual);
    if(!verificaData(diaAtual, mesAtual, anoAtual)){
        printf("Data atual invalida\n");
        exit(1);
    }

    while(!feof(fileDatas)){
        idade = 0;
        fscanf(fileDatas, "%[^,], %2d/%2d/%4d\n", nome, &diaFile, &mesFile, &anoFile);
        if(anoFile > anoAtual || (anoFile == anoAtual && mesFile > mesAtual) || (anoFile == anoAtual && mesFile == mesAtual && diaFile > diaAtual) || !verificaData(diaFile, mesFile, anoAtual)){
            printf("Erro\n");
            printf("%s com data invalida\n",nome);
            exit(1);
        }
        else if(anoAtual > anoFile){
            idade += anoAtual - anoFile - 1;
            anoFile += idade + 1;
        }
        if(mesAtual > mesFile && anoFile == anoAtual && idade != 0){
            idade++;
        }else if(mesAtual == mesFile && anoFile == anoAtual && idade != 0){
            if(diaAtual >= diaFile){
                idade++;
            }
        }
        fprintf(fileIdades, "%s, %d",nome, idade);
        if(idade > 18) fprintf(fileIdades, " - maior de idade\n");
        else if(idade < 18) fprintf(fileIdades, " - menor de idade\n");
        else fprintf(fileIdades, " - entrando na maior idade\n");
    }
    
    fclose(fileIdades);
    fclose(fileDatas);
    printf("Arquivo de idades criado com sucesso!\n");
    return 0;
}

int verificaData(int dd, int mm, int aa){
    int bissexto = 0;

    if(aa%400 == 0 || (aa%4 == 0 && aa%100 != 0)) bissexto = 1;
    if(mm < 1 || mm > 12) return 0;
    else if(dd < 1 || dd > 31) return 0;
    else if(mm == 2 && bissexto == 1 && dd > 29) return 0;
    else if(mm == 2 && bissexto == 0 && dd > 28) return 0;
    else if((mm == 4 || mm == 6 || mm == 9 || mm == 11 ) && dd > 30) return 0;

    return 1;
}