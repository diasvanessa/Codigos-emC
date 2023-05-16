/*5. Considerando a estrutura
struct vetor {
float a;
float b;
float c;
};
para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores.*/

#include <stdio.h>

struct vetor{
    float a;
    float b;
    float c;
};

typedef struct vetor vetor;

int main(){
    vetor vetores[2], resultante;
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("Digite a coordenada x do %d vetor: ", i+1);
        scanf("%f", &vetores[i].a);
        printf("Digite a coordenada y do %d vetor: ", i+1);
        scanf("%f", &vetores[i].b);
        printf("Digite a coordenada z do %d vetor: ", i+1);
        scanf("%f", &vetores[i].c);
    }
    
    resultante.a = vetores[0].a + vetores[1].a; 
    resultante.b = vetores[0].b + vetores[1].b; 
    resultante.c = vetores[0].c + vetores[1].c;

    printf("O vetor resultante tem coordenadas: %f %f %f\n", resultante.a, resultante.b, resultante.c); 
    
    return 0;
}