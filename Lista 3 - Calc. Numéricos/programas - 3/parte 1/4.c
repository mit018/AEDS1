#include <stdio.h>
#include <locale.h>

// Exibe a tabuada de um n�mero inserido pelo usu�rio

int main(){

    setlocale (LC_ALL, "Portuguese");

    int x, i, y;

    printf("Insira um n�mero inteiro para obter sua tabuada: ");

    scanf("%i", &x);

    for(i = 0; i <=10; i++){

        y = x * i;
        printf("%i * %i = %i\n", x, i, y);

    } // fim for

    return 0;

} // fim int main