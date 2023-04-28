/*8. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os
dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso
o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para
ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o
vetor final que foi digitado*/

#include <stdio.h>

int main(){
    int vet[10], i, j;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d valor: ", i);
        scanf("%d", &vet[i]);
        for(j = 0; j < i; j++)
        {
            if(vet[i] == vet[j])
            {
                i--;
                break;
            }
        }
    }

    for(i = 0; i < 10; i++)
    {
        printf("%4d", vet[i]);

    }
    return 0;
}
