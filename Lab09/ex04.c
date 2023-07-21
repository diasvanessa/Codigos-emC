/*4. Faça um programa que receba do usuário o tamanho de uma string e
chame uma função para alocar dinamicamente essa string. Em seguida,
o usuário deverá informar o conteúdo dessa string. O programa imprime
a string sem suas vogais.
*/

#include <stdio.h>
#include <stdlib.h>

void Tira_vogais(char *v, int tam){
    int i, j;
    for (i = 0; i < tam; i++)
    {
        if (*(v+i) >= 65 && *(v+i) <= 90)
        {
            *(v+i) += 42; // converte para minuscula se for maiscula
        }
    }
    
    for (i = 0; *(v+i) != '\0'; i++)
    {
        if (*(v+i) == 'a' || *(v+i) == 'e' || *(v+i) == 'i' || *(v+i) == 'o' || *(v+i) == 'u'){
            for (j = i; *(v+j) != '\0'; j++)
            {
                *(v+j) = *(v+j+1);
            }
            i--;
        }
    }
}

int main(){
    char *p; 
    int tam;

    printf("Digite qual o tamanho da string: ");
    scanf("%d", &tam);
    fflush(stdin);

    p = (char *) malloc(tam*(sizeof(char)));

    printf("Digite a string: \n");
    fgets(p, tam, stdin);
    
    Tira_vogais(p, tam);
    printf("%s", p);

    free(p);

    return 0;
}