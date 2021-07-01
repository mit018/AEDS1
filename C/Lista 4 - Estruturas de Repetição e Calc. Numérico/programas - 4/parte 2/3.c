#include <stdio.h>
#include <locale.h>

// Calcula o somatório: 1/225 + 2/196 + 4/169 + 8/144 + ... + 16384/1

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x, den;
    float S = 0, R, num = 0.5;

    printf("Somatório = ");

    for(x = 15; x >= 1; x--){

        num *= 2; // numerador = numerador * 2 

        den = x * x; // denominador é o quadrado do valor de x, que vai de 15 a 1 (sem necessidade de adicionar a biblioteca math para criar a potência de 2)

        R = num / den; 
        
        S += R; // acumulador dos valores iniciais

        if(den != 1){ // quando o denominador for 1, o printf executado será o da linha 31 (sem o sinal de + no final)

            printf("(%.f/%i) + ", num, den);
        }
    }// fim for

    printf("(%.f/%i)", num, den);

    printf("\nSomatório = %.2f", S);

    return 0;

}// fim int main
