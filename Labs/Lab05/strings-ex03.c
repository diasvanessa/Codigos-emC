/*3. Faça um programa que receba uma palavra e a imprima de trás-para-frente.*/

#include <stdio.h>
#include <string.h>

int main(){
    int i, tamanho;
    char palavra[20];
    
    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    tamanho = strlen(palavra);

    for (i = tamanho; i >= 0; i--)
    {
        printf("%c", palavra[i]);
    }

    return 0;
}
