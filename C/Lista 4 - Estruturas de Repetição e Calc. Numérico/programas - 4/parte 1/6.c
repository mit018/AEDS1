#include <stdio.h>
#include <locale.h>

// Recebe um número e escreve ele 10 vezes

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x, N;

    printf("Insira um número inteiro positivo: ");
    scanf("%i", &N);

    if(N > 0){

        for(x = 1; x <= 10; x++){

            printf("\n%i. %i", x, N);

        }// fim for
    }

    return 0;
} // fim int main