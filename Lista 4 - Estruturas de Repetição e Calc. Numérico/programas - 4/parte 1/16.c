#include <stdio.h>
#include <locale.h>

// Repete a leitura de um n�mero fornecido enquanto for diferente de 0
// e para cada n�mero fornecido, informa se � positivo ou negativo usando while

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    float N;

    printf("Insira um valor (digite 0 para encerrar a entrada de dados)\n");
    
    printf("\nN�mero: ");
    scanf("%f", &N);


    while(N != 0){

        if(N < 0){

            printf("\nN�mero negativo");

        }else if(N > 0){

            printf("\nN�mero positivo");

        }
        
        printf("\nN�mero: ");
        scanf("%f", &N);

    }

    return 0;

}