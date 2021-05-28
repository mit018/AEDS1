#include <stdio.h>
#include <locale.h>

// Calcula e exibe todos os números primos entre 1 e N
// onde N é informado pelo usuário

void primos(int N)
{
    int cont, i;

    printf("Números primos entre 1 e %i:", N);

    for (i = 2; i <= N; i++)
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
            printf("\n%i", i);
        }
    }

}// fim int primos

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int N;

    printf("Insira um número inteiro: ");
    scanf("%i", &N);

    primos(N);

    return 0;
} // fim int main