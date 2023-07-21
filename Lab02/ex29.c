/*29. Faça uma prova de matemática para crianças que estão aprendendo a somar números
inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a
pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça
cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de
quantas vezes o aluno acertou.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    /*Variaveis que serao utilizadas, a variavel contador sera usada no while para que o loop
    seja realizado 5x, para que sejam feitas 5 perguntas pra criança; A variavel soma sera o resultado
    da soma dos dois numeros aleatorios que sao gerados pela funcao srand; A variavel resp_soma
    sera utilizada para guardar a resposta que foi dada pela crianca em cada uma das 5 perguntas.
    A variavel 'acertos' sera incrementada cada vez que a criança acertar a resposta*/

    int contador = 0, Soma = 0, num_aleatorio1, num_aleatorio2, Resp_Soma, acertos = 0;

    /* funcao com o objetivo de fazer com que os valores gerados 
    não se repitam, precisamos usar a função srand a fim de inicializar 
    a função rand com um valor “semente” para que se produza um valor aleatório na faixa determinada*/

    srand(time(NULL)); 

    /* laço para fazer 5 perguntas para a criança, pergunta uma vez, recebe a resposta e executa isso
    cinco vezes */

    while (contador < 5)
    {
        num_aleatorio1 = rand() % 100;
        num_aleatorio2 = rand() % 100;
        Soma = num_aleatorio1 + num_aleatorio2;
        printf("Qual o resultado da soma %d + %d = ?\n", num_aleatorio1, num_aleatorio2);
        scanf("%d", &Resp_Soma);
        if(Resp_Soma == Soma)
        {
            printf("Voce acertou!\n");
            acertos++;
        } else 
        {
            printf("Voce errou! A resposta correta eh:%d \n", Soma);
        }
        contador++;
    }
        printf("Voce acertou %d questoes!\n", acertos);
    return 0;
}