#include <stdio.h>
#include <locale.h>

// L� 10 valores e conta quantos est�o dentro e fora do intervalo [10,20]

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x = 1, N, CONT1 = 0, CONT2 = 0;

    printf("Insira 10 n�meros");

    do{
        printf("\n\n%i�: ", x);
        scanf("%i", &N);

        if(N >= 10 && N <= 20){
       
            CONT1++;

        }else{

            CONT2++;

        }

        x++;
        
    }while(x <= 10);

    printf("Quantidade de n�meros no intervalo [10,20]: %i", CONT1);
    printf("\nQuantidade de n�meros fora do intervalo [10,20]: %i", CONT2);

    return 0;

}