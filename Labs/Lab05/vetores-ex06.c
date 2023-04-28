/*6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que
são primos e suas respectivas posições no vetor*/

#include <stdio.h>
#include <math.h>

int main(){
    int vet[10], i, count = 1, j;

    // inicializacao do vetor com numeros digitados pelo usuario
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d valor: ", count);
        scanf("%d", &vet[i]);
        count++;
    }
    
    // laco para verificar cada posicao do vetor, se é primo ou nao 
    for (i = 0; i < 10; i++)
    {
        count = 1;
        
        /* esse laco ira dividir cada numero do vetor por 2 ate a raiz do numero, 
        pois é suficiente verificar se um número é divisível 
        por todos os números menores ou iguais à sua raiz quadrada para determinar se ele é primo ou não 
        P.e, se quisermos verificar se o número 17 é primo, podemos começar a dividir por 2, 3, 4, 5, 6, 7, 8, 9
        e 10. No entanto, a partir desse ponto, não precisamos mais verificar números maiores do que 
        a raiz quadrada de 17 (que é aproximadamente 4,12), porque se houvesse um fator maior do que isso, 
        já teríamos encontrado um fator menor. Portanto, para verificar se 17 é primo, 
        só precisamos verificar se ele é divisível por 2, 3 e 4 (que é o que o loop for faz).*/

        for (j = 2; j <= sqrt(vet[i]); j++)
        {
            if (vet[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("Numero primo: %d, posicao do numero: %d\n", vet[i], i);
        }
    }
    return 0;
}