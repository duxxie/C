#include <stdio.h>
#include <math.h>

int main()
{

    float A;
    float B;
    float C;

    printf("digite o valor de A do triangulo: ");
    scanf("%f", &A);

    printf("digite o valor de B do triangulo: ");
    scanf("%f", &B);

    C = sqrt(A*A + B*B);

    printf("Hipotenusa = %f", C);

    return 0;
}