#include <stdio.h>
#include <locale.h>

// Recebe o código e o valor de quinze transações e calcula o valor total das compras à vista
//  e a prazo, das compras efetuadas, o valor da primeira prestação das compras a prazo juntas,
// sabendo-se que serão pagas em três vezes

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float tran, vista = 0, prazo = 0, total, pp = 0; // pp = primeira prestação

    int x;

    char codigo;

    for (x = 1; x <= 14; x++) // repetir 15 vezes
    { 

        printf("Insira o código da transação (V - à vista; P - a prazo): ");

        scanf(" %c", &codigo);

        if (codigo == 'V')
        {

            printf("Insira o valor da transação à vista: R$");

            scanf("%f", &tran);

            if (tran < 0)
            {

            printf("\nInsira um valor válido.");

            return 0;
            }

            vista = vista + tran; // acumulador dos valores pagos à vista

        }
        else if (codigo == 'P')
        {

            printf("Insira o valor da transação a prazo: R$");

            scanf("%f", &tran);

            if (tran < 0)
            {

            printf("\nInsira um valor válido.");

            return 0;
            }

            pp = pp + (tran / 3);

            prazo = prazo + tran; // acumulador dos valores pagos a prazo

        }
        else
        {

            printf("\nInsira um código válido.");

            return 0;

        }

    } // fim for 

    total = prazo + vista;

    printf("O valor total das compras efetuadas é de R$%.2f.\n", total);

    printf("O valor total das compras à vista é de R$%.2f.\n", vista);

    printf("O valor total das compras a prazo é de R$%.2f.\n", prazo);

    printf("O valor da primeira prestação das compras a prazo juntas é de R$%.2f.\n", pp);

    return 0;
} // fim int main