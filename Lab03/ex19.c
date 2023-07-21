/*19. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de
um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com
a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.
*/

#include <stdio.h>

int main(){
    int valor_saque, quantidade_notas;
    int nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, nota_1;

    printf("Digite o valor do saque: \n");
    scanf("%d", &valor_saque);

    if (valor_saque < 0)
    {
        printf("Digite um valor valido!\n");
    }
    else 
    {
        while (valor_saque > 0)    
        {
            // notas de 100
            nota_100 = valor_saque / 100;
            valor_saque %= 100;
            if (nota_100 > 0)
            {
                printf("Serao utilizadas %d notas de 100\n", nota_100);
            }
            
            // notas de 50
            nota_50 = valor_saque / 50;
            valor_saque %= 50;
            if (nota_50 > 0)
            {
                printf("Serao utilizadas %d notas de 50\n", nota_50);
            }

            // notas de 20
            nota_20 = valor_saque / 20;
            valor_saque %= 20;
            if (nota_20 > 0)
            {
                printf("Serao utilizadas %d notas de 20\n", nota_20);
            }
            
            // notas de 10
            nota_10 = valor_saque / 10;
            valor_saque %= 10;
            if (nota_10 > 0)
            {
                printf("Serao utilizadas %d notas de 10\n", nota_10);
            }

            // notas de 5
            nota_5 = valor_saque / 5;
            valor_saque %= 5;
            if (nota_5 > 0)
            {
                printf("Serao utilizadas %d notas de 5\n", nota_5);
            }

            // notas de 2
            nota_2 = valor_saque / 2;
            valor_saque %= 2;
            if (nota_2 > 0)
            {
                printf("Serao utilizadas %d notas de 2\n", nota_2);
            }

            // notas de 1
            nota_1 = valor_saque / 1;
            valor_saque %= 1;
            if (nota_1 > 0)
            {
                printf("Serao utilizadas %d notas de 1\n", nota_1);
            }
        }
        quantidade_notas = nota_100+nota_50+nota_20+nota_10+nota_5+nota_2+nota_1;
        printf("A menor quantidade de notas utilizadas para esse saque eh %d\n", quantidade_notas);
    }
    
    return 0;
}