#include <stdio.h>
#include <math.h>
#include <locale.h>

// Encontra a parte inteira de um n�mero real

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    int x;

    printf("Insira um n�mero real: ");

    scanf("%d", &x); // l� apenas a parte inteira do n�mero real


    printf("A parte inteira desse n�mero vale %d", x);

    return 0;
}// fim int main