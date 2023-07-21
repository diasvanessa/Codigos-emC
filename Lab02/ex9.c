/*9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float Salario, Prestacao, Porcentagem_emprestimo; // define as variaveis 
    printf("Digite o salario:");
    scanf("%f", &Salario);
    printf("Digite o valor da prestacao:");
    scanf("%f", &Prestacao);

    Porcentagem_emprestimo = (20*Salario)/100; // Calcula 20% do salario 

    /* define a condicao para que o emprestimo seja concendido, se a prestacao for maior que 
    20% do salario, ele nao sera concedido */

    if(Prestacao > Porcentagem_emprestimo){
        printf("Emprestimo nao concedido!\n");
    } else{
        printf("Emprestimo concedido!");
    }
    return 0; 
}
