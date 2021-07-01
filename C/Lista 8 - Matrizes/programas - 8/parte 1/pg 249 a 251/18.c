#include <stdio.h>
#include <locale.h>

// Preenche uma matriz 5x5 de n�meros reais, calcula e mostra a soma 
// dos elementos da diagonal secund�ria.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j;
    float mat[5][5], media, diagSec = 0;

    printf("Insira 25 valores inteiros para uma matriz 5x5:\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }

    j = 4;
    for (i = 0; i < 5; i++)
    {
        diagSec += mat[i][j];
        printf("\ndiagonal secund�ria = %.f", diagSec);
        j--;
    }

    media = diagSec / 5;

    printf("\nM�dia dos elementos da diagonal secund�ria da matriz = %.2f", media);

    return 0;
} // fim int main