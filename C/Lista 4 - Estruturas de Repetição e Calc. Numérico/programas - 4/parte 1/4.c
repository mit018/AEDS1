#include <stdio.h>
#include <locale.h>

// Escreve a palavra "PROGRAMAÇÃO" 5 vezes

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int CONT, x = 1;

    for(CONT = 0; CONT < 5; CONT++){

        printf("\n%i. PROGRAMAÇÃO", x);

        x++;

    }// fim for

    return 0;
} //fim int main