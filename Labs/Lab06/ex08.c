/*8. Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de
Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30
caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura
e exibidos na tela.
*/

#include <stdio.h>

struct data{
    int dia;
    int mes;
    int ano;
};

typedef struct data data;

struct dados_pessoais{
    char nome[50];
    int idade;
    char sexo;
    char cpf[12];
    data nascimento;
};

typedef struct dados_pessoais dados_pessoais;

struct dados_funcionarios{
    dados_pessoais funcionario;
    int setor;
    int salario;
    char cargo[30];
};

typedef struct dados_funcionarios dados_funcionarios;

int main(){
    dados_funcionarios funcionario[2];
    int i;

    // le dados dos funcionarios
    for (i = 0; i < 2; i++)
    {
        printf("Digite as informacoes do %d funcionario: \n", i+1);
        printf("Nome: ");
        fgets(funcionario[i].funcionario.nome, 50, stdin);
        fflush(stdin);
        printf("CPF: ");
        fgets(funcionario[i].funcionario.cpf, 10, stdin);
        fflush(stdin);
        printf("Idade: ");
        scanf("%d", &funcionario[i].funcionario.idade);
        fflush(stdin);
        printf("Sexo(M/F): ");
        scanf("%c", &funcionario[i].funcionario.sexo);
        fflush(stdin);
        printf("Data de nascimento no formato dd/mm/aaaa: ");
        scanf("%d/%d/%d", &funcionario[i].funcionario.nascimento.dia,&funcionario[i].funcionario.nascimento.mes,&funcionario[i].funcionario.nascimento.ano);
        fflush(stdin);
        printf("Codigo do Setor: ");
        scanf("%d", &funcionario[i].setor);
        fflush(stdin);
        printf("Cargo: ");
        fgets(funcionario[i].cargo, 30, stdin);
        fflush(stdin);
        printf("Salario: ");
        scanf("%d", &funcionario[i].salario);
        fflush(stdin);
        printf("\n");
    }
    
    // imprime os dados dos funcionarios
    printf("Dados dos funcionarios: \n");
    for (i = 0; i < 2; i++)
    {
        printf("Funcionario %d: \n", i+1);
        printf("Nome: %s", funcionario[i].funcionario.nome);
        printf("CPF: %s", funcionario[i].funcionario.cpf);
        printf("Idade: %d\n", funcionario[i].funcionario.idade);
        printf("Sexo: %c\n",funcionario[i].funcionario.sexo);
        printf("Data de nascimento: %d/%d/%d\n", funcionario[i].funcionario.nascimento.dia, funcionario[i].funcionario.nascimento.mes, funcionario[i].funcionario.nascimento.ano);
        printf("Codigo do setor: %d\n", funcionario[i].setor);
        printf("Cargo: %s", funcionario[i].cargo);
        printf("Salario: R$%d\n", funcionario[i].salario);
        printf("\n");
    }
    return 0;
}