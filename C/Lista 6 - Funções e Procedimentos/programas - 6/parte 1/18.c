#include <stdio.h>
#include <locale.h>

// Gera os primeiros três número acima de 100

void primos100()
{

    int primo = 100, cont = 0, cont2 = 0;

    while (cont != 3)
    { // repetir até que seja encotrados 3 números primos

        cont2 = 0;

        for (int i = 1; i <= primo; i++)
        {
            if((primo % i) == 0)
            {
                cont2++; // o número tem que ser divisível apenas por 2 números: 1 e ele mesmo
            }

        } // fim for
        if (cont2 == 2)
        { // se a condição acima for verdadeira, o contador será igual a 2

            printf("\n%i", primo);
            cont++; // será somada 1 ao contador de números primos encontrados
        }
        primo++; // um número maior em uma unidade será gerado para ser testado como primo
    }            // fim while
} // fim void100

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Três primeiros primos acima de 100: ");

    primos100();

    return 0;
} // fim int main