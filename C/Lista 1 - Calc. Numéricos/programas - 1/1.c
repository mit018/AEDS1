#include <stdio.h>
#include <locale.h>

// Determina a soma e a média de 3 números entrados pelo teclado

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float a, b, c;

    printf("Digite 3 números: ");

    scanf("%f %f %f", &a, &b, &c);

    float soma = a + b + c;

    float media = (soma) / 3;

    printf("A soma de %.2f %.2f é %.2f e %.2f e sua média é %.2f.", a, b, c, soma, media);
    
    return 0;

} // fim int main
