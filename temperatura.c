#include <stdio.h>
#include <math.h>
#include <string.h>


int main(void){
    char medida;
    float valor;
    printf("Insira a medida de temperatura que tu desejas(\"C\" para converter para fahrenhaint OU \"F\" para converter para Celsius)");
    scanf("%c", &medida);

    medida = toupper(medida);
    if(medida=='C'){
    printf("A medida que tu estas convertendo e de C para F");
    printf("\nInsira um valor em C: ");
    scanf("%f", &valor);
    valor = (valor * 9 / 5) + 32;
    printf("Este e seu valor em Fahrenheit: %0.1f", valor);
    }

    else if(medida=='F'){
    printf("A medida que tu estas convertendo e de F para C");
    printf("\nInsira um valor em F: ");
    scanf("%f", &valor);
    valor = (valor - 32) * 5/9;
    printf("este e seu valor em Celsius: %0.1f", valor);
    }

    else{
        printf("insira um valor válido");
    }
}