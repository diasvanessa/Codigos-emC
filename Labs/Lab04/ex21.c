/*21. Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas
com pontos de exclamação, conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!*/

#include <stdio.h>

void Piramide_Exclamacoes(int Numero_Linhas);

int main(){
    int NumUser_Linhas;
    printf("Digite o numero de linhas desejadas: ");
    scanf("%d", &NumUser_Linhas);
    Piramide_Exclamacoes(NumUser_Linhas); // chama a funcao e apresenta a quantidade de linhas
    return 0;
}

// funcao que inclui o laco para imprimir a piramide
void Piramide_Exclamacoes(int Numero_Linhas){
    int i, j;
    
    // laco para as linhas
    for (i = 1; i <= Numero_Linhas; i++)
    {
        // laco para imprimir os '!'
        for (j = 1; j <= i; j++)
        {
            printf("!");
        }
        printf("\n");
    }
}
