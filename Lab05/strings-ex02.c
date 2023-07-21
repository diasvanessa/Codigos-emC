/*2. Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo:
“0011001” -> 3
*/

#include <stdio.h>
#include <string.h>

int main(){
    char numeros_um[20]; 
    int tamanho, i, quant_um = 0;

    // pega uma string de numeros do usuario
    printf("Digite uma sequencia de numeros:");
    fgets(numeros_um, 20, stdin);

    // checa qual tamanho dessa string
    tamanho = strlen(numeros_um);

    // loop pra checar quais elementos dessa string sao iguais a 1
    for (i = 0; i < tamanho; i++)
    {
        if (numeros_um[i] == '1')
        {
            quant_um += 1;
        }
    }
    printf("A quantidade de '1' nessa string eh = %d", quant_um);
    return 0;
}