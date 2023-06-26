#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*Faça um programa que recebe um vetor de 10 números, converta cada
um desses números para binário e grave a sequência de 0s e 1s em um
arquivo texto. Cada número deve ser gravado em uma linha.*/

int main(){
    FILE *file;
    int vet[10], i, j, binary[32];

    if((file = fopen("binaryValues.txt","w")) == NULL){ 
        printf("Arquivo nao pode ser criado\n"); 
        exit(1);
    }

    for(i = 0; i < 10; i++){
        printf("Insira o valor de vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++){
        int x = 0;
        while(vet[i] > 0) {
            binary[x] = vet[i] % 2;
            vet[i] /= 2;
            x++;
        }
        for(j = x - 1; j >= 0; j--){
            fprintf(file,"%d",binary[j]);
        }
        fprintf(file,"\n");
    }

    fclose(file);
    return 1;
}