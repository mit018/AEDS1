#include <stdio.h>
#include <locale.h>

// fun��o que recebe um vetor X de 15 n�meros inteiros como par�metro e retorna a
// quantidade de valores pares em X

int vetorPar(int vet[], int n)
{
    int cont = 0, i;
    for (i = 0; i < n; i++)
    {
        if (vet[i] % 2 == 0)
        {
            cont++;
        }
    }
    return cont;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, pares, vet[15];

    printf("Insira 15 valores inteiros:\n");

    for (i = 0; i < 15; i++)
    {
        scanf("%i", &vet[i]);
    }

    pares = vetorPar(vet, 15);

    printf("\nH� %i n�meros pares no vetor.", pares);

    return 0;
} // fim int main