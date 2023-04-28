/*7. Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.*/

#include <stdio.h>
#include <string.h>

int main(){

    // define as variaveis
    char palavra[100], palavra_esp[100];
    int i, tamanho, j = 0; 

    // le uma frase escrita pelo usuario
    printf("Digite uma frase: ");
    fgets(palavra, 100, stdin);

    // atribui o tamanho da string a uma variavel
    tamanho = strlen(palavra);
    
    // laco para tirar os espacos da frase, sendo que a frase sem espacos sera copiada para outro vetor
    for (i = 0; i < tamanho; i++)
    {
        {
            // condicional para que somente os caracteres diferentes de espaco sejam copiados 
            if (palavra[i] != ' ')
            {
                palavra_esp[j] = palavra[i];
                j++;
            }
        }
    }
    
    // coloca o caracter que mostra final de frase no novo vetor criado
    palavra_esp[j] = '\0';

    // imprime o novo vetor
    printf("%s", palavra_esp);
    return 0;
}