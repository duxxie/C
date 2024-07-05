#include <stdio.h>

void printIdade(int *pIdade)
{
    printf("voce tem %d anos\n", *pIdade);
}

int main()
{
    //pointer = uma "váriavel" que armazena um endereço a memoria para outra variavel, array, etc. Algumas taréfas podem ser mais fáceis com pointers.

    int idade = 21;
    int *pIdade = &idade;

    printf("endereco de idade: %p\n", &idade);
    printf("valor da pIdade: %p\n", pIdade);

    printf("tamanho de idade: %d bytes\n", sizeof(idade));
    printf("tamanho de pIdade: %d bytes\n", sizeof(pIdade));

    printf("valor da idade: %d\n", idade);
    printf("valor do endereco armazenado: %d\n", *pIdade);

    printIdade(*pIdade);
}