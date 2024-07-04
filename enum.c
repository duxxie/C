#include <stdio.h>

enum Dia{Dom = 1, Seg = 2, Ter = 3, Qua = 4, Qui = 5, Sex = 6, Sab = 7};

int main()
{
    enum Dia hoje = Seg;

    if(hoje == Dom || hoje == Sab)
    {
        printf("Amem");
    }
    else
    {
        printf("Naaaaaaooo");
    }
}