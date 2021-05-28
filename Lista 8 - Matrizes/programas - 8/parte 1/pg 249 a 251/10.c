#include <stdio.h>
#include <locale.h>

// Preenche uma matriz 5x5 e imprime a soma dos elementos da linha 4, coluna 2, diagonal
// principal, diagonal secundária e de todos os elementos da matriz (separadamente)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, mat[5][5], total = 0, linha4 = 0, coluna2 = 0, diagPrin = 0, diagSec = 0;

    printf("Insira 25 valores inteiros para uma matriz 5x5:\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%i", &mat[i][j]);
            total += mat[i][j];
            if(i == 3){
                linha4 += mat[i][j];
            }
            if(j == 1){
                coluna2 += mat[i][j];
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        diagPrin += mat[i][i];
    }

    j = 4;
    for (i = 0; i < 5; i++)
    {
        diagSec += mat[i][j];
        j--;
    }

    printf("\nSOMATÓRIO\n");
    printf("Dos elementos da linha 4: %i\n", linha4);
    printf("Dos elementos da coluna 2: %i\n", coluna2);
    printf("Dos elementos da diagonal pricipal: %i\n", diagPrin);
    printf("Dos elementos da diagonal secundária: %i\n", diagSec);
    printf("Todos os elementos da matriz: %i\n", total);

    return 0;
} // fim int main