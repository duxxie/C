#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "bro";
    char string2[] = "bro";
    /*strlwr(string1);
    strupr(string1);
    strcat(string1, string2); // cat = concatenamento
    strcpy(string1, string2); //copia a string2 para string1
    strset(string1, '?'); //transforma todos os caracteres em outro valor que foi exigido
    strrev(string1);

    strnset(string1, 'x', 1);
    strncpy(string1, string2, 2);// copia apenas o numero exigido de caracteres
    strncat(string1, string2, 1); //pega "1" letra da string2 e junta com a string1

    int resultado = strlen(string1);
    int resultado = strcmpi(string1, string1);

    int resultado = strnicmp(string1, string1, 1);
    int resultado = strncmp(string1, string2, 1);
*/
    int resultado = strcmp(string1, string2);
    printf("%d", resultado);

if(resultado == 0){
    printf("essas strings sao iguais");
}
else{
    printf("essas strings nao sao iguais");
}

}