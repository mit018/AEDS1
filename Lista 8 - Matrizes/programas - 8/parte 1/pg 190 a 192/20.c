#include <stdio.h>
#include <locale.h>

// mostra apenas os valores positivos de um vetor

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int i, vet[10];

    printf("Insira 10 valores inteiros:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%i", &vet[i]);
    }

    printf("Valores positivos do vetor\n");

    for (i = 0; i < 10; i++)
    {
        if(vet[i] > 0){ // se o valor do vetor for positivo
            printf("%i\t", vet[i]);
        }
    }

    return 0;
}// fim int main