#include <stdio.h>
#include <locale.h>

// Calcula e mostra a quantidade de
// elementos entre 15 e 20 dentro de uma matriz 

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, mat[3][5], cont = 0;

    printf("Insira 15 valores inteiros de uma matriz 3x5:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%i", &mat[i][j]);

            if(mat[i][j] >= 15 && mat[i][j] <= 20){
                cont++;
            }
        }
    }

    printf("Quantidade elementos entre 15 e 20: %i", cont);

    return 0;
} // fim int main