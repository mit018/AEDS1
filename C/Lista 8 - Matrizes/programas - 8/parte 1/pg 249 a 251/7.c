#include <stdio.h>
#include <locale.h>

// preenche uma matriz M 4x6 e outra N 6x4 e soma as linhas de M com as colunas de N

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, M[4][6], N[6][4], linha[4], coluna[4], soma[4];

    for(i = 0; i < 4; i++){
        coluna[i] = 0;
        linha[i] = 0;
    }
    
    printf("Matriz M (4x6)\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {   
            printf("Insira o %i° valor da %i° linha:\n", j + 1, i + 1);
            scanf("%d", &M[i][j]);
            linha[i] += M[i][j]; // acumulador dos valores de cada linha de M
        }
    }

    printf("\nMatriz N (6x4)\n");
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 6; i++)
        {   
            printf("Insira o %i° valor da %i° coluna:\n", i + 1, j + 1);
            scanf("%i", &N[i][j]);
            coluna[j] += N[i][j]; // acumulador dos valores de cada coluna de N
        }
    }

    for (i = 0; i < 4; i++)
    {
        soma[i] = linha[i] + coluna[i];
        printf("\nSoma da %i° linha de M com a %i° coluna de N = %i\n", i + 1, i + 1, soma[i]);
    }


    return 0;
} // fim int main