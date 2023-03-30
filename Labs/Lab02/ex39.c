/*39. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
salário terão um aumento proporcionalmente maior do que os funcionários com um salário
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus
adicional de salário. Faça um programa que leia:
- o valor do salário atual do funcionário;
- o tempo de serviço desse funcionário na empresa (número de anos de trabalho na
empresa).
Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do
salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum
aumento.

Salário Atual  			Reajuste (%) 		Tempo de Serviço 			  Bônus
Até 500,00 					25% 		    Abaixo de 1 ano 		     Sem bônus
Até 1000,00 				20% 		    De 1 a 3 anos 				 100,00
Até 1500,00 				15% 		    De 4 a 6 anos 				 200,00
Até 2000,00 				10% 		    De 7 a 10 anos 				 300,00
Acima de 2000,00 			Sem reajuste 	Mais de 10 anos 			 500,00

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // define as variaveis e atribui a elas o salario atual do funcionario e o tempo de servico do mesmo
    float Salario_Atual, Novo_Salario;
    int Tempo_Servico;
    printf("Digite o salario atual do funcionario: R$ ");
    scanf("%f", &Salario_Atual);
    printf("Digite o tempo de servico do funcionario(em anos):");
    scanf("%d", &Tempo_Servico);

    // condicionais para imprimir o novo salario do funcionario
    // salario ate R$500.00 e tempo de servico < 1 ano, reajuste de 25% e nao tem bonus

    if((Salario_Atual > 0) && (Salario_Atual <= 500.00) && (Tempo_Servico < 1)){
        Novo_Salario = Salario_Atual * (1 + 0.25);
    } 
    // salario entre 500 e 1000 - reajuste de 20% 
    else if ((Salario_Atual > 500) && (Salario_Atual <= 1000))
    {
        // funcionario com direito a bonus de 100.00
        if((Tempo_Servico >= 1) && (Tempo_Servico <= 3)){
            Novo_Salario = (Salario_Atual * (1+0.20)) + 100.00;
        }
        // funcionario sem direito a bonus
        else{
            Novo_Salario = Salario_Atual * (1+0.20);
        }
    }
    // salario maior que 1000 e menor igual que 1500, reajuste de 15%
    else if ((Salario_Atual > 1000) && (Salario_Atual <= 1500))
    {
        // funcionario com direito a bonus de 200.00
        if ((Tempo_Servico >= 4) && (Tempo_Servico <= 6))
        {
            Novo_Salario = (Salario_Atual * (1 + 0.15)) + 200.00;
        }
        // funcionario sem direito a bonus
        else
        {
            Novo_Salario = Salario_Atual * (1 + 0.15);
        }
    }
    // salario maior que 1500 e menor igual que 2000 - reajuste de 10%
    else if ((Salario_Atual > 1500) && (Salario_Atual <= 2000))
    {
        // funcionario com direito a bonus de 300.00
        if((Tempo_Servico >= 7) && (Tempo_Servico <= 10))
        {
            Novo_Salario = (Salario_Atual * (1 + 0.10)) + 300;
        }
        // funcionario sem direito a bonus
        else
        {
            Novo_Salario = (Salario_Atual * (1 + 0.10));
        }
    }
    // funcionario com salario maior que 2000
    else if (Salario_Atual > 2000)
    {
        // funcionario com direito a bonus
        if (Tempo_Servico > 10)
        {
            Novo_Salario = Salario_Atual + 500;
        }
        else
        {
        // funcionario sem direito a bonus
            Novo_Salario = Salario_Atual;
        }
    }
    
    // imprime o novo salario de acordo com a condicao que foi verdadeira 
    if (Novo_Salario == Salario_Atual)
    {
        printf("Funcionario nao tera direito de aumento!\n");
    } else{
        printf("Novo salario de funcionario sera:R$ %.2f\n", Novo_Salario);
    }
    return 0; 
}