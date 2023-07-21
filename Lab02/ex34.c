/*34. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela
abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.
NOTA 			CONCEITO (ATÉ 20 FALTAS) CONCEITO (MAIS DE 20 FALTAS)
9.0 até 10.0	 		A 				    B
7.5 até 8.9				B 			 	    C
5.0 até 7.4 			C 				    D
4.0 até 4.9 			D 				    E
0.0 até 3.9 			E 				    E*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    // define as variaveis e atribui a elas a quantidade de faltas e a nota digitada pelo usuario
    int Faltas;
    float Nota;
    printf("Digite a nota do aluno: ");
    scanf("%f", &Nota);
    printf("Digite o numero de faltas: ");
    scanf("%d", &Faltas);

    // condicionais para imprimir qual o conceito do aluno

    // nota entre 9 e 10
    if((Nota >= 9.0) && (Nota <= 10.00)){
        if(Faltas < 20){
            printf("Aluno Conceito A\n");
        } 
        else if (Faltas >= 20){
            printf("Aluno Conceito B\n");
        }
    }
    // nota entre 7.5 e 8.9
    else if((Nota >= 7.5) && (Nota <= 8.99)){
        if(Faltas < 20){
            printf("Aluno Conceito B\n");
        }
        else if (Faltas >= 20){
            printf("Aluno Conceito C\n");
        }
    }

    // nota entre 5 e 7.4
    else if ((Nota >= 5.0) && (Nota <= 7.49)){
        if(Faltas < 20){
            printf("Aluno Conceito C\n");
        }
        else if (Faltas >= 20){
            printf("Aluno Conceito D\n");
        }
    }
    
    // nota entre 4 e 4.9
    else if((Nota >= 4.0) && (Nota <= 4.99)){
        if(Faltas < 20){
            printf("Aluno Conceito D\n");
        }
        else if (Faltas >= 20){
            printf("Aluno Conceito E\n");
        }
    }

    // nota entre 0 e 3.9
    else if((Nota >= 0) && (Nota <= 3.99)){
        if(Faltas < 20){
            printf("Aluno Conceito E\n");
        }
        else if (Faltas >= 20){
            printf("Aluno Conceito E\n");
        }
    } 

    // caso usuario nao digite valores de notas validos
    else{
        printf("Digite valores validos!");
    }
    return 0;
}

