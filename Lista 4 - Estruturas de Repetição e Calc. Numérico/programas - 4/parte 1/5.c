#include <stdio.h>
#include <locale.h>

// Escreve a palavra "PROGRAMA��O" N vezes, em que N � inserido pelo usu�rio

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x, N;

    printf("Insira um n�mero inteiro positivo: ");
    scanf("%i", &N);

    if(N > 0){

        for(x = 1; x <= N; x++){

            printf("\n%i. PROGRAMA��O", x);

        }// fim for
    }

    return 0;

}// fim int main