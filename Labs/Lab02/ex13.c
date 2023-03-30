/*13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float nota_1, nota_2, nota_3, media_ponderada; // define as variaveis 
    printf("Digite as tres notas do aluno:");
    scanf("%f %f %f", &nota_1, &nota_2, &nota_3); // le as tres notas 

    /* calculo da media ponderada: soma das tres sendo que a nota_3 tem peso dois e divisao
     da soma das tres pela soma dos pesos */

    media_ponderada = (nota_1 + nota_2 + (nota_3 * 2)) / 4; 

    // imprime se o aluno foi aprovado ou nao dependendo do calculo da media ponderada
    
    if(media_ponderada >= 60){
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }
    return 0;
}