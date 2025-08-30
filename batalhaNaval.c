#include <stdio.h>

#define linhas 5
#define colunas 5

int main(){

int matriz[linhas][colunas] ={ 
{0, 0, 0 ,0 ,0},
{0 ,0 ,0 ,0 ,0},
{0, 0, 0 ,0 ,0},
{0, 0, 0 ,0 ,0},
{0, 0, 0 ,0 ,0}
};
for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        matriz[0][2] = 1;
        matriz[1][1] = 1;
        matriz[1][2] = 1;
        matriz[1][3] = 1;
        matriz[1][2] = 1;
        matriz[2][0] = 1;
        matriz[2][1] = 1;
        matriz[2][2] = 1;
        matriz[2][3] = 1;
        matriz[2][4] = 1;

        printf(" %d", matriz[i][j]);
    }
    printf("\n");
}

printf("\n");

int matriz2[linhas][colunas] ={ 
{0, 0, 0 ,0 ,0},
{0 ,0 ,0 ,0 ,0},
{0, 0, 0 ,0 ,0},
{0, 0, 0 ,0 ,0},
{0, 0, 0 ,0 ,0}
};

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        matriz2[1][2] = 1;
        matriz2[2][0] = 1;
        matriz2[2][1] = 1;
        matriz2[2][2] = 1;
        matriz2[2][3] = 1;
        matriz2[2][4] = 1;
        matriz2[3][2] = 1;

        printf(" %d", matriz2[i][j]);
    }
    printf("\n");
}

printf("\n");

int matriz3[linhas][colunas] ={ 
{0, 0, 0 ,0 ,0},
{0 ,0 ,0 ,0 ,0},
{0, 0, 0 ,0 ,0},
{0, 0, 0 ,0 ,0},
{0, 0, 0 ,0 ,0}
};

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        matriz3[1][2] = 1;
        matriz3[2][1] = 1;
        matriz3[2][2] = 1;
        matriz3[2][3] = 1;
        matriz3[3][2] = 1;

        printf(" %d", matriz3[i][j]);
    }
    printf("\n");
}

return 0;
}