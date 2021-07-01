#include <stdio.h>
#include <locale.h>

// Calcula a multiplicação de duas matrizes n x n.

int n;

void multiplicarMatriz(int mat1[][n], int mat2[][n], int n)
{
    int i, j, k, somaProd, resultado[n][n];
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            somaProd = 0;

            for (k = 0; k < n; k++)
            {
                somaProd += (mat1[i][k] * mat2[k][j]);
            }
            resultado[i][j] = somaProd;
        }
    }

    printf("\nMatriz resultante:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%i\t", resultado[i][j]);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int j, i;

    printf("Insira um valor inteiro positivo: ");
    scanf("%i", &n);

    printf("Insira %i valores para a primeira matriz %ix%i:\n", n * n, n, n);

    int mat1[n][n], mat2[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%i", &mat1[i][j]);
        }
    }
  
    printf("\nInsira %i valores para a segunda matriz %ix%i:\n", n * n, n, n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%i", &mat2[i][j]);
        }
    }

    multiplicarMatriz(mat1, mat2, n);

    return 0;
}