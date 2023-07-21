/*18. Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5 (voos)
e A = 5 (aeroportos) e:
 Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de
origem e um de destino;
 Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade
de voos que saem e quantidade de voos que chegam.
Nota: Cada aeroporto é identificado por um código inteiro entre 0 e (A-1). Não aceite
aeroportos de código inexistente.
*/

#include <stdio.h>

struct voo{
    int cod_origem;
    int cod_destino;
};

typedef struct voo voo;

struct aeroporto{
    int cod_aeroporto;
    int quant_saida;
    int quant_entrada;
};

typedef struct aeroporto aeroporto;

int main(){
    voo voos[5];
    aeroporto aeroportos[5];
    int i;

    // voos
    for (i = 0; i < 5; i++)
    {
        do
        {
            printf("Digite o codigo de origem do voo %d (0-4):", i+1);
            scanf("%d", &voos[i].cod_origem);
            fflush(stdin);

        } while (voos[i].cod_origem < 0 || voos[i].cod_origem > 4);
        do
        {
            printf("Digite o codigo de destino do voo %d (0-4):", i+1);
            scanf("%d", &voos[i].cod_destino);
            fflush(stdin);
        } while (voos[i].cod_destino < 0 || voos[i].cod_destino > 4);
    }

    // aeroporto

    for (i = 0; i < 5; i++)
    {
        do
        {
            printf("Digite o codigo do aeroporto %d (0-4): ", i+1);
            scanf("%d", &aeroportos[i].cod_aeroporto);
        } while (aeroportos[i].cod_aeroporto < 0 || aeroportos[i].cod_aeroporto > 4);

        printf("Digite a quantidade de voos que saem do aeroporto %d: ", i+1);
        scanf("%d", &aeroportos[i].quant_saida);
        fflush(stdin);
        printf("Digite a quantidade de voos que chegam ao aeroporto %d: ", i+1);
        scanf("%d", &aeroportos[i].quant_entrada);
        printf("\n");
    }
    return 0;
}