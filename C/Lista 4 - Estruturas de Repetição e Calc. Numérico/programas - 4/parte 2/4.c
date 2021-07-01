#include <stdio.h>
#include <locale.h>

// Escreve a soma dos 20 primeiros n�meros da s�rie: 100/0! + 99/1! + 98/2! + ... + 1/99!

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y = 0, aux;
    float num, den, R, S = 0;

    printf("Somat�rio = ");

    for(num = 100; num >= 80; num--){

        den = y; // denominador assume o valor de y por enquanto, para depois ser calculado o valor de seu fatorial (cada vez de um n�mero maior ja que y aumenta uma unidade a cada repeti��o: 0, 1, 2, 3..)
        aux = y;

        // se y = 0 ou 1 o for abaixo n�o � executado pois x = 1, e 1 n�o � < 1, nem < 0 (valores de y), ou seja, a condi��o do for n�o ser� verdadeira para esses valores de y
        // portanto o denominador continuar� com o valor de y (0 ou 1) para 0! e 1! respectivamente

        for(x = 1; x < y; x++){ // o c�lculo � repetido (y - 2) vezes

            den *= (aux - 1); // fatorial do n�mero y-> den!
            aux--; 
        }

        if(den != 0){ // denominador precisa ser diferente de 0 para realizar o c�lculo

            R = num / den;
            S += R;

        }

        y++; // y aumenta uma unidade a cada repeti��o (primeiro valor de y = 0)

        if(num > 80){ // quando o numerador for 80 (�ltimo da soma), o printf executado ser� o da linha 31 (sem o sinal de + no final)
            
            printf("(%.f/%.f) + ", num, den);

        }
    }// fim for

    printf("(80/%.f)", den);
    printf("\n100/0 -> Imposs�vel");
    printf("\nSomat�rio = %.2f", S);


    return 0;

}// fim int main
