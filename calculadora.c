#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main(void){

char operador;
double numero1;
double numero2;
double resultado;

printf("\nColoque um operador (+ - * /): ");
scanf("%c", &operador);

printf("\nInsira o numero 1");
scanf("%lf", &numero1);

printf("\nInsira o numero 2");
scanf("%lf", &numero2);

switch (operador)
{
    case '+':
    resultado = numero1 + numero2;
    printf("%0.1lf", resultado);
    break;
    
    case '-':
    resultado = numero1 - numero2;
    printf("%0.1lf", resultado);
    break;
    
    case '*':
    resultado = numero1 * numero2;
    printf("%0.1lf", resultado);
    break;

    case '/':
    resultado = numero1 / numero2;
    printf("%0.1lf", resultado);
    break;

    default:
    printf("insira um digito operador valido");
    break;
}
}