#include <stdio.h>
#include <locale.h>

// Gera os primeiros tr�s n�mero acima de 100

void primos100()
{

    int primo = 100, cont = 0, cont2 = 0;

    while (cont != 3)
    { // repetir at� que seja encotrados 3 n�meros primos

        cont2 = 0;

        for (int i = 1; i <= primo; i++)
        {
            if((primo % i) == 0)
            {
                cont2++; // o n�mero tem que ser divis�vel apenas por 2 n�meros: 1 e ele mesmo
            }

        } // fim for
        if (cont2 == 2)
        { // se a condi��o acima for verdadeira, o contador ser� igual a 2

            printf("\n%i", primo);
            cont++; // ser� somada 1 ao contador de n�meros primos encontrados
        }
        primo++; // um n�mero maior em uma unidade ser� gerado para ser testado como primo
    }            // fim while
} // fim void100

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Tr�s primeiros primos acima de 100: ");

    primos100();

    return 0;
} // fim int main