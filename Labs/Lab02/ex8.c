/*8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na
tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
programa termina.*/

#include <stdio.h>
#include <math.h>

int main(){

    // define as variaveis e atribui a elas as notas digitadas pelo usuario
    float Nota_1, Nota_2, Media;
    printf("Digite as duas notas do aluno:\n");
    scanf("%f %f", &Nota_1, &Nota_2);

    // calcula a media das notas
    Media = (Nota_1+Nota_2) / 2;

    // imprime a media de acordo com o resultado do calculo
    if (((Nota_1 >= 0) && (Nota_2 >= 0)) && ((Nota_2 <= 10) && (Nota_2 <= 10))){
        printf("A media do aluno foi: %.2f\n", Media);
    } else {
        printf("Digite dois numeros validos!\n");
    }
    return 0;
}