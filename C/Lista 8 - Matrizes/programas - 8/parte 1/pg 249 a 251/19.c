#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

//  Preenche e mostra a média dos elementos das linhas pares de uma matriz 8x6

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, op, N;
    float mat[8][6], media, total = 0;
    srand(time(NULL)); // time(NULL) -> total de segundos passados desde 1 de janeiro de 1970 até a data atual
    // srand -> inicializa o gerador (rand) de números aleatórios com o valor da função time(NULL) para que
    // cada execução sejam gerados sequências diferentes

    printf("Preencher a matriz 8x6 com números aleatórios? (1 - sim, 0 - não)\n");
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
        printf("Digite um valor de N para gerar números aleatórios entre 0 e N: ");
        scanf("%i", &N);

        printf("\nMatriz gerada com números inteiros aleatórios\n");
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
    

    media = total / (6 * 4); // 6 -> número de elementos em cada linha par// 4 -> número de linhas pares

    printf("\n\nMédia dos elementos das linhas 2, 4, 6 e 8 = %.2f", media);

    return 0;
} // fim int main