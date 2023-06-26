#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*Faça um programa que leia um arquivo que contenha as dimensões de
uma matriz (linha e coluna), a quantidade de posições que serão
anuladas, e as posições a serem anuladas (linha e coluna). O programa
lê esse arquivo e, em seguida, produz um novo arquivo com a matriz
com as dimensões dadas no arquivo lido, e todas as posições
especificadas no arquivo ZERADAS e o restante recebendo o valor 1.*/

int main(){
    FILE *file, *fileOutput;
    int **matriz, n, m, qtdAnuladas, *linhaAnulada, *colunaAnulada;
    char fileName[100], c;
    int i, j, k;

    printf("Digite o nome do arquivo com as informacoes da matriz: ");
    fgets(fileName, 100, stdin);
    setbuf(stdin, NULL);
    fileName[strlen(fileName)-1] = '\0';
    strcat(fileName,".txt");

    if((file = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao encontrado\n"); 
        exit(1);
    }

    if((fileOutput = fopen("matrizOutput.txt","w")) == NULL){ 
        printf("Arquivo nao pode ser criado\n"); 
        exit(1);
    }

    fscanf(file, "%d %d %d", &m, &n, &qtdAnuladas);

    //aloca matriz
    if((matriz = (int**)malloc(m*sizeof(int*))) == NULL){
        printf("Erro de alocacao de memoria\n");
        exit(1);
    }for(int i=0;i<m;i++){
        if((matriz[i] = (int*)malloc(n*sizeof(int))) == NULL){
            printf("Erro de alocacao de memoria\n");
            exit(1);
        }
    }

    //aloca vetores
    if((linhaAnulada = (int *)malloc(qtdAnuladas*sizeof(int)))==NULL){
        printf("Erro de alocacao de memoria\n");
        exit(1);
    }
    if((colunaAnulada = (int *)malloc(qtdAnuladas*sizeof(int)))==NULL){
        printf("Erro de alocacao de memoria\n");
        exit(1);
    }

    //lê as linhas e colunas a receber 0
    i = 0;
    while(!feof(file)){
        while(c = fgetc(file), c != '\n' || c != EOF){
            if(c == '\n' || c == EOF) break;
        }
        fscanf(file, "%d %d", &linhaAnulada[i], &colunaAnulada[i]);
        i++;
    }

    //cria a matriz no file
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            for(k=0; k<qtdAnuladas; k++){
                if(i == linhaAnulada[k] && j == colunaAnulada[k]) break;
            }
            if(k != qtdAnuladas){
                fprintf(fileOutput, "%d ", 0);
            }else{
                fprintf(fileOutput, "%d ", 1);
            }
            
        }
        fprintf(fileOutput, "\n");
    }

    printf("Arquivo da matriz criado com sucesso!\n");
    fclose(file);
    fclose(fileOutput);
    return 1;
}