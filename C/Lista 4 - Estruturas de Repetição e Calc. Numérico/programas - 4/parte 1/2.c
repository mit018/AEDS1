#include <stdio.h>

// Exibe os números de 1 a 10

int main ()
{
    int CONT = 0, x = 1;

    do{

        CONT++;

        printf("\n%i", x);

        x++;

    }while(CONT < 10); // fim do-while

    return 0;
}// fim int main