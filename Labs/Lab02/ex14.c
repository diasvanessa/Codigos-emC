/*14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float Trabalho_Lab, Avaliacao_Sem, Ex_final, Media_Notas; // define as variaveis 

    // le as notas digitadas pelo usuario
    printf("Digite a nota do trabalho de laboratorio:");
    scanf("%f", &Trabalho_Lab);
    printf("Digite a nota da avaliacao semestral:");
    scanf("%f", &Avaliacao_Sem);
    printf("Digite a nota do exame final:");
    scanf("%f", &Ex_final);

    /*A media das três notas  obedece aos pesos: Trabalho
    de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5.*/

    Media_Notas = ((Trabalho_Lab * 2) + (Avaliacao_Sem * 3) + (Ex_final * 5)) / 10;
    printf("Media do aluno foi: %.2f\n", Media_Notas);

    /*mostra na tela se o aluno está reprovado (média entre 0 e 2,9), 
    de recuperação (entre 3 e 4,9) ou se foi aprovado*/

    if(Media_Notas < 2.9){
        printf("Aluno reprovado!\n");
    } else if((Media_Notas >= 3) && (Media_Notas <= 4.9)){
        printf("Aluno de recuperacao!\n");
    } else {
        printf("Aluno aprovado!\n");
    }
    return 0;
}
