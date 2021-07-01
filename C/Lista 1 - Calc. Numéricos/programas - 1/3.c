#include <stdio.h>
#include <math.h>
#include <locale.h>

// Retorna a raiz quadrada de um número

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    float radicando;

    printf("Insira um número: ");

    scanf("%f", &radicando);
    
    float raizquadrada = sqrt(radicando);

    printf("A raiz quadradada de %.2f é igual a %.2f.", radicando, raizquadrada);
    
    return 0;

}// fim int main