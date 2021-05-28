#include <stdio.h>
#include <locale.h>

// testa se determinado número inteiro foi ou não armazenado em um vetor

int testevetor(int A[], int n, int x)
{
    if (x == A[n])
    { // se x for igual a algum número do vetor, a função encerra retornando 1
        return 1;
    }
    if (n == 0)
    {
        return 0; // se a casa do vetor chegar a 0 e seu valor não foi igual a x, retorna 0
    }
    else
    {
        return testevetor(A, n - 1, x); // se x não for igual, a função se repete até que o vetor chegue em seu ultimo valor guardado
    }
} // fim int testevetor

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, i, n, teste;

    printf("Digite a quantidade de números a serem lidos: ");
    scanf("%i", &n);

    int A[n];

    printf("Insira %i números inteiros positivos:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%i", &A[i]);
    }

    printf("Insira um número inteiro positivo: ");
    scanf("%i", &x);

    teste = testevetor(A, n - 1, x);

    if (teste == 1)
    {
        printf("%i está contido no vetor.", x);
    }
    else if (teste == 0)
    {
        printf("%i não está contido no vetor.", x);
    }

    return 0;
} // fim int main