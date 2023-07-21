/*12.Considere um cadastro de produtos de um estoque, com as seguintes
informações para cada produto:
- Código de identificação do produto: representado por um valor
inteiro
- Nome do produto: com até 50 caracteres
- Quantidade disponível no estoque: representado por um número
inteiro
- Preço de venda: representado por um valor real

a) Defina uma estrutura, denominada produto, que tenha os campos
apropriados para guardar as informações de um produto;
b) Crie um conjunto de N produtos (N é um valor fornecido pelo usuário)
e peca ao usuário para entrar com as informações de cada produto;
c) Encontre o produto com o maior preço de venda;
d) Encontre o produto com a maior quantidade disponível no estoque.
*/

#include <stdio.h>
#include <stdlib.h>

struct produto{
    int cod_id;
    char Nome[50];
    int quant_disp;
    float preco;
};

typedef struct produto produto;

int main(){
    produto *p;
    int num_produtos, i, maior_preco, maior_quant;

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &num_produtos);
    fflush(stdin);

    p = (produto *) malloc(num_produtos*(sizeof(produto)));

    printf("Digite as informacoes do produto: \n");
    for (i = 0; i < num_produtos; i++)
    {
        printf("Produto %d: \n", i+1);
        printf("Codigo de Identificacao: \n");
        scanf("%d", &p[i].cod_id);
        fflush(stdin);
        printf("Nome: \n");
        fgets(p[i].Nome, 50, stdin);
        fflush(stdin);
        printf("Quantidade disponivel: \n");
        scanf("%d", &p[i].quant_disp);
        fflush(stdin);
        printf("Preco de venda: \n");
        scanf("%f", &p[i].preco);
        fflush(stdin);
        printf("\n");
    }
    
    maior_preco = p[0].preco;
    maior_quant = p[0].quant_disp;

    for (i = 1; i < num_produtos; i++)
    {
        if (p[i].preco > maior_preco)
        {
            maior_preco = p[i].preco;
        }
        if (p[i].quant_disp > maior_quant)
        {
            maior_quant = p[i].quant_disp;
        }
    }
    
    for (i = 0; i < num_produtos; i++)
    {
        if (p[i].preco == maior_preco)
        {
            printf("Produto de maior preco: \n");
            printf("ID: %d\n", p[i].cod_id);
            printf("NOME: %s", p[i].Nome);
            printf("QUANTIDADE DISPONIVEL: %d\n", p[i].quant_disp);
            printf("PRECO: %.2f\n", p[i].preco);
            printf("\n");
        }
        if (p[i].quant_disp == maior_quant)
        {
            printf("Produto em maior quantidade: \n");
            printf("ID: %d\n", p[i].cod_id);
            printf("NOME: %s", p[i].Nome);
            printf("QUANTIDADE DISPONIVEL: %d\n", p[i].quant_disp);
            printf("PRECO: %.2f\n", p[i].preco);
            printf("\n");
        }
    }
    
    free(p);
    return 0;
}