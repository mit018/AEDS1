#include <stdio.h>
#include <locale.h>

// Recebe 10 números e calcula a soma dos pares e a soma dos primos

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int num, i, x, y = 0, par = 0, pri = 0;

    for (i = 1; i <= 10; i++)
    { // repetir 10  vezes

        printf("Insira um número inteiro: ");

        scanf("%i", &num);

        if ((num % 2) == 0)
        {

            par += num;

        }

        for (x = 1; x <= num; x++)
        { // o número digitado vai ser dividido por todos os outros anteriores a ele

            if ((num % x) != 0)
            { // o resto dessas divisões precisa ser diferente de 0 para que o número seja primo

                y++;

            }
        }
        if (y == (num - 2))
        { // o número de vezes que o resto é 0 precisa ser 2 unidades menor do que o próprio número digitado (2 unidades devido a divisão do número por ele mesmo e por 1 - possuem resto igual a 0)

            pri += num;

        }

        y = 0; // redefinir o contador das divisões como 0 para não atrapalhar os outros números
    
    } // fim for

    printf("Soma dos números pares digitados: %i.\n", par);

    printf("Soma dos números primos digitados: %i.\n", pri);

    return 0;

} // fim int main