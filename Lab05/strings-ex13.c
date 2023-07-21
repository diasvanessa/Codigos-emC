/*13. Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando
que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
para a esquerda como da esquerda para a direita.
Exemplo:
ovo
arara
Socorram-me, subi no ônibus em Marrocos
Anotaram a data da maratona
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i, tamanho, j = 0, eh_palindromo = 0;

    printf("Digite uma frase ou palavra: ");
    fgets(str, 100, stdin);
    tamanho = strlen(str);

    // tirar os caracteres diferentes de letras e transformar maiusculas em minusculas

    for (i = 0; i < tamanho; i++)
    {
        if ((str[i] >= 65 && str[i] <= 90))
        {
            str[j] =  str[i] + 32;
            j++;
        }
        else if ((str[i] >= 97 && str[i] <= 122))
        {
            str[j] = str[i];
            j++;
        }
    }  
    str[j] = '\0';

    tamanho = strlen(str);
    j = tamanho - 1;

    // checa se a primeira letra eh igual a ultima e assim sucessivamente
    for (i = 0; i < tamanho / 2; i++)
    {
        if (str[i] == str[j])
        {
            eh_palindromo += 1;
            j--;
        }
        else
        {
            break;
        }
    }

    if (eh_palindromo == tamanho / 2)
    {
        printf("A frase ou palavra eh um palindromo!\n");
    }
    else
    {
        printf("Nao eh palindromo!\n");
    }
    
    return 0;
}
