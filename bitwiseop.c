#include <stdio.h>

int main()
{
    /*&and; | or; ^ Xor; >> Right Shift; << left Shift*/

    int x = 6;  //00000110
    int y = 12; //00001100
    int z = 0;  //00000000

    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);
    
    z = x ^ y;
    printf("OR = %d\n", z);

    z = x << y;
    printf("OR = %d\n", z);

    z = x >> y;
    printf("OR = %d\n", z);

    return 0;
}