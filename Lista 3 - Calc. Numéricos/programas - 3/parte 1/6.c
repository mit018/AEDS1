#include <stdio.h>
#include <locale.h>

// Recebe o c�digo e o valor de quinze transa��es e calcula o valor total das compras � vista
//  e a prazo, das compras efetuadas, o valor da primeira presta��o das compras a prazo juntas,
// sabendo-se que ser�o pagas em tr�s vezes

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float tran, vista = 0, prazo = 0, total, pp = 0; // pp = primeira presta��o

    int x;

    char codigo;

    for (x = 1; x <= 14; x++) // repetir 15 vezes
    { 

        printf("Insira o c�digo da transa��o (V - � vista; P - a prazo): ");

        scanf(" %c", &codigo);

        if (codigo == 'V')
        {

            printf("Insira o valor da transa��o � vista: R$");

            scanf("%f", &tran);

            if (tran < 0)
            {

            printf("\nInsira um valor v�lido.");

            return 0;
            }

            vista = vista + tran; // acumulador dos valores pagos � vista

        }
        else if (codigo == 'P')
        {

            printf("Insira o valor da transa��o a prazo: R$");

            scanf("%f", &tran);

            if (tran < 0)
            {

            printf("\nInsira um valor v�lido.");

            return 0;
            }

            pp = pp + (tran / 3);

            prazo = prazo + tran; // acumulador dos valores pagos a prazo

        }
        else
        {

            printf("\nInsira um c�digo v�lido.");

            return 0;

        }

    } // fim for 

    total = prazo + vista;

    printf("O valor total das compras efetuadas � de R$%.2f.\n", total);

    printf("O valor total das compras � vista � de R$%.2f.\n", vista);

    printf("O valor total das compras a prazo � de R$%.2f.\n", prazo);

    printf("O valor da primeira presta��o das compras a prazo juntas � de R$%.2f.\n", pp);

    return 0;
} // fim int main