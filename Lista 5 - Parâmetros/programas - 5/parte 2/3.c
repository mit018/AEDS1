#include <stdio.h>
#include <locale.h>

// Recebe dois números como parâmetros e retorna 0, se o primeiro número for
// divisível pelo segundo número. Caso contrário, retorna o próximo divisor.

void divisor(int a, int b){

    if((a % b) == 0){

        printf("0");
    }else{
        while((a % b) != 0){

            b += 1;
        }// fim while

        printf("próximo divisor de %i: %i", a, b);
    }// fim if-else
}// fim int divisor

int main(){

    setlocale (LC_ALL, "Portuguese");

    int a, b;

    printf("Insira dois números:\n");
    scanf("%i %i", &a, &b);

    divisor(a, b);

    return 0;
}// fim int main