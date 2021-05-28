#include <stdio.h>
#include <locale.h>

// Escreve a palavra "PROGRAMAÇÃO" N vezes, em que N é inserido pelo usuário

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x, N;

    printf("Insira um número inteiro positivo: ");
    scanf("%i", &N);

    if(N > 0){

        for(x = 1; x <= N; x++){

            printf("\n%i. PROGRAMAÇÃO", x);

        }// fim for
    }

    return 0;

}// fim int main