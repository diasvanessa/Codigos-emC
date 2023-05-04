/*15. Faça um programa que contenha um menu com as seguintes opções:
a) Ler uma string S1 (tamanho máximo 20 caracteres);
b) Imprimir o tamanho da string S1;
c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o
resultado da comparação;
d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da
concatenação;
e) Imprimir a string S1 de forma reversa;
f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse
ser informado pelo usuário;
g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os
caracteres C1 e C2 serão lidos pelo usuário;
h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo
usuário;
i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de
qual posição deve ser criada a substring e qual é o tamanho da substring.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Menu_Escolha();

int main(){
    char Escolha, str1[20], str2[20], letra1, letra2;
    int tamanho, i, count = 0, j, tamanhostr2, k = 1;

    do
    {
        Menu_Escolha();
        Escolha = getchar();
        fflush(stdin);

        /*a) Ler uma string S1 (tamanho máximo 20 caracteres);*/
        if (Escolha == 'A' || Escolha == 'a')
        {
            printf("Digite a string1: ");
            fgets(str1, 20, stdin);
            fflush(stdin);
        }

        /*b) Imprimir o tamanho da string S1;*/
        else if (Escolha == 'B' || Escolha == 'b')
        {
            tamanho = strlen(str1) - 1;
            printf("Essa string possui %d caracteres\n", tamanho);
            printf("\n");
        }

        /*c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o
        resultado da comparação;*/
        else if (Escolha == 'C' || Escolha == 'c')
        {
            printf("Digite a segunda string: ");
            fgets(str2, 20, stdin);
            fflush(stdin);

            if (strcmp(str1, str2) == 0)
            {
                printf("As strings sao iguais!\n");
                printf("\n");
            }
            else
            {
                printf("As strings sao diferentes!\n");
                printf("\n");
            }
        }

        /*d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da
        concatenação;*/
        else if (Escolha == 'D' || Escolha == 'd')
        {
            printf("Digite a segunda string: ");
            fgets(str2, 20, stdin);
            fflush(stdin);

            strcat(str1, str2);
            printf("%s", str1);

        }

        /*e) Imprimir a string S1 de forma reversa;*/
        else if (Escolha == 'E' || Escolha == 'e')
        {
            tamanho = strlen(str1);
            printf("A string em reverso eh: \n");
            for (i = tamanho - 1; i >= 0; i--)
            {
                printf("%c", str1[i]);
            }
            printf("\n");
        }

        /*f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse
        ser informado pelo usuário;*/
        else if (Escolha == 'F' || Escolha == 'f')
        {
            printf("Digite um caractere: ");
            scanf("%c", &letra1);
            fflush(stdin);

            for (i = 0; str1[i] != '\0'; i++)
            {
                if (str1[i] == letra1)
                {
                    count++;
                }
                    
            }
            printf("O caractere %c aparece %d vezes na string.\n", letra1, count);
            printf("\n");
        }

        /*g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os
        caracteres C1 e C2 serão lidos pelo usuário;*/
        else if (Escolha == 'G' || Escolha == 'g')
        {
            printf("Digite o caractere a ser substituido: ");
            scanf("%c", &letra1);
            fflush(stdin);
            printf("Digite o caractere substituto: ");
            scanf("%c", &letra2);
            fflush(stdin);

            for (i = 0; str1[i] != '\0'; i++)
            {
                if (str1[i] == letra1)
                {
                    str1[i] = letra2;
                    break;
                }
            }
                
            printf("A string com a primeira ocorrencia do caractere %c substituido eh:%s \n", letra1, str1);
            printf("\n");
        }

        /*h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo
        usuário;*/
        else if (Escolha == 'H' || Escolha == 'h')
        {
            printf("Digite uma string2: ");
            fgets(str2, 20, stdin);
            fflush(stdin);
            tamanhostr2 = strlen(str2) - 1;
            count = 0;

            for (i = 0; str1[i] != '\0' ; i++)
            {
                if (str1[i] == str2[0])
                {
                    for (j = i + 1; str1[j] != '\0'; j++)
                    {
                        if (str1[j] == str2[k])
                        {
                            count++;
                            k++;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                
            }
                
            if (count == tamanhostr2)
            {
                printf("A string 2 eh substring da substring 1!\n");
                printf("\n");
            }
            else
            {
                printf("A string 2 nao eh substring da substring 1!\n");
                printf("\n");
            }
        }

        /*i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de
        qual posição deve ser criada a substring e qual é o tamanho da substring.*/
        else if (Escolha == 'I' || Escolha == 'i')
        {
            printf("Digite a partir de qual posicao sera criada a substring: ");
            scanf("%d", &j);
            fflush(stdin);
            printf("Digite o tamanho da substring: ");
            scanf("%d", &tamanho);
            fflush(stdin);

            printf("A substring eh: \n");
            for (; j <= tamanho + 1; j++)
            {
                printf("%c", str1[j]);
                
            }
            printf("\n");
        }

        else if((Escolha == 'J') || (Escolha == 'j'))
        {
            return 0;
        }

        else
        {
            printf("Escolha uma das opcoes!\n");
        }

    } while((Escolha != 'J') || (Escolha != 'j'));

    return 0;
}


void Menu_Escolha()
{
    printf("Escolha uma das opcoes: \n");
    printf("a) Ler uma string S1 (tamanho maximo 20 caracteres)\n");
    printf("b) Imprimir o tamanho da string S1 \n");
    printf("c) Comparar a string S1 com uma nova string S2 \n");
    printf("d) Concatenar a string S1 com uma nova string S2\n");
    printf("e) Imprimir a string S1 de forma reversa\n");
    printf("f) Contar quantas vezes um dado caractere aparece na string S1\n");
    printf("g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2\n");
    printf("h) Verificar se uma string S2 eh substring de S1.\n");
    printf("i) Retornar uma substring da string S1.\n");
    printf("j) Sair do menu.\n");
    printf("Digite o caractere equivalente a escolha: ");
}