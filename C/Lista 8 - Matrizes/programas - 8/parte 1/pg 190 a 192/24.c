#include <stdio.h>
#include <locale.h>

// Lê um vetor com quinze posições para números inteiros e cria um vetor
// resultante que contem todos os números primos do vetor digitado

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, k = 0, vet[15], cont, primos = 0;

    printf("Insira 15 valores inteiros:\n");

    for (i = 0; i < 15; i++)
    {
        scanf("%i", &vet[i]);

        cont = 0;
        for (j = 1; j <= vet[i]; j++)
        {
            if ((vet[i] % j) == 0)
            {
                cont++;
            }
        }
        if (cont == 2)
        {
            primos++;
        }
    }

    int vet2[primos];

    for (i = 0; i < 15; i++)
    {

        cont = 0;
        for (j = 1; j <= vet[i]; j++)
        {
            if ((vet[i] % j) == 0)
            {
                cont++;
            }
        }
        if (cont == 2)
        {
            vet2[k] = vet[i];
            k++;
        }
    }

    printf("\nNúmeros primos:\n");
    for (i = 0; i < primos; i++)
    {
        printf("%i\t", vet2[i]);
    }

    return 0;
} // fim int main