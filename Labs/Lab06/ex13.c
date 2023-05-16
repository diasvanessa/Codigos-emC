/*13. Peça ao usuário para digitar seus dados pessoais (Nome, Endereço, Data de Nascimento,
Cidade, CEP, e-mail), verifique se as informações de Data de Nascimento, CEP e e-mail fazem
sentido, e mostre ao usuário as informações, se estão todas corretas, ou mostre que alguma
informação estava errada.
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
    char endereco[50];
    char cpf[12];
    data nascimento;
    char email[50];
};

typedef struct dados_pessoais dados_pessoais;

int main(){
    dados_pessoais pessoa;
    int i, verifica = 0, j;

    printf("Digite o nome: ");
    fgets(pessoa.nome, 50, stdin);
    fflush(stdin);
    printf("Digite o endereco: ");
    fgets(pessoa.endereco, 50, stdin);
    fflush(stdin);
    printf("Digite o CPF: ");
    fgets(pessoa.cpf, 12, stdin);
    fflush(stdin);
    printf("Digite o email: ");
    fgets(pessoa.email, 50, stdin);
    fflush(stdin);
    printf("Digite a data de nascimento no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &pessoa.nascimento.dia, &pessoa.nascimento.mes, &pessoa.nascimento.ano);
    fflush(stdin);

    for (i = 0; i < 1; i++)
    {
        printf("Nome: %s", pessoa.nome);
        printf("Endereco: %s", pessoa.endereco);
        
        for (j = 0; j < 11; j++)
        {
            if (pessoa.cpf[j] >= 48 && pessoa.cpf[j] <= 57 )
            {
                verifica += 1;
            }
            else
            {
                verifica -= 1;
            }
        }
        if (verifica == 11)
        {
            printf("CPF: %s\n", pessoa.cpf);
        }
        else{
            printf("A informacao do CPF esta incorreta!\n");
        }
        
        verifica = 0;

        for (j = 0; pessoa.email[j] != '\0'; j++)
        {
            if (pessoa.email[j] == '@')
            {
                verifica += 1;
            }   
        }

        if (verifica == 1)
        {
            printf("E-mail: %s", pessoa.email);
        }

        else{
            printf("A informacao do e-mail esta incorreta!\n");
        }
        
        if (pessoa.nascimento.ano % 4 == 0 || pessoa.nascimento.ano % 100 == 0 || pessoa.nascimento.ano % 400 == 0) // ano bissexto?
        {
            if (pessoa.nascimento.mes >= 01 && pessoa.nascimento.mes <= 12)
            {
                if (pessoa.nascimento.mes == 2)
                {
                    if (pessoa.nascimento.dia >= 1 && pessoa.nascimento.dia <= 29)
                    {
                        printf("A data de nascimento eh: %d/%d/%d", pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);
                    }
                }
                else if (pessoa.nascimento.mes == 4 || pessoa.nascimento.mes == 6 || pessoa.nascimento.mes == 9 || pessoa.nascimento.mes == 11)
                {
                    if (pessoa.nascimento.dia >= 1 && pessoa.nascimento.dia <= 30)
                    {
                        printf("A data de nascimento eh: %d/%d/%d", pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);
                    }
                }
                else {
                    if (pessoa.nascimento.dia >= 1 && pessoa.nascimento.dia <= 31)
                    {
                        printf("A data de nascimento eh: %d/%d/%d", pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);
                    }
                }
            }
            else{
                printf("A data de nascimento esta incorreta!\n");
            }
        }
        else 
        {
            if (pessoa.nascimento.mes >= 01 && pessoa.nascimento.mes <= 12)
            {
                if (pessoa.nascimento.mes == 2)
                {
                    if (pessoa.nascimento.dia >= 1 && pessoa.nascimento.dia <= 28)
                    {
                        printf("A data de nascimento eh: %d/%d/%d", pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);
                    }
                }
                else if (pessoa.nascimento.mes == 4 || pessoa.nascimento.mes == 6 || pessoa.nascimento.mes == 9 || pessoa.nascimento.mes == 11)
                {
                    if (pessoa.nascimento.dia >= 1 && pessoa.nascimento.dia <= 30)
                    {
                        printf("A data de nascimento eh: %d/%d/%d", pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);
                    }
                }
                else {
                    if (pessoa.nascimento.dia >= 1 && pessoa.nascimento.dia <= 31)
                    {
                        printf("A data de nascimento eh: %d/%d/%d", pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);
                    }
                }
            }
            else{
                printf("A data de nascimento esta incorreta!\n");
            }
        }
    }

    return 0;
}
