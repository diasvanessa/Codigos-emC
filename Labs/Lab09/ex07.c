/*7. Escreva um programa que leia primeiro os 6 números gerados pela
loteria e depois os 6 números do seu bilhete. O programa então compara
quantos números o jogador acertou. Em seguida, ele aloca espaço para
um vetor de tamanho igual a quantidade de números corretos e guarda
os números corretos nesse vetor. Finalmente, o programa exibe os
números sorteados e os seus números corretos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_gerados[6], num_bilhete[6], i, count = 0, *num_correto, j, c;

    printf("Valores gerados pela loteria: \n");
    for (i = 0; i < 6; i++)
    {
        printf("Digite vet[%d]: ", i);
        scanf("%d", &num_gerados[i]);
    }
    
    printf("Valores do bilhete: \n");
    for (i = 0; i < 6; i++)
    {
        printf("Digite vet[%d]: ", i);
        scanf("%d", &num_bilhete[i]);
    }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (num_gerados[i] == num_bilhete[j])
            {
                count++;
            }
        }
    }
    
    num_correto = (int *) malloc(count*(sizeof(int)));
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (num_gerados[i] == num_bilhete[j])
            {
                for (c = 0; c < count; c++)
                {
                    *(num_correto+c) = num_bilhete[j];
                }
            }
        }
    }

    printf("Numeros da loteria: \n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", num_gerados[i]);
    }

    printf("\n");
    
    printf("Numeros corretos: \n");
    for (i = 0; i < count; i++)
    {
        printf("%d", *(num_correto+i));
    }
    

    free(num_correto);
    return 0;
}