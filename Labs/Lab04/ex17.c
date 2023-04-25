/*17. Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a
soma dos N números inteiros existentes entre eles.*/

#include <stdio.h>

int Soma_Numeros(int Num1, int Num_2);

int main(){
    int Num1_Usuario, Num2_Usuario, Soma_Usuario;
    printf("Digite o primeiro numero inteiro:");
    scanf("%d", &Num1_Usuario);
    printf("Digite o segundo numero inteiro:");
    scanf("%d", &Num2_Usuario);
    Soma_Usuario = Soma_Numeros(Num1_Usuario, Num2_Usuario); 
    printf("A soma dos algarismos entre %d e %d eh = %d", Num1_Usuario, Num2_Usuario, Soma_Usuario);
    return 0;
}

int Soma_Numeros(int Num1, int Num2){
    int i, Soma = 0; // variaveis para usar no laco
    
    /* lacos para verificar qual dos numeros digitados pelo usuario foi menor, 
    pois o 'i' comecara do menor numero +1 e ira ate o segundo numero digitado pelo usuario
    p.e, se o usuario digitou 9 e 1, sera somado do 2 ate o 8 */

    if ((Num1 <= 0) || (Num2 <= 0) || (Num1 == Num2))
    {
        printf("Digite numeros positivos e diferentes!\n");
    }
    else
    {
        if (Num1 < Num2)
        {
            i = Num1+1;
            for (; i < Num2; i++)
            {
                Soma += i;
            }
        }
        else{
            i = Num2+1;
            for (; i < Num1; i++)
            {
                Soma += i;
            }
        }
        return Soma;
    }
}