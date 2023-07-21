#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*Faça um programa que leia um arquivo contendo o nome e o preço de
diversos produtos (separados por linha), e calcule o total da compra*/

int main(){
    FILE *file, *fileOutput;
    char fileName[100], productName[100];
    float price, totalPrice = 0.00;

    printf("Digite o nome do arquivo com as informacoes da compra: ");
    fgets(fileName, 100, stdin);
    setbuf(stdin, NULL);
    fileName[strlen(fileName)-1] = '\0';
    strcat(fileName,".txt");

    if((file = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao encontrado\n"); 
        exit(1);
    }

    if((fileOutput = fopen("totalCompra.txt","a")) == NULL){ 
        printf("Arquivo nao pode ser criado\n"); 
        exit(1);
    }
    
    while(!feof(file)){
        fscanf(file, "%[^:]: %f\n", productName, &price);
        totalPrice += price;
    }

    fprintf(fileOutput, "Preco total da compra: R$%.2f\n", totalPrice);
    printf("Valor total (R$%.2f) adicionado ao arquivo totalCompra.txt com sucesso!\n", totalPrice);

    fclose(file);
    fclose(fileOutput);
    return 1;
}