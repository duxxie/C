#include <stdio.h>
#include <math.h>

int main()
{
    char nota;

    printf("Insira sua nota: ");
    scanf("%s", &nota);

    switch (nota)
    {
    case 'A':
        printf("Perfeito muito inteligente");
        break;
    case 'B':
        printf("B so pra ficar tranquilo");
        break;
    case 'C':
        printf("meh...");
        break;
    case 'F':
        printf("F de fracasso igual voce kkkkkkkkkk BURRO");
        break;
    default:
        printf("hm vc e burro entendi, nem precisa por a nota kkkk");
        break;
    }
}