#include<stdio.h>

int main()
{
    // array é uma estrutura que pode armazenar vários valores
    double prices[]={5.0, 10.0, 15.0, 25.0, 20.0};

    printf("$%0.2lf", prices[1]);

    // OU

    double preco[5];

    preco[0] = 5.0;
    preco[1] = 10.0;
    preco[2]= 15.0;
    preco[3]= 25.0;
    preco[4]= 20.0;

    printf("\n$%.2lf", preco[2]);


    double looppreco[] = {1, 2, 3, 4, 5}; // faz um loop para printar todos os valores

    printf("%lf", looppreco);

    for(int i = 0; i < i; i++)
    {
        printf("$%.2lf\n", looppreco[i]);
    }

    double numloop[] = {1, 2, 3, 4, 5}; // mostra o número de bytes usados

    printf("%d bytes\n" , sizeof(numloop));

    /*
    for(int i = 0; i < sizeof(numloop)/sizeof(numloop[0]); i++)
    {
        printf("$%.2lf\n", numloop[i]);
    }       //
    */

    return 0;
}