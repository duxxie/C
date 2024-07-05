#include <stdio.h>

int main()
{
   FILE *pF = fopen("C:\\Users\\Gabri\\OneDrive\\Área de Trabalho\\binarios.txt", "r");
   char buffer[255];

   if(pF == NULL)
   {
      printf("Unable to open file!\n");
   }
   else
   {
      while(fgets(buffer, 255, pF) != NULL)
      {
         printf("%s", buffer);
      }
   }

   fclose(pF);

   return 0;
}