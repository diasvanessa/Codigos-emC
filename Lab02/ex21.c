/*21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
	1- Soma de 2 números.
	2- Diferença entre 2 números (maior pelo menor).
	3- Produto entre 2 números.
	4- Divisão entre 2 números (o denominador não pode ser zero).
	Opção*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int Escolha;
    float x, y, Resultado;

    // escolha feitas pelo usuario

    printf("Escolha a opcao:\n");
    printf("1- Soma de dois numeros.\n");
    printf("2- Diferenca entre dois numeros (maior pelo menor).\n");
    printf("3- Produto entre dois numeros.\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    printf("Digite sua escolha entre 1-4:");
    scanf("%d", &Escolha);

    // le os numeros e imprime a operacao de acordo com o que foi escolhido
    // Adicao
    if (Escolha == 1){ 
        printf("Digite dois numeros: ");
        scanf("%f %f", &x, &y);
        Resultado = x + y;
        printf("Soma = %.2f", Resultado);
    }
    // Subtracao
    else if(Escolha == 2){
        printf("Digite dois numeros: ");
        scanf("%f %f", &x, &y);
        if (x > y){
            printf ("Subtracao = %.2f", x - y);
        }
        else{
            printf ("Subtracao = %.2f", y - x);
        }
    }
    // Produto
    else if(Escolha == 3){
        printf("Digite dois numeros: ");
        scanf("%f %f", &x, &y);
        Resultado = x * y;
        printf("Produto = %.2f", Resultado);
    }
    // Divisao
    else if(Escolha == 4){
        printf("Digite o numerador e denominador, respectivamente: ");
        scanf("%f %f", &x, &y);
        if(y == 0){
            printf("Denominador nao pode ser 0!\n");
        }
        else {
            printf("Divisao = %.2f", x / y);
        }
    } else {
        printf("Escolha uma opcao valida!");
    }
    return 0;
}