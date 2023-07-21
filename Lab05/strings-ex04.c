/*4. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa
palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra
dada por esse caractere.
*/

#include <stdio.h>
#include <string.h>

int main(){
    int i, tamanho, quant_vogais = 0;
    char palavra[20];

    // atribui a palavra digitada pelo usuario a string
    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    // verifica o tamanho da string para determinar ate quando o laco vai
    tamanho = strlen(palavra);

    // laco para trocar todas as vogais da palavra por outra e contar quantas vogais sao
    for (i = 0; i < tamanho; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' )
        {
            quant_vogais+= 1;
            palavra[i] = 'v';
        }
    }
    
    // imprime quantas vogais essa palavra tinha e a nova palavra com as vogais substituida
    printf("Essa palavra tem %d vogais\n", quant_vogais);
    printf("A palavra com as vogais substituidas por outra letra eh: %s\n", palavra);
    return 0;
}