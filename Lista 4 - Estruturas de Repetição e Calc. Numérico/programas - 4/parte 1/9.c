#include <stdio.h>
#include <locale.h>

// L� um valor N e imprime os N primeiros n�meros inteiros

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x, N;

    printf("Insira um n�mero inteiro positivo: ");
    scanf("%i", &N);

    if(N > 0){

        for(x = 1; x <= N; x++){

            printf("\n%i", x);

        }// fim for
    }

    return 0;
}// fim 