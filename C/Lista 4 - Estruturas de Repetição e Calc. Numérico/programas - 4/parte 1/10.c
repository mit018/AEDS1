#include <stdio.h>

// Imprime a tabuada do 8

int main ()
{
    int x, R;

    printf("Tabuada do 8:");

    for(x = 1; x <= 10; x++){

        R = 8 * x;

        printf("\n%i * 8 = %i", x, R);

    }// fim for

    return 0;

}// fim int main