#include <stdio.h>
#include <locale.h>

// Calcula o m�ximo divisor comum de dois n�meros usando a recursividade

int MDC(int x, int y)
{
    int aux, resto;

    if(x < y){ // se x maior que y, trocam de lugar para que x / y seja poss�vel
        aux = x;
        x = y;
        y = aux;
    }
    if((x % y) == 0){ // quando o resto for 0, significa que o divisor m�ximo foi encontrado
        return y;
    }
    else{
        resto = x % y;
        x = y; // dividendo assume o valor do �ltimo divisor
        y = resto; // divisor assume o valor do resto da �ltima divis�o
        return MDC(x, y);
    }
} // fim int MDC

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int x, y, R;

    printf("Insira dois n�meros inteiros positivos: ");
    scanf("%i %i", &x, &y);

    R = MDC(x, y);

    printf("MDC de %i e %i = %i", x, y, R);

    return 0;
}// fim int main