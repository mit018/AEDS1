#include <stdio.h>
#include <locale.h>

// Calcula a soma dos números de um 1 a N inserido pelo usuário usando recursividade

int somade1aN(int N)
{
    if (N == 1)
    {
        return 1;
    }
    else
    {
        return N + somade1aN(N - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int R, N;

    printf("Insira um número inteiro positivo: ");
    scanf("%i", &N);

    R = somade1aN(N);

    printf("Soma dos números de 1 a %i = %i", N, R);

    return 0;
} // fim int main