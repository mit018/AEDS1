#include <stdio.h>
#include <locale.h>
#include <math.h>

// Recebe diversos pares de n�meros (A e B) e determina a soma dos cubos de todos os valores
// pares compre�ndios no intervalo [A, B]

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int A, B, soma = 0, x;
    
    printf("Insira 2 n�meros (A e B) para um itervalo de A a B\n");
    printf("Digite 0 em ambos para encerrar");

    printf("\nA: ");
    scanf("%i", &A);

    printf("\nB: ");
    scanf("%i", &B);

    if(B < A){ // se B menor que A, inverte os valores para que B seja maior que A

        x = B;
        B = A;
        A = x;
    }

    while(A != 0 && B != 0){

        for(x = A; x <= B; x++){

            if(x % 2 == 0){ // se x for par

                soma += pow(x, 3); // acumulador do valor de todos os n�meros pares ao cubo
            }
        }

        printf("A soma dos cubos de todo n�mero par inteiro compreendido no intervalo inserido [%i,%i] �\nSoma = %i", A, B, soma);
        
        printf("\nA: ");
        scanf("%i", &A);

        printf("\nB: ");
        scanf("%i", &B);


    }// fim while

    return 0;

}// fim int main
