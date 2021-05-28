#include <stdio.h>
#include <locale.h>

// Multiplica uma matriz 3x3 por um valor K inserido

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, mat[3][3], k;

    printf("Insira 9 valores reais para uma matriz 3x3:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%i", &mat[i][j]);
        }
    }

    printf("\nInsira um valor para multiplicar a matriz: ");
    scanf("%i", &k);

    printf("\nMatriz resultante:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mat[i][j] *= k;
            printf("%i\t", mat[i][j]);
        }
    }

    return 0;
} // fim int main