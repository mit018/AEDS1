#include <stdio.h>
#include <locale.h>

// Recebe número de horas correspondente às faltas e horas extras dos funcionários e calcula
// o valor do prêmio obtido por eles como gratificação de Natal da empresa de acordo com a tabela
// da questão no livro (pg. 94)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float premio, extras, faltou, H;

    printf("Insira quantas horas extras o funcionário obteve (ex.: 1,5): ");

    scanf("%f", &extras);

    printf("Insira quantas horas o funcionário faltou (ex.: 3,5): ");

    scanf("%f", &faltou);

    if (extras < 0 || faltou < 0)
    {

        printf("Insira uma quantidade de horas válida.");

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

    printf("O prêmio do funcionário será no valor de R$%.2f", premio);

    return 0;
}// fim int main