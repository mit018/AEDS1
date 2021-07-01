#include <stdio.h>

// Escreve os 10 primeiros números maiores que 100

int main ()
{
  
    int CONT, x = 1;

    for(CONT = 101; CONT <= 110; CONT++){

        printf("\n%i. %i", x, CONT);

        x++;

    }// fim for

    return 0;
}// fim int main