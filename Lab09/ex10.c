/*10.Faça um programa que pergunte ao usuário quantos valores ele deseja
armazenar em um vetor de double, depois use a função MALLOC para
reservar (alocar) o espaço de memória de acordo com o especificado
pelo usuário. Esse vetor deve ter um tamanho maior ou igual a 10
elementos. Use este vetor dinâmico como um vetor comum, atribuindo
aos 10 primeiros elementos do vetor valores aleatórios (usando a função
rand) entre 0 e 100. Exiba na tela os valores armazenados nos 10
primeiros elementos do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    double *p;
    int i, tam;

    srand(time(0));

    printf("Digite quantos valores deseja armazenar: \n");
    scanf("%d", &tam);

    p = (double *) malloc(tam*sizeof(double));

    for (i = 0; i < 10; i++)
    {
        *(p+i) = (rand() % (100 - 0 + 1)) + 1;
    }
    
    printf("Vetor preenchido: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%2f ", *(p+i));
    }
    
    free(p);
    return 0;
}