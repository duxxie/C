#include <stdio.h>
#include <string.h>

int main()
{
    char nome[25];

    printf("\nQual seu nome?: ");
    fgets(nome, 25, stdin);
    nome[strlen(nome) - 1] = '\0';

    while(strlen(nome) == 0)
    {
        printf("\nCaractere nao reconhecido");
        printf("\nQual seu nome?: ");
        fgets(nome, 25, stdin);
        nome[strlen(nome)-1] = '\0';
    }

    printf("ola %s", nome);

    return 0;
}