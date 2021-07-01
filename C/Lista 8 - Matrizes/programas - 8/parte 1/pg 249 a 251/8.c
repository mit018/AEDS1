#include <stdio.h>
#include <locale.h>

// preenche duas matrizes 3x8 e calcula a soma e a diferença de seus elementos

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, mat[3][8], mat2[3][8], diferenca[3][8], soma[3][8];

    printf("Insira 24 valores inteiros de uma matriz 3x8:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            scanf("%i", &mat[i][j]);
        }
    }

    printf("Insira mais 24 valores inteiros de outra matriz 3x8:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            scanf("%i", &mat2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            soma[i][j] = mat[i][j] + mat2[i][j];
            diferenca[i][j] = mat[i][j] - mat2[i][j];
        }
    }

    printf("\n\nMatriz resultante da soma:");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 8; j++)
        {
            printf("%i\t", soma[i][j]);
        }
    }

    printf("\n\nMatriz resultante da diferença:");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 8; j++)
        {
            printf("%i\t", diferenca[i][j]);
        }
    }

    return 0;
} // fim int main