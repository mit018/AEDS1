#include <stdio.h>
#include <locale.h>

// Calcula a soma de quatro n�meros

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    int a, b, c, d;

    printf("Insira 4 n�meros: ");

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int soma = a + b + c + d;

    printf("A soma dos 4 n�meros � igual a %d.", soma);
    
    return 0;

}// fim int main