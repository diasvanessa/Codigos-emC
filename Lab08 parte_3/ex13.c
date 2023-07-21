/* 13 Faça um programa que possua uma função para:
 - ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler
2 notas válidas e que devolver os 2 números lidos);
 - calcular a média simples e a média ponderada e retorná-las por parâmetro,
onde a segunda nota tem peso 2: media_ponderada = (n1 + n2*2)/3
 */

#include <stdio.h>

void LerNotas(int *N1, int *N2){
    printf("Digite o valor da primeira nota: ");
    scanf("%d", N1);
    printf("Digite o valor da segunda nota: ");
    scanf("%d", N2);
}

void MediaNotas(int *prim_nota, int *seg_nota, float *media_aritmetica, float *media_ponderada){
    *media_aritmetica = (*prim_nota + *seg_nota) / 2;
    *media_ponderada = (*prim_nota + *seg_nota*2) / 3;
}

int main(){
    int Nota1, Nota2;
    float media_A, media_P;

    LerNotas(&Nota1, &Nota2);
    MediaNotas(&Nota1, &Nota2, &media_A, &media_P);
    printf("Media simples: %.2f\nMedia ponderada: %.2f", media_A, media_P);

    return 0;
}