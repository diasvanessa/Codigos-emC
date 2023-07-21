/* 16. Faça um programa que encontre o conjunto de 5 dígitos consecutivos na sequência abaixo
que gere o maior produto:
7316717653133062491922511967442657474235534919493496983520312774506326239578
3180169848018694788518438586156078911294949545950173795833195285320880551112
5406987471585238630507156932909632952274430435576689664895044524452316173185
6403098711121722383113622298934233803081353362766142828064444866452387493035
8907296290491560440772390713810515859307960866701724271218839987979087922749
2190169972088809377665727333001053367881220235421809751254540594752243525849
0771167055601360483958644670632441572215539753697817977846174064955149290862
5693219784686224828397224137565705605749026140797296865241453510047482166370
4844031998900088952434506585412275886668811642717147992444292823086346567481
3919123162824586178664583591245665294765456828489128831426076900422421902267
1055626321111109370544217506941658960408071984038509624554443629812309878799
2724428490918884580156166097919133875499200524063689912560717606058861164671
0940507754100225698315520005593572972571636269561882670428252483600823257530*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530";
    
    int i, produto = 1, tamanho, maior_produto = 0, j;

    tamanho = strlen(str);

    for (i = 0; i < tamanho; i++)
    {

        // laco para realizar o produto entre 5 digitos da sequencia 
        for (j = i; j < i + 5; j++)
        {
            // realiza o produto, sendo que tira o 48 pra poder converter o caracter para o valor inteiro, segundo a tabela ascii
            produto *= str[j] - 48; 
        }

        // guarda o valor do maior produto se ele for maior que o produto anterior
        if (produto > maior_produto)
        {
            maior_produto = produto;
        }
        // reseta o valor do produto
        produto = 1;
    }   

    printf("maior produto: %d", maior_produto);
    return 0;
}