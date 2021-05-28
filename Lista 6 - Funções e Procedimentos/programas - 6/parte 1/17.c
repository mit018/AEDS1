#include <stdio.h>
#include <locale.h>

// Calcula o máximo divisor comum (MDC) de dois números recebidos como
// parâmetros.

void mdc(int a, int b)
{
    int resto, aux;

    if(a < b){
        aux = a;
        a = b;
        b = aux;
    }

    printf("\nMDC de %i e %i é", a, b); 

    while(resto != 0){

        resto = a % b;
        a = b;
        b = resto;
    }
    printf(" %i", a);
}

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int a, b, x;

    printf("Insira dois valores inteiros");
    printf("\nA: ");
    scanf("%i", &a);
    printf("\nB: ");
    scanf("%i", &b);

    mdc(a, b);

    return 0;
} // fim int main