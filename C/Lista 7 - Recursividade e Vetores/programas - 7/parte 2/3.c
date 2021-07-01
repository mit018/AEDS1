#include <stdio.h>
#include <locale.h>

// testa se determinado número inteiro foi ou não armazenado em um vetor e
// informa quantas comparações foram feitas para isso.

int testevetor(int A[], int n, int x, int cont)
{
    if (x == A[cont])
    {
        cont++;
        printf("\nNúmero de comparações feitas: %i\n", cont);
        return 1;
    }
    else
    {
        if (cont < n)
        {
            cont++;
            testevetor(A, n, x, cont);
        }
        else
        {
            printf("\nNúmero de comparações feitas: %i\n", n + 1); // foram feitas todas as comparações possíveis (numero de elementos do vetor -> n + 1)
            return 0;
        }
    }
}// fim testevetor

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int cont = 0, x, i, n, teste;

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

    teste = testevetor(A, n - 1, x, cont);

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

// para o caso de 10 valores no vetor, o mínimo de comparações necessárias (caso a primeira casa corresponda a x) é 1,
// já o máximo é 10 (caso x não esteja no vetor ou esteja na última casa), já que todos os números serão comparados.