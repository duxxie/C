#include <stdio.h>



int main()
{
    int max = findmax(3,4);

    printf("%d", max);

    return 0;
}

int findmax(int val1, int val2)
{
/*
    if(x > y) { return x; }
    else { return y; }
*/
// atalho para if/else quando definindo/retornando um valor
// (condition) ? value if true : value if false
    return(val1 > val2) ? val1 : val2;
}