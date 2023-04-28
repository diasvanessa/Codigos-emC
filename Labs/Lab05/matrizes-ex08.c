/*8. Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um
menu de opções:
a) somar as duas matrizes
b) subtrair a primeira matriz da segunda
c) adicionar uma constante às duas matrizes
d) imprimir as matrizes
*/

#include <stdio.h>

int main(){
    int mat[2][2];
    char opcao;

    do{
      printf("Digite uma das opcoes:\n");
      printf("a) Somar as duas matrizes.\n");
      printf("b) Subtrair a primeira matriz da segunda.\n");
      printf("c) Acionar uma constante as duas matrizes.\n");
      printf("d) Imprimir as matrizes.\n");
      scanf("%c", &opcao);
    } while(opcao != 'a' || opcao != 'b' || opcao != 'c' || opcao != 'd')


}
