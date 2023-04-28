/*6. Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia
32 dos caracteres cujo código ASCII está entre 97 e 122.*/

#include <stdio.h>

int main(){
    char palavra[20];
    int i, tamanho;

    // le uma palavra em minusculo escrita pelo usuario
    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    // define ate quando precisamos ir com o laco
    tamanho = strlen(palavra);

    // laco para converter as letras minusculas para maiusculas
    for (i = 0; i < tamanho - 1; i++)
    {
        palavra[i] -= 32;
    }
    
    // imprime a palavra em maiusculo
    printf("%s", palavra);
    return 0;
}