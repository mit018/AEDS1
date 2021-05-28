#include <stdio.h>
#include <locale.h>

// Calcula o fatorial de x usando recursividade

int fatorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * fatorial(x - 1);
    }
} // fim int fatorial

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int R, x;

    printf("Insira um número inteiro positivo: ");
    scanf("%i", &x);

    R = fatorial(x);

    printf("\n%i! = %i", x, R);

    return 0;
} // fim int main