#include <stdio.h>
#include <string.h>

//do{}while executa o bloco primeiro e então checa a condição
//while checa a condição e então executa

int main()
{
    int num = 0;
    int som = 0;

    do{
        printf("insira x numero para acrescentar sobre 0: ");
        scanf("%d", &num);
        
        if(num > 0)
        {
            som += num;
        }
    }while(num > 0);

    printf("sum: %d", som);

    return 0;
}