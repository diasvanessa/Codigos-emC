/*2 Crie um programa que contenha uma matriz de float contendo 3 linhas e 3
colunas. Utilizando aritmética de ponteiro, imprima o endereço de cada
posição dessa matriz*/

#include <stdio.h>

int main(){
    float mat[3][3];
    float *p;
    int i;

    

    for (i = 0; i < 9; i++)
    {
        printf("Digite um valor: ");
        scanf("%f", p+i);
    }

    for (i = 0; i < 9; i++)
    {
        printf("Conteudo: %f\n", *(p+i));
        printf("Endereco: %p\n", (p+i));
        printf("\n");
    }
    
    return 0;
}