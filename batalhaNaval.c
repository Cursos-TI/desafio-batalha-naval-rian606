#include <stdio.h>
int main(){

    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
    // vetor linha

    int colunas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    //vetor coluna

    int mar[10][10] = {
        {0 ,0 ,3 ,3 ,3 ,0 ,0 ,0 ,3 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,0}, 
        {0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0},   //matriz 10 X 10
        {0 ,0 ,0 ,3 ,0 ,3 ,0 ,0 ,0 ,0},
        {0 ,0 ,3 ,0 ,0 ,3 ,0 ,0 ,0 ,0},
        {0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0}
    };

    printf("   %c %c %c %c %c %c %c %c %c %c\n ", linhas[0], linhas[1], linhas[2], linhas[3],
         linhas[4], linhas[5], linhas[6], linhas[7], linhas[8], linhas[9]);
        //print das linhas, como nao é necessario 
        //repeticao deixei fora do for

        for (int i = 0; i < 10; i++)
        {
            printf("%d", colunas[i]);

            for (int j = 0; j < 10; j++)// modifiquei o for, mais compacto e facil entendimento
            {
                printf(" %d", mar[i][j]);// exibicao das matrizes
            }
            printf("\n ");// apenas pra dar uma linha a cada matriz 
        }
        
    return 0;


}