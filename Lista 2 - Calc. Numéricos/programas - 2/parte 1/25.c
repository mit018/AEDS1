#include <stdio.h>
#include <locale.h>

// Recebe n�mero de horas correspondente �s faltas e horas extras dos funcion�rios e calcula
// o valor do pr�mio obtido por eles como gratifica��o de Natal da empresa de acordo com a tabela
// da quest�o no livro (pg. 94)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float premio, extras, faltou, H;

    printf("Insira quantas horas extras o funcion�rio obteve (ex.: 1,5): ");

    scanf("%f", &extras);

    printf("Insira quantas horas o funcion�rio faltou (ex.: 3,5): ");

    scanf("%f", &faltou);

    if (extras < 0 || faltou < 0)
    {

        printf("Insira uma quantidade de horas v�lida.");

    }

    H = (60 * extras) - ((2 / 3) * (60 * faltou));

    if (H >= 2400)
    {

        premio = 500;

    }
    else if (H > 1800 && H < 2400)
    {

        premio = 400;

    }
    else if (H >= 1200 && H < 1800)
    {

        premio = 300;

    } else if (H >= 600 && H < 1200){

        premio = 200;

    } else if (H < 600){

        premio = 100;

    }

    printf("O pr�mio do funcion�rio ser� no valor de R$%.2f", premio);

    return 0;
}// fim int main