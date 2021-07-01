#include <stdio.h>
#include <locale.h>

// Calcula a soma de quatro números

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    int a, b, c, d;

    printf("Insira 4 números: ");

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int soma = a + b + c + d;

    printf("A soma dos 4 números é igual a %d.", soma);
    
    return 0;

}// fim int main