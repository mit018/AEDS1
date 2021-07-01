#include <stdio.h>
#include <locale.h>

// testa se determinado n�mero inteiro foi ou n�o armazenado em um vetor

int testevetor(int A[], int n, int x)
{
    if (x == A[n])
    { // se x for igual a algum n�mero do vetor, a fun��o encerra retornando 1
        return 1;
    }
    if (n == 0)
    {
        return 0; // se a casa do vetor chegar a 0 e seu valor n�o foi igual a x, retorna 0
    }
    else
    {
        return testevetor(A, n - 1, x); // se x n�o for igual, a fun��o se repete at� que o vetor chegue em seu ultimo valor guardado
    }
} // fim int testevetor

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, i, n, teste;

    printf("Digite a quantidade de n�meros a serem lidos: ");
    scanf("%i", &n);

    int A[n];

    printf("Insira %i n�meros inteiros positivos:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%i", &A[i]);
    }

    printf("Insira um n�mero inteiro positivo: ");
    scanf("%i", &x);

    teste = testevetor(A, n - 1, x);

    if (teste == 1)
    {
        printf("%i est� contido no vetor.", x);
    }
    else if (teste == 0)
    {
        printf("%i n�o est� contido no vetor.", x);
    }

    return 0;
} // fim int main