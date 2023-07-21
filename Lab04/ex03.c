/*3. Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de
retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.*/


#include <stdio.h>

int positivo(int num);

int main(){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    positivo(x);
    return 0;
}

int positivo(int num){
    if(num > 0){
        printf("Numero eh positivo!\n");
        return 1;
    }
    else if (num < 0){
        printf("Numero nao eh positivo!\n");
        return -1;
    }
    else{
        printf("Numero eh = 0!\n");
        return 0; 
    }
    
}
