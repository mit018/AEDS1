#include <stdio.h>
#include <locale.h>

// Multiplica uma matriz 5x5 pelo maior valor inserido

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, mat[5][5], maior = 0;

    printf("Insira 25 valores reais para uma matriz 5x5:\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%i", &mat[i][j]);
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }

    printf("\nMatriz resultante:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            mat[i][j] *= maior;
            printf("%i\t", mat[i][j]);
        }
    }

    return 0;
} // fim int main