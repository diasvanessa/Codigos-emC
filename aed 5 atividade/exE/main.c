/*
e) Escreva um programa que leia 50 n�meros sorteados pela Lotomania e em seguida leia os
50 n�meros apostados pelo usu�rio. O programa deve ent�o comparar quantos n�meros o jogador acertou,
e alocar espa�o para um vetor de tamanho igual a quantidade de n�meros corretos,
guardando esses n�meros corretos nesse vetor. Finalmente,
o programa deve exibir na tela os n�meros sorteados, os n�meros que o usu�rio acertou,
e a porcentagem de acerto.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compara_Valores(int *sorteados, int *apostados, int n, int *acertos, int *tam){
    int verifica, count = 0;
    for(int i = 0; i < n; i++){
        verifica = 0;
        for(int j = 0; j < i; j++){
            if(apostados[i] == sorteados[j]){
                (*tam)++;
                verifica = 1;
                break;
            }
        }
        if(verifica){
            acertos = (int *) realloc(acertos,(*tam)*sizeof(int));
            acertos[count] = apostados[i];
            count++;
        }
    }
    if((*tam) == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    int num_sorteado[50], num_apostados[50], *num_certo, i, j, verifica, quant_acertos = 0;
    float porc_Acerto;
    srand(time(NULL));
    num_certo = (int *) malloc(1*sizeof(int));

    // preenche vetor com num sorteados
    for(i=0; i < 50; i++){
        num_sorteado[i] = rand() % (100 - 1);
        verifica = 0;
        for(j=0;j<i;j++){
            if(num_sorteado[i] == num_sorteado[j]){
                verifica = 1;
                break;
            }
        }
        if(verifica){
            i--;
        }
    }

    // le numeros do usuario
    for(i=0; i<50;i++){
        verifica = 0;
        printf("Digite o %d num para apostar: ", i+1);
        scanf("%d", &num_apostados[i]);
        
        for(j=0; j<i; j++){
            if(num_apostados[i] == num_apostados[j]){
                verifica = 1;
            }
        }

        if (num_apostados[i] < 0 || num_apostados[i] > 99)
        {
            verifica = 1;
        }

        if(verifica){
            printf("Numero ja escolhido ou invalido, digite novamente!\n");
            i--;
        }
    }

    // print dos numeros sorteados

    printf("\nNUMEROS SORTEADOS:\n");
    for(i=0; i < 50; i++){
        printf("%3d ", num_sorteado[i]);
        if ((i+1) % 5 == 0) printf("\n");

    }

    verifica = compara_Valores(num_apostados, num_sorteado, 50, num_certo, &quant_acertos);

    // print dos acertos

    if(verifica == 0){
        printf("\nVoce nao acertou nenhum numero :(!\n");
    }
    else{
        printf("\nQuantidade de numeros corretos: %d\n", quant_acertos);
        porc_Acerto = (quant_acertos * 100) / 50;
        printf("\nNUMEROS CORRETOS:\n");
        for(i = 0; i < quant_acertos; i++){
            printf("%3d ", num_certo[i]);
            if ((i+1) % 5 == 0) printf("\n");
        }
        printf("\n\nA porcentagem de acertos foi de: %.2f%%", porc_Acerto);
    }
    free(num_certo);
    return 0;
}
