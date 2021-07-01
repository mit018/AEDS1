#include <stdio.h>
#include <locale.h>

// Recebe dois n�meros como par�metros e retorna 0, se o primeiro n�mero for
// divis�vel pelo segundo n�mero. Caso contr�rio, retorna o pr�ximo divisor.

void divisor(int a, int b){

    if((a % b) == 0){

        printf("0");
    }else{
        while((a % b) != 0){

            b += 1;
        }// fim while

        printf("pr�ximo divisor de %i: %i", a, b);
    }// fim if-else
}// fim int divisor

int main(){

    setlocale (LC_ALL, "Portuguese");

    int a, b;

    printf("Insira dois n�meros:\n");
    scanf("%i %i", &a, &b);

    divisor(a, b);

    return 0;
}// fim int main