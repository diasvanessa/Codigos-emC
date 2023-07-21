/*16. Faça um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:
- Adição (opção 1)
- Subtração (opção 2)
- Multiplicação (opção 3)
- Divisão (opção 4).
- Saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado
e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída
(opção 5).*/

#include <stdio.h>

int main(){
    int i;
    float x,y;

    do
    {
        printf("Escolha uma opcao:\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Saida\n");
        scanf("%d", &i);

        if((i >= 1) && (i < 5))
        {
            printf("Digite x:\n");
            scanf("%f", &x);
            printf("Digite y:\n");
            scanf("%f", &y);
        }

        switch (i)
        {
            case 1:
                printf("%.2f + %.2f = %.2f\n", x, y, x+y);
                break;

            case 2:
                printf("%.2f - %.2f = %.2f\n", x, y, x-y);
                break;

            case 3:
                printf("%.2f * %.2f = %.2f\n", x, y, x*y);
                break;

            case 4:
                printf("%.2f / %.2f = %.2f\n", x, y, x/y);
                break;

        }
    } while (i != 5);
    return 0;
}