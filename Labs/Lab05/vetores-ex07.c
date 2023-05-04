/*7. Faça um programa que receba 6 números inteiros e mostre:
- Os números pares digitados;
- A soma dos números pares digitados;
- Os números ímpares digitados;
- A quantidade de números ímpares digitados;*/

#include <stdio.h>

int main(){
    int vet[6], i, count = 1, somaPares = 0, quantIm = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d numero: ", count);
        scanf("%d", &vet[i]);
        count++;
    }
    
    printf("Numeros pares:\n");
    for (i = 0; i < 6; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("%d\n", vet[i]);
            somaPares += vet[i];
        }
    }

    printf("Numeros impares:\n");
    for (i = 0; i < 6; i++)
    {
        if (vet[i] % 2 != 0)
        {
            printf("%d\n", vet[i]);
            quantIm +=1;
        }
        
    }
    
    printf("A soma dos valores pares eh = %d\n", somaPares);
    printf("A quantidade de numeros impares eh = %d\n", quantIm);
    return 0;
}
