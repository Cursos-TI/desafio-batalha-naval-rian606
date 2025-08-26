#include <stdio.h>

int main(){

    int valor1, valor2; //valor modificavel (obs coloquei fora do for)

    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // vetor linha

    int colunas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //vetor coluna

    int mar[10][10] = {
        {0 ,0 ,3 ,3 ,3 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0},   //matriz 10 X 10
        {0 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0}
    };

    printf("   %c %c %c %c %c %c %c %c %c %c\n", linhas[0], linhas[1], linhas[2], linhas[3],
         linhas[4], linhas[5], linhas[6], linhas[7], linhas[8], linhas[9]); //print das linhas, como nao é necessario repeticao deixei fora do for

    for (valor1 = 0 ; valor1 < 9; valor1++) // abrindo for com suas especificaçoes
    {
        printf(" %d %d %d %d %d %d %d %d %d %d %d\n", colunas[valor1], mar[valor1][0], mar[valor1][1], mar[valor1][2], mar[valor1][3],
        mar[valor1][4], mar[valor1][5], mar[valor1][6], mar[valor1][7], mar[valor1][8], mar[valor1][9]);
    } //montando o codigo

     printf("%d %d %d %d %d %d %d %d %d %d %d\n", colunas[valor1], mar[valor1][0], mar[valor1][1], mar[valor1][2], mar[valor1][3],
        mar[valor1][4], mar[valor1][5], mar[valor1][6], mar[valor1][7], mar[valor1][8], mar[valor1][9]);
            //deixei a ultima linha fora apenas para encaixar corretamente o tabuleiro
    return 0;


}
