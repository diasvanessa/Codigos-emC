/*4. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram
o maior e o menor valor.
*/

#include <stdio.h>

int main(){
    int vet[5], i, count = 1, maiorv, menorv;

    // laco para ler os valores digitados pelo usuario
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d valor: ", count);
        scanf("%d", &vet[i]);
        count++;
    }

    // coloca os valores das posicoes 0 nas duas variaveis para comecar a verificacao
    maiorv = vet[0];
    menorv = vet[0];

    // laco para verificar as posicoes a partir da 0, 
    // se for menor troca o valor da variavel menor e se for maior troca o valor da variavel maior

    for (i = 1; i < 5; i++)
    {
        if (maiorv > vet[i])
        {
            maiorv = vet[i];
        }
        if (menorv < vet[i])
        {
            menorv = vet[i];
        }
        
    }

    // imprime os valores contidos nas variaveis maior e menor
    printf("%d %d\n", maiorv, menorv);
    return 0;
}