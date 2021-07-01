#include <stdio.h>
#include <locale.h>

// Recebe o tipo de combustível abastecido e retorna a quantidade de clientes
// que abasteceram em cada tipo

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int tipo, a = 0, g = 0, d = 0;

    printf("Insira o tipo de combústivel abastecido dentre as opções abaixo:\n");
    printf("1. Álcool\n2. Gasolina\n3. Diesel\n4.Fim\n");
    printf("Tipo: ");
    scanf("%i", &tipo);

    while(tipo != 4){

        while(tipo > 4 || tipo < 1){

            printf("INVÁLIDO\nInsira um número entre 1 e 4 para o tipo de combustível.");
            printf("\nTipo: ");
            scanf("%i", &tipo);

        }

        if(tipo == 1){

            printf("ÁLCOOL");

            a++; // contador para cada tipo de combustível
            
        }else if(tipo == 2){

            printf("GASOLINA");

            g++;

        }else if(tipo == 3){

            printf("DIESEL");

            d++;

        }
        
        printf("\nMUITO OBRIGADO!");

        printf("\nTipo: ");
        scanf("%i", &tipo);


    }// fim while

    printf("Quantidade de clientes que abastaceram cada tipo de combustível");
    printf("\nÁlcool: %i", a);
    printf("\nGasolina: %i", g);
    printf("\nDiesel: %i", d);

    return 0;

}// fim int main