/*14. Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras),
ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor
que p. Repita este processo até que seja lido um valor p = 0.*/

#include <stdio.h>

struct carro
{
    char marca[15];
    int ano;
    int preco;
};

typedef struct carro carro;

int main(){
    carro carros[5];
    int i, p;

    for (i = 0; i < 5; i++)
    {
        printf("Dados do %d carro: \n", i+1);
        printf("Marca: ");
        fgets(carros[i].marca, 15, stdin);
        fflush(stdin);
        printf("Ano: ");
        scanf("%d", &carros[i].ano);
        fflush(stdin);
        printf("Preco: ");
        scanf("%d", &carros[i].preco);
        fflush(stdin);
        printf("\n");
    }

    do
    {
        printf("Digite um preco: ");
        scanf("%d", &p);
        fflush(stdin);
        printf("\n");

        if (p > 0)
        {
            printf("Modelos mais baratos que R$ %d,00:\n", p);
            for (i = 0; i < 5; i++)
            {
                if (carros[i].preco < p)
                {
                    printf("Marca: %s", carros[i].marca);
                    printf("Ano: %d\n", carros[i].ano);
                    printf("Preco:%d\n", carros[i].preco);
                    printf("\n");
                }
            }
        }
        
    } while (p != 0);
    
    return 0;
}