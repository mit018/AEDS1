#include <stdio.h>
#include <locale.h>

// L� um n�mero n�o determinado de valores positivos e retorne a m�dia aritm�tica
// desses valores. Termina a entrada de dados com o valor zero.

void mediaA()
{
    float cont = 0, num = 1, total = 0, mediaA;

    do
    {
        cont++;

        printf("\n%.f� N�mero: ", cont);
        scanf("%f", &num);

        total += num;

    } while (num != 0);

    mediaA = total / (cont - 1);

    printf("M�dia = %.2f", mediaA);
} // fim void mediaA

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float num, cont = 0, total = 0;

    printf("Insira valores para calcular sua m�dia aritm�tica (digite 0 para encerrar a entrada de n�meros)");

    mediaA();

    return 0;
} // fim int main