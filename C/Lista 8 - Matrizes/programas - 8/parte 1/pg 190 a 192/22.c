#include <stdio.h>
#include <locale.h>

// Recebe um vetor A de 10 valores e cria outro apenas com os valores positivos inteiros 

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j = 0, A[10], B[10];

    printf("Insira 10 valores:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%i", &A[i]);
        if (A[i] > 0)
        {
            B[j] = A[i];
            j++; // contador de elementos preenchidos do vetor B
        }
    }

    printf("\nVetor B:\n");
    for (i = 0; i < j; i++)
    {
        printf("%i\t", B[i]);
    }

    return 0;
} // fim int main