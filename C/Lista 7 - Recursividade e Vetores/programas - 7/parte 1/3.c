#include <stdio.h>
#include <locale.h>

// Calcula o enésimo termo da sequência Fibonacci usando recursividade

int fibonacci(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2); // enésimo termo da sequência é a soma de seus 2 antecessores
    }
}// fim int fibonacci

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int n, R;

    printf("Insira um número inteiro positivo: ");
    scanf("%i", &n);

    R = fibonacci(n);

    printf("%i° termo da sequência de Fibonacci: %i", n, R);


    return 0;
}// fim int main