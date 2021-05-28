#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

//  Preenche e mostra a m�dia dos elementos das linhas pares de uma matriz 8x6

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, op, N;
    float mat[8][6], media, total = 0;
    srand(time(NULL)); // time(NULL) -> total de segundos passados desde 1 de janeiro de 1970 at� a data atual
    // srand -> inicializa o gerador (rand) de n�meros aleat�rios com o valor da fun��o time(NULL) para que
    // cada execu��o sejam gerados sequ�ncias diferentes

    printf("Preencher a matriz 8x6 com n�meros aleat�rios? (1 - sim, 0 - n�o)\n");
    scanf("%i", &op);

    if (op == 0)
    {
        printf("Insira 48 valores inteiros:\n");

        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 6; j++)
            {
                scanf("%f", &mat[i][j]);
                if((i + 1) % 2 == 0){
                    total += mat[i][j]; // acumulador dos elementos das linhas pares
                }
            }
        }
    }
    else
    {
        printf("Digite um valor de N para gerar n�meros aleat�rios entre 0 e N: ");
        scanf("%i", &N);

        printf("\nMatriz gerada com n�meros inteiros aleat�rios\n");
        for (i = 0; i < 8; i++)
        {
            printf("\n");
            for (j = 0; j < 6; j++)
            {
                mat[i][j] = rand() % N;
                printf("%.f\t", mat[i][j]);
                if(i % 2 == 0){
                    total += mat[i][j];
                }
            }
        }
    }
    

    media = total / (6 * 4); // 6 -> n�mero de elementos em cada linha par// 4 -> n�mero de linhas pares

    printf("\n\nM�dia dos elementos das linhas 2, 4, 6 e 8 = %.2f", media);

    return 0;
} // fim int main