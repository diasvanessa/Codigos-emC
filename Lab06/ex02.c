/*2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
os dados em uma estrutura.
*/

#include <stdio.h>
#include <string.h>

struct Dados{
    char Nome[100];
    char endereco[100];
    int idade;
};

typedef struct Dados Dados;

int main(){
    Dados pessoa1;
    printf("Digite o nome: ");
    fgets(pessoa1.Nome, 100, stdin);
    fflush(stdin);
    printf("Digite a idade: ");
    scanf("%d", &pessoa1.idade);
    fflush(stdin);
    printf("Digite o endereco: ");
    fgets(pessoa1.endereco, 100, stdin);
    
    printf("Nome: %s", pessoa1.Nome);
    printf("Endereco: %s", pessoa1.endereco);
    printf("Idade: %d\n", pessoa1.idade);

    return 0;
}