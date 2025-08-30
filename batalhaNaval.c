#include <stdio.h>
int main(){

    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
    // vetor linha

    int colunas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    //vetor coluna

    int mar[10][10] = {
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,1 ,0 ,0 ,0 ,0 ,1 ,0 ,0}, 
        {1 ,5 ,5 ,5 ,1 ,0 ,5 ,1 ,1 ,0},
        {0 ,0 ,1 ,0 ,0 ,5 ,1 ,1 ,1 ,1},
        {0 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0 ,0},   //matriz 10 X 10
        {0 ,0 ,0 ,0 ,0 ,0 ,1 ,3 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,1 ,1 ,5 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,1 ,3 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},
        {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0}
    };
    int alvo = mar[1][2];

    printf("  ");//espaço inicial 

        for(int i = 0; i < 10; i++)
        {
            printf(" %c", linhas[i]);// sempre que for verdadeiro adiciona um char
        }

        printf("\n");// pulando linha apenas

        for (int i = 0; i < 10; i++)
        {
            if (i < 9)
            {
                printf(" ");// sempre que i > 10 adiciona um espaço
            }
            
            printf("%d", colunas[i]);

            for (int j = 0; j < 10; j++)// modifiquei o for, mais compacto e facil entendimento
            { 
                printf(" %d", mar[i][j]);// exibicao das matrizes
            }
             printf("\n");// apenas pra dar uma linha a cada matriz
        }
        
    return 0;


}