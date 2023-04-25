/*18. Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o
resultado de x^z para o programa principal. Atenção não utilize nenhuma função pronta de
exponenciação.*/

#include <stdio.h>

float Potencia_Numero(int Base, int Expoente);

int main(){
    int Base_Usuario, Expoente_Usuario;
    float Potencia_Calculada;
    printf("Digite a base da potencia: ");
    scanf("%d", &Base_Usuario);
    printf("Digite o expoente da potencia: ");
    scanf("%d", &Expoente_Usuario);
    Potencia_Calculada = Potencia_Numero(Base_Usuario, Expoente_Usuario);
    printf("O valor da potencia eh = %f", Potencia_Calculada);
    return 0;
}

// funcao de calculo de potencia
float Potencia_Numero(int Base, int Expoente){
    int i;
    float Potencia;
    
    // para expoentes maior/igual que 1
    if (Expoente >= 1)
    {
        Potencia = 1;
        for (i = 1; i <= Expoente; i++)
        {
            Potencia = Potencia * Base;            
        }
    }
    
    // para expoentes menores que 0
    else if (Expoente < 0)
    {
        Potencia = 1;
        for (; Expoente < 0; Expoente++)
        {
            Potencia = Potencia * Base;            
        }
        Potencia = 1.0 / Potencia;
    }

    // para expoente igual a 0
    else{
        Potencia = 1;
    }
    
    return Potencia;
}