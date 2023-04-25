/*13. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo
representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá
ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’
será efetuada uma divisão.*/

#include <stdio.h>

void Menu_Calculadora();
void Calculadora_Basica(char Opcao_Usuario, float Num1, float Num2);
void Soma(float Numero1, float Numero2);
void Produto(float Numero1, float Numero2);
void Divisao(float Numero1, float Numero2);
void Subtracao(float Numero1, float Numero2);

int main(){
    float x, y;
    char Escolha;

    Menu_Calculadora();
    scanf("%c", &Escolha);

    printf("Digite o primeiro numero: ");
    scanf("%f", &x);
    printf("Digite o segundo numero: ");
    scanf("%f", &y);
    Calculadora_Basica(Escolha, x, y);
    return 0;
}

// funcao para imprimir um menu na tela
void Menu_Calculadora(){
    printf("Digite uma das opcoes: \n");
    printf("'+' para adicao\n");
    printf("'-' para subtracao\n");
    printf("'*' para produto\n");
    printf("'z' para divisao\n");
}

// funcao que fara os calculos e imprimira o resultado
void Calculadora_Basica(char Opcao_Usuario, float Num1, float Num2)
{
    switch (Opcao_Usuario)
    {
    case '+': Soma(Num1, Num2); break;
    case '-': Subtracao(Num1, Num2); break;
    case '*': Produto(Num1, Num2); break;
    case '/': Divisao(Num1, Num2); break;    
    default: printf("Caracter invalido!\n");
    }
}

// funcoes de soma, subtracao, produto e divisao
void Soma(float Numero1, float Numero2){
    printf("%.2f + %.2f = %.2f", Numero1, Numero2, Numero1+Numero2);
}
void Subtracao(float Numero1, float Numero2){
    printf("%.2f - %.2f = %.2f", Numero1, Numero2, Numero1-Numero2);
}
void Produto(float Numero1, float Numero2){
    printf("%.2f * %.2f = %.2f", Numero1, Numero2, Numero1*Numero2);
}
void Divisao(float Numero1, float Numero2){
    printf("%.2f / %.2f = %.2f", Numero1, Numero2, Numero1/Numero2);
}