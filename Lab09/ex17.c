/*17.Faça um programa que leia números do teclado e os armazene em um
vetor alocado dinamicamente. O usuário irá digitar uma sequência de
números, sem limite de quantidade. Os números serão digitados um a
um e, sendo que caso ele deseje encerrar a entrada de dados, ele irá
digitar o número ZERO. Os dados devem ser armazenados na memória
deste modo:
a) Inicie com um vetor de tamanho 10 alocado dinamicamente;
b) Após, caso o vetor alocado esteja cheio, aloque um novo vetor do
tamanho do vetor anterior adicionado espaço para mais 10 valores
(tamanho N+10, onde N inicia com 10);
c) Copie os valores já digitados da área inicial para esta área maior e
libere a memória da área inicial;
d) Repita este procedimento de expandir dinamicamente com mais 10
valores o vetor alocado cada vez que o mesmo estiver cheio. Assim o
vetor irá ser “expandido” de 10 em 10 valores.
Ao final, exiba o vetor lido. Não use a função REALLOC.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet, n = 10, *vet2, num, i, count = 0;

    vet = (int *) malloc(n*sizeof(int));

    while(1){
        printf("Digite um numero para inserir no vetor, se deseja sair digite 0: ");
        scanf("%d", &num);

        if (num == 0){
            break;
        }
  
        vet[count] = num;
        count++;

        if (count == n)
        {
            vet2 = (int *) malloc((n+10)*sizeof(int)); // aloca mais memoria de 10 em 10

            for (i = 0; i < n; i++)
            {
                vet2[i] = vet[i]; // copia o conteudo para esse vetor que foi alocada mais memoria
            }
            free(vet);
            n+=10; // soma 10 pois estamos alocando mais memoria de 10 em 10 
            vet = vet2; // o vetor passara a apontar para o outro que alocamos mais memoria
        }
    }

    printf("Vetor: \n");
    for (i = 0; i < count; i++)
    {
        printf("%d ", vet[i]);
    }

    free(vet);
    
    return 0;
}