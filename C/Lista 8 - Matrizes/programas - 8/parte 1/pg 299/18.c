#include <stdio.h>
#include <locale.h>

void primos(int acima, int xPrimos)
{
    int i, contPrimos = 0, cont = 0;
    printf("%i primeiros primos acima de %i:\n", xPrimos, acima);
    while (contPrimos != xPrimos)
    {
        for (i = 1; i <= acima; i++)
        {
            if (acima % i == 0)
            {
                cont++; // contador de quantas vezes o número for divisível por i que vai crescendo
            }
        }
        if (cont == 2) // tem que ser divisível apenas por 1 e por ele mesmo para ser primo (ou seja o contador tem que valer 2) 
        {
            contPrimos++; // contador de quantos primos foram descobertos
            printf("%i\t", acima);
        }
        acima++;
        cont = 0;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    primos(100, 3); // primos(acima de 100, quantidade de primos -> 3)

    return 0;
} // fim int main