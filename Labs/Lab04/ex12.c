/*12. Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de
todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). 
Se o número lido não for maior do que zero, o programa terminará com a mensagem
“Número inválido”.
*/

#include <stdio.h>

void Soma_Algarismos(int Numero_Escolhido);

int main(){
    int Num;
    printf("Digite um numero inteiro maior que 0: ");
    scanf("%d", &Num);

    Soma_Algarismos(Num); // chama a funcao para somar os algarismos do numero digitado pelo usuario
    return 0;
}


// a funcao eh void pois nao retornara um valor e sim imprimira a soma na tela

void Soma_Algarismos(int Numero_Escolhido){

    if (Numero_Escolhido > 0)
    {
        int i, Soma_Algarismo = 0;
        
        // laco que fara a soma dos algarismos do numero

        for (i = 1; Numero_Escolhido > 0; i++)
        {
            Soma_Algarismo = Soma_Algarismo + Numero_Escolhido % 10;
            Numero_Escolhido /= 10;
        }
        printf("A soma dos algarismos do numero eh = %d", Soma_Algarismo);
    }
    else
    {
        printf("Numero invalido!");
    }
    
}