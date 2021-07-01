#include <stdio.h>
#include <math.h>
#include <locale.h>

// Encontra a parte inteira de um número real

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    int x;

    printf("Insira um número real: ");

    scanf("%d", &x); // lê apenas a parte inteira do número real


    printf("A parte inteira desse número vale %d", x);

    return 0;
}// fim int main