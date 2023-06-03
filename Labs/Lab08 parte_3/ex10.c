/* 10 Crie uma função para somar dois arrays. Esta função deve receber dois
arrays e retornar a soma em um terceiro array. Caso o tamanho do primeiro
e segundo array seja diferente então a função retornará ZERO (0). Caso a
função seja concluída com sucesso a mesma deve retornar o valor UM (1).
Utilize aritmética de ponteiros para manipulação do array. */

#include <stdio.h>

void SomaVetores(int *v1, int *v2, int *v_somado, int tam){
    int i;
    for (i = 0; i < tam; i++)
    {
        *(v_somado+i) = *(v1+i) + *(v2+1); 
    }
    
}

int main(){
    int vet1[10], vet2[10], vet_somado[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor para vet1[%d]: ", i);
        scanf("%d", &vet1[i]);
        printf("Digite um valor para vet2[%d]: ", i);
        scanf("%d", &vet2[i]);
    }
    
    SomaVetores(vet1, vet2, vet_somado, 10);
    
    printf("Vetor somado: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(vet_somado+i));
    }
    
    return 0;
}