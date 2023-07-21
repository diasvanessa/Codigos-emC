/*7. Faça um programa que converta coordenadas polares para cartesianas:
- Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a)
em radianos;
- Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo
que x = r * cos(a) e y = r * sin(a).
No programa principal, leia um ponto em coordenada polar e mostre as coordenadas do
ponto gerado no plano cartesiano.
*/

#include <stdio.h>
#include <math.h>

struct ponto_polar{
    float raio;
    float arg;
};

typedef struct ponto_polar ponto_polar;

struct ponto_cart{
    float x;
    float y;
};

typedef struct ponto_cart ponto_cart;

int main(){
    ponto_polar coord1;
    ponto_cart coord2;

    printf("Digite a o raio do ponto polar: ");
    scanf("%f", &coord1.raio);
    printf("Digite o argumento do ponto polar: ");
    scanf("%f", &coord1.arg);

    coord2.x = coord1.raio * cos(coord1.arg);
    coord2.y = coord1.raio * sin(coord1.arg);

    printf("As coordenadas do ponto no plano cartesiano sao: %f,%f", coord2.x, coord2.y);
    return 0;
}