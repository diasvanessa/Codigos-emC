/*22. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são
- Ter pelo menos 65 anos;
- Ou ter trabalhado pelo menos 30 anos;
- Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // le idade e tempo de contribuicao do usuario

    int Idade, Contribuicao; 
    printf("Digite sua idade: ");
    scanf("%d", &Idade);
    printf("Digite o tempo de contribuicao: ");
    scanf("%d", &Contribuicao);

    /* Estabelece condicoes para imprimir se usuario pode ou nao se aposentar:  
        Ter pelo menos 65 anos;
        Ou ter trabalhado pelo menos 30 anos;
        Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */

    if (((Idade >= 65) || (Contribuicao >= 30)) || ((Idade >= 60) && (Contribuicao >= 25)))
    {
        printf("Apto a aposentadoria!\n");
    } else{
        printf("Ainda nao pode se aposentar!\n");
    }
    return 0; 
}