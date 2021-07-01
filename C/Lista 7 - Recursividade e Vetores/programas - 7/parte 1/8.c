#include <stdio.h>
#include <locale.h>

// Calcula a fun��o F(N) que retorna:
// 1 se N = 1
// 2 se N = 2
// 2 * F(N - 1) + 3 * F(N - 2) se N for �mpar

int F(int N)
{
    if (N == 1)
    {
        return 1;
    }
    else if (N == 2)
    {
        return 2;
    }
    else if ((N % 2) == 0) // se N for par
    {
        printf("N�o faz parte do dom�nio da fun��o. ");
        return -1;
    }
    else if ((N % 2) != 0) // se N for �mpar
    {
        return (2 * F(N - 1)) + (3 * F(N - 2));
    }
}// fim int F

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int R, N;

    printf("Insira um n�mero inteiro positivo: ");
    scanf("%i", &N);

    R = F(N);

    printf("%i", R);

    return 0;
} // fim int main