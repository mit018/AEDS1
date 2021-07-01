#include <stdio.h>
#include <locale.h>

// Calcula a potência de X elevado a Y usando recursividade

int potencia(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return x * potencia(x, y - 1);
    }
} // fim int potencia

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int x, y, R;

    printf("Digite um número e sua potência (ambos inteiros positivos)");
    printf("\nNúmero: ");
    scanf("%i", &x);
    printf("\nPotência: ");
    scanf("%i", &y);

    R = potencia(x, y);

    printf("%i elevado a %i vale %i.", x, y, R);

    return 0;
} // fim int main