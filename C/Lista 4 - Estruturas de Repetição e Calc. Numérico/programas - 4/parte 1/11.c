#include <stdio.h>
#include <locale.h>

// ler um valor X e escreve sua tabuada

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x, N, R;

    printf("Insira um número inteiro positivo entre 1 e 10: ");
    scanf("%i", &N);

    if(N > 0 && N <= 10){

        for(x = 1; x <= 10; x++){

            R = N * x;

            printf("\n%i * %i = %i", x, N, R);

        }// fim for
    }

    return 0;
}// fim int main