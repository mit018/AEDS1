#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Junta dois vetores de inteiros e ordena seus valores

void ordenar(int vetor[], int tam)
{
    int i, j, aux;
    for (i = 1; i < tam; i++)
    {
        for (j = 0; j < i; j++)
        {   // i sempre será 1 unidade menor que j
            // compara dois valores armazenados em duas posições consecutivas do vetor
            if (vetor[j] > vetor[i])
            {
                // se o valor da posição antecessora for maior que o da seguinte, trocam de lugar
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}// fim int ordenar

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int m, n, i, j = 0;

    printf("Insira um valor inteiro para o tamanho do 1° vetor: ");
    scanf("%i", &m);

    int vet1[m];

    printf("Insira %i números inteiros:\n", m);

    for (i = 0; i < m; i++)
    {
        scanf("%i", &vet1[i]);
    }

    printf("Insira um valor inteiro para o tamanho do 2° vetor: ");
    scanf("%i", &n);

    int vet2[n];

    printf("Insira %i números inteiros:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%i", &vet2[i]);
    }

    int *vet3 = (int *)malloc(sizeof(int) * (m + n));

    for (i = 0; i < m; i++)
    {
        vet3[i] = vet1[i];
    }

    for (i = m; i < (m + n); i++)
    {
        vet3[i] = vet2[j++];
    }

    ordenar(vet3, m + n);

    printf("Terceiro vetor ordenado:\n");
    for (i = 0; i < (m + n); i++)
    {
        printf("%i\t", vet3[i]);
    }

    free(vet3);

    return 0;
}