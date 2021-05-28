#include <stdio.h>
#include <locale.h>

// Repete a leitura de um número fornecido enquanto for diferente de 0
// e para cada número fornecido, informa se é positivo ou negativo usando while

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    float N;

    printf("Insira um valor (digite 0 para encerrar a entrada de dados)\n");
    
    printf("\nNúmero: ");
    scanf("%f", &N);


    while(N != 0){

        if(N < 0){

            printf("\nNúmero negativo");

        }else if(N > 0){

            printf("\nNúmero positivo");

        }
        
        printf("\nNúmero: ");
        scanf("%f", &N);

    }

    return 0;

}