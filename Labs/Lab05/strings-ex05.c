/*5. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras
minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90*/

#include <stdio.h>
#include <string.h>

int main(){
    int i, tamanho;
    char palavra[100];

    // le uma palavra escrita pelo usuario
    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);

    // define o tamanho dessa string
    tamanho = strlen(palavra);

    // muda as letras maiuscula para minuscula 
    for (i = 0; i < tamanho - 1; i++)
    {
        if (palavra[i] >= 65 && palavra[i] <= 90)
        {
            palavra[i] +=32;
        }
    }
    
    // imprime a nova palavra com letras minuscula
    printf("%s", palavra);
    return 0; 
}