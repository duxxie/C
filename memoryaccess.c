#include <stdio.h>

int main()
{
    /*Memória = um array de bytes 
      blocos de memoria = um byte de memória
      endereço de memoria = localização da memoria*/

      char a = 'A';
      char b = 'B';
      char c = 'C';
// bytes
      printf("bytes = %d\n", sizeof(a));
      printf("bytes = %d\n", sizeof(b));
      printf("bytes = %d\n", sizeof(c));
//endereço
      printf("%p\n", &a);
      printf("%p\n", &b);
      printf("%p\n", &c);
}