#include <stdio.h>
// função de prototipos
// declaração de função sem o corpo antes do main()
// assegura que chamadas de funções são chamadas com o argumento correto
// argumentos faltantes resultarão em resultados inesperados

// pode ser necessário em alguns compiladores: void hello(char[], int);

int main()
{
    char name[] ="Gabriel";
    int age = 18;

    hello(name, age);
    return 0;
}

void hello(char name[], int age)
{
    printf("\nOla %s", name);
    printf("\nVoce tem %d anos", age);
}