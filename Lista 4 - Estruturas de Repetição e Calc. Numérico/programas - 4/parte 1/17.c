#include <stdio.h>
#include <locale.h>

// l� uma quantidade indeterminada de inteiros e informa se � par ou �mpar

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    int N;

    printf("Insira um n�mero inteiro (digite 0 ou um valor negativo para encerrar a entrada de dados)\n");
    
    printf("\nN�mero: ");
    scanf("%i", &N);


    while(N > 0){

        if(N % 2 == 0){

            printf("\nN�mero par");

        }else{

            printf("\nN�mero �mpar");

        }
        
        printf("\nN�mero: ");
        scanf("%i", &N);

    }

    return 0;

}