#include <stdio.h>
#include <locale.h>

// Lê um valor N e imprime os N primeiros números inteiros

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x, N;

    printf("Insira um número inteiro positivo: ");
    scanf("%i", &N);

    if(N > 0){

        for(x = 1; x <= N; x++){

            printf("\n%i", x);

        }// fim for
    }

    return 0;
}// fim 