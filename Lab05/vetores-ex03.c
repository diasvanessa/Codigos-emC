/* 3. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa.
*/

#include <stdio.h>

int main(){
    int vet[6], i, count = 1;

    // le os 6 valores inteiros
    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d numero: ", count);
        scanf("%d", &vet[i]);
        count++;
    }
    
    // imprime os numeros em ordem inversa
    for (i = 5; i >= 0; i--)
    {
        printf("%d\n", vet[i]);
    }
    
}