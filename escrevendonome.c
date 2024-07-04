#include <stdio.h>
#include <string.h>

int main(void)
{
    int idade;
    char nome[40];

    printf("qual seu nome?");
    fgets(nome, 40, stdin);

    nome[strlen(nome)-1]='\0';

    printf("qual sua idade?");
    scanf("%d", &idade);

    printf("meu nome %s e minha idade %d", nome, idade);
    return 0; 
}