#include <stdio.h>
#include <locale.h>

// Calcula e exibe todos os números primos entre 1 e N
// onde N é informado pelo usuário

void primos(int *N)
{
    int cont, i;

    printf("\nNúmeros primos entre 1 e %i:\n", *N);

    for (i = 2; i <= (*N); i++)
    {
        cont = 0;
        
        if (i != 2 && i != 3 && i != 5 && i != 7)
        {
            if ((i % 2) == 0)
            {
                cont++;
            }
            else if ((i % 3) == 0)
            {
                cont++;
            }
            else if ((i % 5) == 0)
            {
                cont++;
            }
            else if ((i % 7) == 0)
            {
                cont++;
            }
        }
        if (cont == 0)
        {
            printf("%i\n", i);
        }
    }

}// fim int primos

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int N;

    printf("Insira um número inteiro: ");
    scanf("%i", &N);

    printf("\nVariável de retorno antes da chamada do procedimento primos\n");
    printf("N = %i\n", N);

    primos(&N);

    printf("\nVariável de retorno depois da chamada do procedimento primos\n");
    printf("N = %i\n", N);

    return 0;
} // fim int main