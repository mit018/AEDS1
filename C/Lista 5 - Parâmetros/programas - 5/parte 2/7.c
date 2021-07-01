#include <stdio.h>
#include <locale.h>

// Lê um número não determinado de valores positivos e retorne a média aritmética
// desses valores. Termina a entrada de dados com o valor zero.

void mediaA()
{
    float cont = 0, num = 1, total = 0, mediaA;

    do
    {
        cont++;

        printf("\n%.f° Número: ", cont);
        scanf("%f", &num);

        total += num;

    } while (num != 0);

    mediaA = total / (cont - 1);

    printf("Média = %.2f", mediaA);
} // fim void mediaA

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float num, cont = 0, total = 0;

    printf("Insira valores para calcular sua média aritmética (digite 0 para encerrar a entrada de números)");

    mediaA();

    return 0;
} // fim int main