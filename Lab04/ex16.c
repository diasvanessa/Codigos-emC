/*16. Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma
sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos
sinais de igual serão mostrados.*/

#include <stdio.h>

void desenha_linha(int Quant_Simbolos);

int main(){
    int QuantUsuario_Simbolos;
    printf("Digite quantos simbolos terao na linha:");
    scanf("%d", &QuantUsuario_Simbolos);

    // chama a funcao
    desenha_linha(QuantUsuario_Simbolos);
    return 0;
}

void desenha_linha(int Quant_Simbolos){
    int i;

    // laco que imprimira na tela a quantidade de simbolos escolhida pelo usuario
    for (i = 0; i < Quant_Simbolos; i++)
    {
        printf("=");
    }
}