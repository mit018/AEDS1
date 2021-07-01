#include <stdio.h>
#include <locale.h>

// Lê 10 valores e conta quantos estão dentro e fora do intervalo [10,20]

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x = 1, N, CONT1 = 0, CONT2 = 0;

    printf("Insira 10 números");

    do{
        printf("\n\n%i°: ", x);
        scanf("%i", &N);

        if(N >= 10 && N <= 20){
       
            CONT1++;

        }else{

            CONT2++;

        }

        x++;
        
    }while(x <= 10);

    printf("Quantidade de números no intervalo [10,20]: %i", CONT1);
    printf("\nQuantidade de números fora do intervalo [10,20]: %i", CONT2);

    return 0;

}