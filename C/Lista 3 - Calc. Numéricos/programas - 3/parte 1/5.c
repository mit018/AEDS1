#include <stdio.h>
#include <locale.h>

// Exibe as tabuadas dos números de 1 a 10

int main(){

    setlocale (LC_ALL, "Portuguese");

    int x, i, y;

    for(x = 1; x <= 10; x++){ // repete 10 vezes -> número (x) que será multiplicado por cada um dos valores que i assumir

        for(i = 0; i <=10; i++){ // repete 11 vezes -> número (i) que vai multiplicar o x, aumenta 1 unidade 11 vezes

        y = x * i;

        printf("%i * %i = %i\n", x, i, y);

    } // fim for 2

    } // fim for 1

    return 0;

} // fim int main