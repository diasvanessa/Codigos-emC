/*2. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/

#include <stdio.h>

int main(){
    int vet[8], i, num1, num2, soma = 0, j = 1;
    
    // laco para guardar 8 numeros dentro desse vetor
    for (i = 0; i < 8; i++)
    {
        printf("Digite o %d numero: ", j);
        scanf("%d", &vet[i]);
        j++;
    }
    
    // pede para que usuario escolha duas posicoes para somar os numeros que estao guardados nessas posicoes
    printf("Digite dois numeros entre 0 e 7: ");
    scanf("%d %d", &num1, &num2);
    soma = vet[num1] + vet[num2];
    printf("A soma dos dois numeros de posicao %d e %d eh = %d", num1, num2, soma);
    return 0;
}