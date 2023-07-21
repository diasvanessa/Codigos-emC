/*12. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo
de substituição na qual cada letra do texto substituída por outra, que se apresenta no alfabeto
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria
substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça
uso desse Código de César (3 posições), entre com uma string e retorne a string codificada.
Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR*/

#include <stdio.h> 
#include <string.h>

int main(){
    char str[100], criptografia[100];
    int i, j = 0;

    printf("Digite uma palavra ou frase a ser criptografada: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        // laco caso a frase tenha letras maisculas/minusculas entre A e W
        if ((str[i] >= 65 && str[i] <= 87) || (str[i] >= 97 && str[i] <= 119))
        {
            criptografia[i] = str[i] + 3;
            j++;
        }

        // laco caso a frase tenha letras maisculas/minusculas entre X e Z, pois nao da pra usar no laco anterior
        // pois poderia ocorrer erro de truncamento

        else if ((str[i] >= 88 && str[i] <= 90) || (str[i] >= 120 && str[i] <= 122))
        {
            if (str[i] == 'X')
            {
                criptografia[i] = 'A';
            }
            else if (str[i] == 'Y')
            {
                criptografia[i] = 'B';
            }
            else if (str[i] == 'Z')
            {
                criptografia[i] = 'C';
            }
            else if (str[i] == 'x')
            {
                criptografia[i] = 'a';
            }
            else if (str[i] == 'y')
            {
                criptografia[i] = 'b';
            }
            else if (str[i] == 'z')
            {
                criptografia[i] = 'c';
            }
            j++;
        }

        // os caracteres diferentes das letras nao sofrem alteracao
        else
        {
            criptografia[j] = str[i];
            j++;
        }
    }

    // adiciona o fim de frase a string
    criptografia[j] = '\0';

    // imprime a mensagem criptografada
    printf("A mensagem criptografada eh: %s", criptografia); 

    return 0;
}