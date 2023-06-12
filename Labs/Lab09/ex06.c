/*6. Faça um programa que simule a memória de um computador: o usuário
irá especificar o tamanho da memória, ou seja, quantos bytes serão
alocados do tipo inteiro. Para tanto, a memória solicitada deve ser um
valor múltiplo do tamanho do tipo inteiro. Em seguida, o usuário terá 2
opções: inserir um valor em uma determinada posição ou consultar o
valor contido em uma determinada posição. A memória deve iniciar com
todos os dados zerados.*/

#include <stdio.h>
#include <stdlib.h>

void Menu(){
    printf("Escolha uma das opcoes: \n");
    printf("0 - Sair.\n");
    printf("1 - Inserir um valor em uma posicao.\n");
    printf("2 - Consultar o valor contido em uma determinada posicao.\n");
    printf("Digite sua escolha: ");
}

int main(){
    int tam, *p, i, escolha, posicao, novo_valor;

    do
    {
        printf("Digite o tamanho da memoria: ");
        scanf("%d", &tam);
    } while (tam % sizeof(int) != 0);
    
    p = (int *) malloc(tam*(sizeof(int)));

    for (i = 0; i < tam; i++)
    {
        *(p+i) = 0;
    }

    do
    {
        Menu();
        scanf("%d", &escolha);
        
        if (escolha == 1)
        {
            printf("Digite o valor que sera atribuido: ");
            scanf("%d", &novo_valor);
            printf("Digite a posicao desse valor: ");
            scanf("%d", &posicao);

            *(p+posicao) = novo_valor;
        }
        else if (escolha == 2)
        {
            printf("Digite a posicao que deseja checar: ");
            scanf("%d", &posicao);

            printf("%d", *(p+posicao));
        }
        else if (escolha == 0)
        {
            break;
        }
        else{
            continue;
        }
        
    } while (escolha != 0);
    
    printf("Vetor com modificacoes: ");
    for ( i = 0; i < tam; i++)
    {
        printf("%3d", *(p+i));
    }
    
    free(p);
    return 0;
}