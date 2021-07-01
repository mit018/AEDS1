#include <stdio.h>
#include <locale.h>

// recebe 8 valores em uma matriz 2x4 e calcula a quantidade de elementos entre 12 e 20 em cada linha e
// a média dos elementos pares da matriz.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float somaPares = 0, quantPares = 0, media;
    int cont[2], mat[2][4], i, j;
    cont[0] = 0;
    cont[1] = 0;

    printf("Insira 8 valores inteiros de uma matriz 2x4:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%i", &mat[i][j]);
            if (mat[i][j] >= 12 && mat[i][j] <= 20)
            {
                cont[i]++;
            }
            if ((mat[i][j] % 2) == 0) // se divisível por dois, então é par
            {
                quantPares++; // contador de números pares
                somaPares += mat[i][j]; // acumulador dos números pares
            }
        }
    }

    media = somaPares / quantPares;

    printf("Quantidade de múmeros entre 12 e 20\n");
    printf("1° linha: %i\n", cont[0]);
    printf("2° linha: %i\n", cont[1]);

    printf("Média dos elementos pares da matriz: %.2f", media);

    return 0;
} // fim int main