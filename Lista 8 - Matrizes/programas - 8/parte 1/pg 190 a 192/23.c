#include <stdio.h>
#include <locale.h>

// Recebe dois vetores de 5 elementos cada, subtrai o primeiro elemento de A do último de B, acumulando o valor, 
// subtrai o segundo elemento de A do penúltimo de B, acumulando o valor e assim por diante. 
// Ao final, mostra o resultado de todas as subtrações realizadas.

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int i, j = 4, R, A[5], B[5];

    printf("Insira 5 valores inteiros para o primeiro vetor:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%i", &A[i]);
    }

    printf("Insira mais 5 valores inteiros para o segundo vetor:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%i", &B[i]);
    }

    for (i = 0; i < 5; i++)
    {
        R += (B[j] - A[i]); // acumula o valor de todas as subtrações
        j--;
    }

    printf("\nResultado de todas as subtrações: %i", R);

    return 0;
}// fim int main