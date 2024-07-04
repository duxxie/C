#include <stdio.h>
#include <string.h>

struct Usuario
{
    char nome[20];
    char Nota;
};

int main()
{
    struct Usuario usu1 = {"Maria", 'F'}; 
    struct Usuario usu2 = {"Roger", 'F'}; 
    struct Usuario usu3 = {"Lucas", 'B'}; 
    struct Usuario usu4 = {"Ambatu", 'A'};

    struct Usuario estudantes[] = {usu1, usu2, usu3, usu4};

    for (int i = 0; i < sizeof(estudantes) / sizeof(estudantes[0]); i++)
    {   
        printf("%-12s\t", estudantes[i].nome);
        printf("%c\n", estudantes[i].Nota);
    }  
}