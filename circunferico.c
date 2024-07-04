#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
double PI = 3.14;
double radius;
double area;
double circunference;

// Circle circunference

// Circle Area:

scanf("%lf", &radius);

area = PI * radius * radius;
circunference = 2 * PI * radius;

printf("\ncircunferencia de: %0.2lf", circunference);
printf("\n\nArea de: %0.2lf", area);

}