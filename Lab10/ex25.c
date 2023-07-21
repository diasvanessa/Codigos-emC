/*25.Faça um programa gerenciar uma agenda de contatos. Para cada
contato armazene o nome, o telefone e o aniversário (dia e mês). O
programa deve permitir
 inserir contato;
 remover contato;
 pesquisar um contato pelo nome;
 listar todos os contatos;
 listar os contatos cujo nome inicia com uma dada letra;
 imprimir os aniversariantes do mês.
Sempre que o programa for encerrado, os contatos devem ser
armazenados em um arquivo binário. Quando o programa iniciar, os
contatos devem ser inicializados com os dados contidos neste arquivo
binário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    char telefone[15];
    int dia_aniversario;
    int mes_aniversario;
} Contato;

void inserirContato(Contato* agenda, int* numContatos) {
    if (*numContatos >= 100) {
        printf("A agenda está cheia!\n");
        return;
    }

    Contato novoContato;
    printf("Digite o nome: ");
    scanf("%s", novoContato.nome);
    printf("Digite o telefone: ");
    scanf("%s", novoContato.telefone);
    printf("Digite o dia de aniversário: ");
    scanf("%d", &novoContato.dia_aniversario);
    printf("Digite o mês de aniversário: ");
    scanf("%d", &novoContato.mes_aniversario);

    agenda[*numContatos] = novoContato;
    (*numContatos)++;
    printf("Contato inserido com sucesso!\n");
}

void removerContato(Contato* agenda, int* numContatos) {
    char nome[50];
    printf("Digite o nome do contato a ser removido: ");
    scanf("%s", nome);

    int i, j;
    int contatoEncontrado = 0;

    for (i = 0; i < *numContatos; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            contatoEncontrado = 1;
            break;
        }
    }

    if (contatoEncontrado) {
        for (j = i; j < *numContatos - 1; j++) {
            agenda[j] = agenda[j + 1];
        }
        (*numContatos)--;
        printf("Contato removido com sucesso!\n");
    } else {
        printf("Contato não encontrado!\n");
    }
}

void pesquisarContato(Contato* agenda, int numContatos) {
    char nome[50];
    printf("Digite o nome do contato a ser pesquisado: ");
    scanf("%s", nome);

    int i;
    int contatoEncontrado = 0;

    for (i = 0; i < numContatos; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            contatoEncontrado = 1;
            break;
        }
    }

    if (contatoEncontrado) {
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %s\n", agenda[i].telefone);
        printf("Aniversário: %d/%d\n", agenda[i].dia_aniversario, agenda[i].mes_aniversario);
    } else {
        printf("Contato não encontrado!\n");
    }
}

void listarContatos(Contato* agenda, int numContatos) {
    if (numContatos == 0) {
        printf("A agenda está vazia!\n");
        return;
    }

    printf("Lista de contatos:\n");
    for (int i = 0; i < numContatos; i++) {
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %s\n", agenda[i].telefone);
        printf("Aniversário: %d/%d\n", agenda[i].dia_aniversario, agenda[i].mes_aniversario);
        printf("---------------------\n");
    }
}

void listarContatosPorLetra(Contato* agenda, int numContatos, char letra) {
    printf("Contatos cujo nome inicia com a letra %c:\n", letra);
    int contatoEncontrado = 0;

    for (int i = 0; i < numContatos; i++) {
        if (agenda[i].nome[0] == letra) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("Aniversário: %d/%d\n", agenda[i].dia_aniversario, agenda[i].mes_aniversario);
            printf("---------------------\n");
            contatoEncontrado = 1;
        }
    }

    if (!contatoEncontrado) {
        printf("Nenhum contato encontrado!\n");
    }
}

void imprimirAniversariantesMes(Contato* agenda, int numContatos, int mes) {
    printf("Aniversariantes do mês %d:\n", mes);
    int contatoEncontrado = 0;

    for (int i = 0; i < numContatos; i++) {
        if (agenda[i].mes_aniversario == mes) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("Aniversário: %d/%d\n", agenda[i].dia_aniversario, agenda[i].mes_aniversario);
            printf("---------------------\n");
            contatoEncontrado = 1;
        }
    }

    if (!contatoEncontrado) {
        printf("Nenhum aniversariante encontrado para este mês!\n");
    }
}

void salvarAgenda(Contato* agenda, int numContatos) {
    FILE* arquivo = fopen("agenda.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita!\n");
        return;
    }

    fwrite(&numContatos, sizeof(int), 1, arquivo);
    fwrite(agenda, sizeof(Contato), numContatos, arquivo);

    fclose(arquivo);
}

void carregarAgenda(Contato* agenda, int* numContatos) {
    FILE* arquivo = fopen("agenda.bin", "rb");
    if (arquivo == NULL) {
        printf("Arquivo de agenda não encontrado.\n");
        return;
    }

    fread(numContatos, sizeof(int), 1, arquivo);
    fread(agenda, sizeof(Contato), *numContatos, arquivo);

    fclose(arquivo);
}

int main() {
    Contato agenda[100];
    int numContatos = 0;

    carregarAgenda(agenda, &numContatos);

    int opcao;
    do {
        printf("Menu:\n");
        printf("1. Inserir contato\n");
        printf("2. Remover contato\n");
        printf("3. Pesquisar contato\n");
        printf("4. Listar todos os contatos\n");
        printf("5. Listar contatos por letra\n");
        printf("6. Imprimir aniversariantes do mês\n");
        printf("0. Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirContato(agenda, &numContatos);
                break;
            case 2:
                removerContato(agenda, &numContatos);
                break;
            case 3:
                pesquisarContato(agenda, numContatos);
                break;
            case 4:
                listarContatos(agenda, numContatos);
                break;
            case 5: {
                char letra;
                printf("Digite a letra: ");
                scanf(" %c", &letra);
                listarContatosPorLetra(agenda, numContatos, letra);
                break;
            }
            case 6: {
                int mes;
                printf("Digite o mês: ");
                scanf("%d", &mes);
                imprimirAniversariantesMes(agenda, numContatos, mes);
                break;
            }
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }

        printf("\n");

    } while (opcao != 0);

    salvarAgenda(agenda, numContatos);

    return 0;
}
