#include <stdio.h>
#include <locale.h>

// testa se determinado n�mero inteiro foi ou n�o armazenado em um vetor e
// informa quantas compara��es foram feitas para isso.

int testevetor(int A[], int n, int x, int cont)
{
    if (x == A[cont])
    {
        cont++;
        printf("\nN�mero de compara��es feitas: %i\n", cont);
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
            printf("\nN�mero de compara��es feitas: %i\n", n + 1); // foram feitas todas as compara��es poss�veis (numero de elementos do vetor -> n + 1)
            return 0;
        }
    }
}// fim testevetor

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int cont = 0, x, i, n, teste;

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

    teste = testevetor(A, n - 1, x, cont);

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

// para o caso de 10 valores no vetor, o m�nimo de compara��es necess�rias (caso a primeira casa corresponda a x) � 1,
// j� o m�ximo � 10 (caso x n�o esteja no vetor ou esteja na �ltima casa), j� que todos os n�meros ser�o comparados.