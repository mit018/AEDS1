#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

//  Preenche e mostra a média dos elementos da diagonal principal de uma matriz 10x10

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, op, N;
    float mat[10][10], media, diagonal = 0;
    srand(time(NULL)); // time(NULL) -> total de segundos passados desde 1 de janeiro de 1970 até a data atual
    // srand -> inicializa o gerador (rand) de números aleatórios com o valor da função time(NULL) para que
    // cada execução sejam gerados sequências diferentes

    printf("Preencher a matriz 10x10 com números aleatórios? (1 - sim, 0 - não)\n");
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
        printf("Digite um valor de N para gerar números aleatórios entre 0 e N: ");
        scanf("%i", &N);

        printf("\nMatriz gerada com números inteiros aleatórios\n");
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

    printf("\nMédia dos elementos da diagonal principal da matriz = %.2f", media);

    return 0;
} // fim int main