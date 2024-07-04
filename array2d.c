#include <stdio.h>
#include <string.h>

//Array em que cada elemento é um array inteiro, útil para matrix, grid, ou tabela de dados
int main()
{
/*    int numbers[2][3] = {{1,2,3},{4,5,6}};*/

    int numbers[2][3];

    int linhas = sizeof(numbers)/sizeof(numbers[0]);
    int colunas = sizeof(numbers[0])/sizeof(numbers[0][0]);
    printf("Linhas: %d\n", linhas);
    printf("Colunas: %d\n", colunas);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}