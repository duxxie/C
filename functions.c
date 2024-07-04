#include <stdio.h>
//ARGUMENTOS, FUNÇÕES e DECLARAÇÃO
void birthday(char nome[], int idade){
    printf("%s tem %d anos!!!", nome, idade);
}
int main()
{
    char nome[] = "Rogerio";
    int idade = 18;
    birthday(nome, idade);
}