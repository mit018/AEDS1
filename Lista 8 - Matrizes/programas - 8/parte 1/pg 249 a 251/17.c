#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

//  Preenche e mostra a m�dia dos elementos da diagonal principal de uma matriz 10x10

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, op, N;
    float mat[10][10], media, diagonal = 0;
    srand(time(NULL)); // time(NULL) -> total de segundos passados desde 1 de janeiro de 1970 at� a data atual
    // srand -> inicializa o gerador (rand) de n�meros aleat�rios com o valor da fun��o time(NULL) para que
    // cada execu��o sejam gerados sequ�ncias diferentes

    printf("Preencher a matriz 10x10 com n�meros aleat�rios? (1 - sim, 0 - n�o)\n");
    scanf("%i", &op);

    if (op == 0)
    {
        printf("Insira 100 valores inteiros:\n");

        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                scanf("%f", &mat[i][j]);
            }
        }
    }
    else
    {
        printf("Digite um valor de N para gerar n�meros aleat�rios entre 0 e N: ");
        scanf("%i", &N);

        printf("\nMatriz gerada com n�meros inteiros aleat�rios\n");
        for (i = 0; i < 10; i++)
        {
            printf("\n");
            for (j = 0; j < 10; j++)
            {
                mat[i][j] = rand() % N;
                printf("%.f\t", mat[i][j]);
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        diagonal += mat[i][i];
    }

    media = diagonal / 10;

    printf("\nM�dia dos elementos da diagonal principal da matriz = %.2f", media);

    return 0;
} // fim int main