#include <stdio.h>
#include <locale.h>

// Recebe 10 n�meros inteiros e exibe a quatidade de primos dentre os digitados

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int num, i, x, y = 0, primos = 0;

    for (i = 1; i <= 10; i++)
    { // repetir 10  vezes

        printf("Insira um n�mero inteiro: ");

        scanf("%i", &num);

        for (x = 1; x <= num; x++)
        { // o n�mero digitado vai ser dividido por todos os outros anteriores a ele

            if ((num % x) != 0)
            { // o resto dessas divis�es precisa ser diferente de 0 para que o n�mero seja primo

                y++;

            }
        }
        if (y == (num - 2))
        { // o n�mero de vezes que o resto � 0 precisa ser 2 unidades menor do que o pr�prio n�mero digitado (2 unidades devido a divis�o do n�mero por ele mesmo e por 1 - possuem resto igual a 0)

            primos++;

        }

        y = 0; // redefinir o contador das divis�es como 0 para n�o atrapalhar os outros n�meros
    
    } // fim for

    printf("Quantidade de n�meros primos digitados: %i.\n", primos);

    return 0;

} // fim int main