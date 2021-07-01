#include <stdio.h>
#include <locale.h>

// Receba um valor inteiro e positivo, calcula e mostra seu fatorial

void fatorial(int d)
{
    int i;
    printf("%i! = ", d);

    for (i = d - 1; i > 0; i--)
    {
        d *= i;
    }

    printf("%i", d);
}// fim void fatorial

int main(){

    setlocale (LC_ALL, "Portuguese");

    int d;

    printf("Insira um valor inteiro e positivo: ");
    scanf("%i", &d);

    fatorial(d);

    return 0;
}// fim int main