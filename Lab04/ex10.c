/*10. Faça uma função que receba dois números e retorne qual deles é o maior.*/

#include <stdio.h>

int numero_maior(int num1, int num2);

int main(){
    int x, y, num_maior;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    num_maior = numero_maior(x, y);
    printf("O numero maior eh = %d", num_maior);
    return 0;
}

int numero_maior(int num1, int num2){
    if (num1 > num2)
    {
        return num1;
    }
    else if (num1 < num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}