/* 4. Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
outro número inteiro. Ex.: 1, 4, 9...*/

#include <stdio.h>
#include <math.h>

int quadrado_perfeito(int num);

int main(){
    int x;
    printf("Digite um numero:");
    scanf("%x", &x);
    quadrado_perfeito(x);
    return 0;
}

int quadrado_perfeito(int num)
{
    if(sqrt(num) * sqrt (num) == num){
        printf("O numero eh quadrado perfeito\n");
        return 1;
    }
    else{
        printf("O numero nao eh quadrado perfeito\n");
        return 0;
    }
}