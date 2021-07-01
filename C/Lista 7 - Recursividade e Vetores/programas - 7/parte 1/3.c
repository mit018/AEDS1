#include <stdio.h>
#include <locale.h>

// Calcula o en�simo termo da sequ�ncia Fibonacci usando recursividade

int fibonacci(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2); // en�simo termo da sequ�ncia � a soma de seus 2 antecessores
    }
}// fim int fibonacci

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int n, R;

    printf("Insira um n�mero inteiro positivo: ");
    scanf("%i", &n);

    R = fibonacci(n);

    printf("%i� termo da sequ�ncia de Fibonacci: %i", n, R);


    return 0;
}// fim int main