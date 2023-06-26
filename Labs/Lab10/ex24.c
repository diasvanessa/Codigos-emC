/*24.Implemente um controle simples de mercadorias em uma despensa
doméstica. Para cada produto armazene um código numérico, descrição
e quantidade atual. O programa deve ter opções para entrada e retirada
de produtos, bem como um relatório geral e um de produtos não
disponíveis. Armazene os dados em arquivo binário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
} Produto;

void adicionarProduto(FILE* arquivo) {
    Produto novoProduto;
    printf("Digite o código do produto: ");
    scanf("%d", &novoProduto.codigo);
    printf("Digite a descrição do produto: ");
    scanf(" %[^\n]", novoProduto.descricao);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &novoProduto.quantidade);

    fseek(arquivo, 0, SEEK_END);
    fwrite(&novoProduto, sizeof(Produto), 1, arquivo);
    printf("Produto adicionado com sucesso!\n");
}

void retirarProduto(FILE* arquivo) {
    int codigo;
    printf("Digite o código do produto que deseja retirar: ");
    scanf("%d", &codigo);

    FILE* arquivoTemp = fopen("temp.bin", "wb");
    Produto produto;

    while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
        if (produto.codigo == codigo) {
            int quantidade;
            printf("Digite a quantidade a ser retirada: ");
            scanf("%d", &quantidade);

            if (quantidade <= produto.quantidade) {
                produto.quantidade -= quantidade;
                fwrite(&produto, sizeof(Produto), 1, arquivoTemp);
                printf("Produto retirado com sucesso!\n");
            } else {
                printf("Quantidade insuficiente em estoque.\n");
            }
        } else {
            fwrite(&produto, sizeof(Produto), 1, arquivoTemp);
        }
    }

    fclose(arquivo);
    fclose(arquivoTemp);

    remove("estoque.bin");
    rename("temp.bin", "estoque.bin");

    arquivo = fopen("estoque.bin", "rb");
}

void relatorioGeral(FILE* arquivo) {
    Produto produto;
    printf("Relatório geral de produtos:\n");

    while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
        printf("Código: %d\n", produto.codigo);
        printf("Descrição: %s\n", produto.descricao);
        printf("Quantidade: %d\n", produto.quantidade);
        printf("----------------------\n");
    }
}

void produtosNaoDisponiveis(FILE* arquivo) {
    Produto produto;
    printf("Relatório de produtos não disponíveis:\n");

    while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
        if (produto.quantidade == 0) {
            printf("Código: %d\n", produto.codigo);
            printf("Descrição: %s\n", produto.descricao);
            printf("----------------------\n");
        }
    }
}

int main() {
    FILE* arquivo = fopen("estoque.bin", "ab+");
    int opcao;

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    do {
        printf("\nControle de Mercadorias\n");
        printf("----------------------\n");
        printf("1. Adicionar Produto\n");
        printf("2. Retirar Produto\n");
        printf("3. Relatório Geral\n");
        printf("4. Produtos Não Disponíveis\n");
        printf("0. Sair\n");
        printf("----------------------\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarProduto(arquivo);
                break;
            case 2:
                retirarProduto(arquivo);
                break;
            case 3:
                relatorioGeral(arquivo);
                break;
            case 4:
                produtosNaoDisponiveis(arquivo);
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    fclose(arquivo);
    return 0;
}
