#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double calculo1;
    double calculo2;
    char operador;
    double resultado;

    printf("Calculadora 3000");
    printf("\n%.2lf", calculo1);

    printf("\n insira o tipo de calculo desejado(-, +, * ou /: )");
    scanf("%c", &operador);

    printf("\n insira o valor 1: ");
    scanf("%lf", &calculo1);

    printf("\nvalor1: R$%.2lf", calculo1);

    printf("insira o valor 2: ", &calculo2);
    scanf("%lf", &calculo2);

    printf("\nvalor2: R$%.2lf", calculo2);

    switch (operador)
    {
    case '-':
        resultado = calculo1 - calculo2;
        break;
    
    case '+':
        resultado = calculo1 + calculo2;
        break;

    case '*':
        resultado = calculo1 * calculo2;
        break;

    case '/':
        resultado = calculo1 / calculo2;
        break;
        
    default:
        printf("Não sabe ler??? Merrda");
        break;
    }
    
    

    printf("\nValor final: R$%.2lf", resultado);
    return 0;
}
