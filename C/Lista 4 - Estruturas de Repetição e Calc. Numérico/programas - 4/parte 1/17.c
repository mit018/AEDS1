#include <stdio.h>
#include <locale.h>

// lê uma quantidade indeterminada de inteiros e informa se é par ou ímpar

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    int N;

    printf("Insira um número inteiro (digite 0 ou um valor negativo para encerrar a entrada de dados)\n");
    
    printf("\nNúmero: ");
    scanf("%i", &N);


    while(N > 0){

        if(N % 2 == 0){

            printf("\nNúmero par");

        }else{

            printf("\nNúmero ímpar");

        }
        
        printf("\nNúmero: ");
        scanf("%i", &N);

    }

    return 0;

}