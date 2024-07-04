#include <stdio.h>
// Palavra chave que dá a um tipo de dados existente um "nome"
typedef struct
{
    char Nome[25];
    int Idade;
    char cor[8];
}Usuario;


int main()
{
    int cota;
    Usuario usu1 = {"Marian", 18, "Preto"};
    Usuario usu2 = {"Rogerio", 35, "Preto"};
    Usuario usu3 = {"Jeniffer", 24, "Branco"};
    Usuario usu4 = {"Yoshida", 16, "Amarelo"};


    
    printf("%s ", usu1.Nome);
    printf("%i ", usu1.Idade);
    printf("%s ", usu1.cor);
    printf("\n");

    printf("%s ", usu2.Nome);
    printf("%i ", usu2.Idade);
    printf("%s ", usu2.cor);
    printf("\n");

    printf("%s ", usu3.Nome);
    printf("%i ", usu3.Idade);
    printf("%s ", usu3.cor);
    printf("\n");

    printf("%s ", usu4.Nome);
    printf("%i ", usu4.Idade);
    printf("%s ", usu4.cor);
    printf("\n");
}