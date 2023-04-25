/*11. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a
letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá
calcular a média ponderada, com pesos 5, 3 e 2.*/

#include <stdio.h>

void Letra_Media(char letra_media2, int nota1, int nota2, int nota3);
void Media_Ponderada(float nota1, float nota2, float nota3);
void Media_Aritmetica(float nota1, float nota2, float nota3);

int main(){
    int Nota1, Nota2, Nota3;
    char Media;
    printf("Digite A para a media aritmetica ou P para a media ponderada:");
    scanf("%c", &Media);
    printf("Digite a primeira nota:");
    scanf("%d", &Nota1);
    printf("Digite a segunda nota:");
    scanf("%d", &Nota2);
    printf("Digite a terceira nota:");
    scanf("%d", &Nota3);
    Letra_Media(Media, Nota1, Nota2, Nota3);
    return 0;
}

void Letra_Media(char letra_media2, int nota1, int nota2, int nota3){

    // caso usuario escolha media aritmetica 

    if (letra_media2 == 'A' || letra_media2 == 'a')
    {
        Media_Aritmetica(nota1, nota2, nota3);
    }

    // caso usuario escolha media ponderada
    
    else if (letra_media2 == 'P' || letra_media2 == 'p')
    {
        Media_Ponderada(nota1, nota2, nota3);
    }

}
void Media_Aritmetica(float nota1, float nota2, float nota3)
    {
        float Media_A;
        Media_A = (nota1 + nota2 + nota3) / 3;
        printf("A media das notas eh = %.2f\n", Media_A);
    }
void Media_Ponderada(float nota1, float nota2, float nota3)
    {
        float Media_P;
        Media_P = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
        printf("A media das notas eh = %.2f\n", Media_P);
    }