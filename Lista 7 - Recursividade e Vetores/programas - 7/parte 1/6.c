#include <stdio.h>
#include <locale.h>

// Calcula o máximo divisor comum de dois números usando a recursividade

int MDC(int x, int y)
{
    int aux, resto;

    if(x < y){ // se x maior que y, trocam de lugar para que x / y seja possível
        aux = x;
        x = y;
        y = aux;
    }
    if((x % y) == 0){ // quando o resto for 0, significa que o divisor máximo foi encontrado
        return y;
    }
    else{
        resto = x % y;
        x = y; // dividendo assume o valor do último divisor
        y = resto; // divisor assume o valor do resto da última divisão
        return MDC(x, y);
    }
} // fim int MDC

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int x, y, R;

    printf("Insira dois números inteiros positivos: ");
    scanf("%i %i", &x, &y);

    R = MDC(x, y);

    printf("MDC de %i e %i = %i", x, y, R);

    return 0;
}// fim int main