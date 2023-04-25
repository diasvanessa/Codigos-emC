/*15. Crie um programa que receba três valores (obrigatoriamente maiores que zero),
representando as medidas dos três lados de um triângulo. Elabore funções para:
a) Determinar se eles lados formam um triângulo, sabendo que:
- O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados.
b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo
que:
- Chama-se equilátero o triângulo que tem três lados iguais;
- Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
- Recebe o nome de escaleno o triângulo que tem os três lados diferentes.*/

#include <stdio.h>

void Tipo_Triangulo(int Lado1, int Lado2, int Lado3);

int main(){
    int Lado1_Usuario, Lado2_Usuario, Lado3_Usuario;
    printf("Digite o primeiro lado do triangulo:");
    scanf("%d", &Lado1_Usuario);
    printf("Digite o segundo lado do triangulo:");
    scanf("%d", &Lado2_Usuario);
    printf("Digite o terceiro lado do triangulo:");
    scanf("%d", &Lado3_Usuario);
    Tipo_Triangulo(Lado1_Usuario, Lado2_Usuario, Lado3_Usuario);
    return 0;
}

void Tipo_Triangulo(int Lado1, int Lado2, int Lado3){

    if ((Lado1 > 0) && (Lado2 > 0) && (Lado3 > 0))
    {
        if ((Lado1 < Lado2+Lado3) && (Lado2 < Lado1+Lado3) && (Lado3 < Lado1+Lado2))
    {
            if ((Lado1 == Lado2) && (Lado1 == Lado3) && (Lado2 == Lado3))
            {
                printf("Esse eh um triangulo equilatero!\n");
            }
            else if ((Lado1 != Lado2) && (Lado1 != Lado3) && (Lado2 != Lado3))
            {
                printf("Esse eh um triangulo escaleno!\n");
            } 
            else
            {
                printf("Esse eh um triangulo isoceles!\n");
            }
    }
        else
        {
            printf("Valores nao formam um triangulo valido!\n");
        }
    }
    else
    {
        printf("Digite valores maiores que 0!\n");
    } 
}