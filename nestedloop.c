#include <stdio.h>
// loop dentro de outro loop

int main(){

    int linhas;
    int colunas;
    char simbolos;

    printf("\nInsira # de linhas: ");
    scanf("%d", &linhas);

    printf("Insira # de colunas : ");
    scanf("%d", &colunas);

    scanf("%c", &simbolos); // usado para tirar o \n que vem logo após no buffer

    printf("Enter a simbolos to use: ");
    scanf("%c", &simbolos);

    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            printf("%c", simbolos);
        }
        printf("\n");
    }
    return 0;
}