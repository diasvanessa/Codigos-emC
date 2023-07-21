/*15. Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor
(máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual título
deseja buscar. Mostre os dados de todos os livros encontrados.*/

#include <stdio.h>
#include <string.h>

struct livro{

    char titulo[30];
    char autor[15];
    int ano;
};

typedef struct livro livro;

int main(){
    livro livros[5];
    char livro_procurado[30];
    int i, r, verifica = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Dados do livro %d: \n", i+1);
        printf("Digite o titulo: ");
        fgets(livros[i].titulo, 30, stdin);
        fflush(stdin);
        printf("Digite o autor: ");
        fgets(livros[i].autor, 15, stdin);
        fflush(stdin);
        printf("Digite o ano:");
        scanf("%d", &livros[i].ano);
        fflush(stdin);
        printf("\n");
    }
    
    printf("Digite o titulo que deseja buscar: ");
    fgets(livro_procurado, 30, stdin);
    fflush(stdin);
    printf("\n");

    for (i = 0; i < 5; i++)
    {
        r = strcmp(livro_procurado, livros[i].titulo);
        if (r == 0){
            printf("Livro encontrado: ");
            printf("%s", livros[i].titulo);
            printf("%s", livros[i].autor);
            printf("%d\n", livros[i].ano);
            printf("\n");
            verifica+=1;
        }
    }
    if (verifica == 0)
    {
        printf("Livro nao encontrado!");
    }  
    return 0;
}