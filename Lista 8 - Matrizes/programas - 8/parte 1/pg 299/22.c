#include <stdio.h>
#include <locale.h>

float mat[10][5];

void receberMatriz(int linhas, int colunas)
{
    int i, j;

    printf("Insira %i números reais para uma matriz %ix%i:\n", linhas * colunas, linhas, colunas);

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
}

float somaAbaixo(int linhas, int colunas, int abaixo)
{
    int i, j;
    float soma = 0;

    for (i = abaixo; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            soma += mat[i][j];
        }
    }
    return soma;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float soma;
    int i, j;

    receberMatriz(10, 5);

    for (i = 0; i < 10; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf("%.2f\t", mat[i][j]);
        }
    }

    soma = somaAbaixo(10, 5, 6);
    printf("Soma dos valores abaixo da linha 6 da matriz = %.2f", soma);

    return 0;
} // fim int main