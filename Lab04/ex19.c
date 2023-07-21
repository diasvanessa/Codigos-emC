/*19. Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!.
*/

#include <stdio.h>

int Fatorial(int Num);

int main(){
    int N, fat; 
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    fat = Fatorial(N);
    printf("%d fatorial eh = %d", N, fat);
    return 0;
}

int Fatorial(int Num){
    if (Num == 1)
    {
        return 1;
    }
    else{
        return Num*Fatorial(Num-1);
    }

}
