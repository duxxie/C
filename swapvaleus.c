#include <string.h>
#include <stdio.h>
// Troca entre dois valores X e Y
int main()
{
    char x[15] = "water";
    char y[15] = "lemonade";
    char temp[15];
/* quando trabalhando com arrays[] não é possível registrar valores.
basicamente, este modo não funciona *neste* caso.
    temp = x;
    x = y;
    y = temp;
*/
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);
}