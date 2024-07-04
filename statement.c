#include <stdio.h>

double quadrado(double num1)
{
    return num1 * num1;
}
void main()
{
    double num1 = quadrado(2.5);
    printf("%0.2lf", num1);
}