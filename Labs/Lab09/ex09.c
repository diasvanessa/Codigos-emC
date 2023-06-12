/*9. Faça um programa que leia uma quantidade qualquer de números
armazenando-os na memória e pare a leitura quando o usuário entrar
um número negativo. Em seguida, imprima o vetor lido. Use a função
REALLOC.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, i = 0, num, count = 0;
    p = (int *) malloc(1*sizeof(int));

    for (i = 0;; i++)
    {
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", &num);
        if (num >= 0)
        {
            *(p+i) = num;
            count ++;
            p = (int *) realloc(p,(count+1)*(sizeof(int)));
        }
        else{
            break;
        }
    }
    
    printf("Vetor lido: \n");
    for (i = 0; i < count; i++)
    {
        printf("%d ", *(p+i));
    }
    
    free(p);
    return 0;
}