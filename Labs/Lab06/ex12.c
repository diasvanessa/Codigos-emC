/*12. Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe
e seu valor). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores,
considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos
jogadores recebeu.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct carta{
    char naipe;
    int valor;
};

typedef struct carta carta;

int main(){
    carta cartas[52], maojogador1[3], maojogador2[3];
    int i, j, aux;
    srand(time(NULL));

    // atribuicao para os valores das cartas do baralho, com seu valor e seu naipe de acordo com a struct
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 13; j++)
        {
            cartas[i * 13 + j].valor = j + 1;  // Valores de 1 a 13 (A a K)
            
            if (i == 0)
            {
                cartas[i * 13 + j].naipe = 'P';  // Paus
            }
            else if (i == 1)
            {
                cartas[i * 13 + j].naipe = 'O';  // Ouros
            }
            else if (i == 2)
            {
                cartas[i * 13 + j].naipe = 'C';  // Copas
            }
            else if (i == 3)
            {
                cartas[i * 13 + j].naipe = 'E';  // Espadas
            }
        }
    }

    // distribuicao aleatoria das cartas para cada jogador;
    for (i = 0; i < 3; i++)
    {
        {
            maojogador1[i] = cartas[rand() % 52];
            maojogador2[i] = cartas[rand() % 52];
        }
    }
    
    // imprime as cartas, sendo que os valores 1, 11, 12, 13 sao o AS, VALETE, DAMA E REI, respectivamente

    for (i = 0; i < 3; i++)
    {
        printf("%d, %c\n", maojogador1[i].valor, maojogador1[i].naipe);
        printf("%d, %c\n", maojogador2[i].valor, maojogador2[i].naipe);
    }
    
    return 0;
}
