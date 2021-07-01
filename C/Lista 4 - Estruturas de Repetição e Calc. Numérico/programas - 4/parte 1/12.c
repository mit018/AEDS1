#include <stdio.h>
#include <locale.h>

// lê 10 valores e escreve quantos são negativos

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x = 1, N, CONT = 0;

    printf("Insira 10 números\n%i°: ", x);
    scanf("%i", &N);
    
    for(x = 1; x < 10; x++){
      
        if(N < 0){
       
            CONT++;

        }

        printf("\n\n%i°: ", x + 1);
        scanf("%i", &N);
    }

    printf("Quantidade de números negativos inseridos: %i", CONT);

    return 0;

}