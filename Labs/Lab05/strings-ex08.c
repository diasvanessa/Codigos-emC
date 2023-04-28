/*8. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100], letra1, letra2;
    int i;

    // le a frase ou palavra escrita pelo usuario
    printf("Digite uma palavra ou uma frase:");
    fgets(str, 100, stdin);

    // le qual sera a letra substituida
    printf("Digite a letra a ser substituida: ");
    scanf("%c", &letra1);
    fflush(stdin);

    // le a letra substituta
    printf("Digite a letra substituta: ");
    scanf("%c", &letra2);
    fflush(stdin);

    // laco para substituir as letras pedidas pelo usuario
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == letra1)
        {
            str[i] = letra2;
        }
        
    }
    
    // imprime a nova string
    printf("%s\n", str);
    return 0;
}