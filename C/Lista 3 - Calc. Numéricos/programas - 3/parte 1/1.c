#include <stdio.h>
#include <locale.h>

// L� cinco grupos de quatro valores e os organiza em
// ordem crescente e descrescente

int main()

{

    setlocale (LC_ALL, "Portuguese");

    float a, b, c, d, y, x, z;

    int grupo = 0;


    for(x = 1; x <= 5; x++){ // repetir 5 vezes (5 grupos de 4 n�meros)

        grupo++;
        
        printf("Insira o %i� grupo de 4 n�meros: ", grupo);

        scanf("%f %f %f %f", &a, &b, &c, &d);

        printf("A ordem original digitada foi: %.2f; %.2f; %.2f; %.2f.\n", a, b, c, d);

        // ordem original: a b c d

        for(y = 0; y < 3; y++){ // repetir 3x para organizar

            if(d > c){ // se d for maior do que c, ent�o o valor de c deve estar na ultima posi��o por enquanto (posi��o que o d ocupa na ordem)

                z = d;  // coloca o valor de d em z, deixando a vari�vel d dispon�vel para armazenar o valor de c

                d = c;  // coloca o valor de c em d

                c = z;  // coloca o valor de z (valor de d inicial) em c

            }
            if(c > b){ // se c for maior do que b, ent�o o valor de b deve estar na terceira posi��o por enquanto (posi��o que o c ocupa na ordem)

                z = c; // coloca o valor de c em z, deixando a vari�vel c dispon�vel para armazenar o valor de b

                c = b; // coloca o valor de b em c

                b = z; // coloca o valor de z (valor de c inicial) em b


            }
            if(b > a){ // se b for maior do que a, ent�o o valor de a deve estar na segunda posi��o por enquanto (posi��o que o b ocupa na ordem)

                z = b; // coloca o valor de b em z, deixando a vari�vel b dispon�vel para receber o valor de a

                b = a; // coloca o valor de a em b
                
                a = z; // coloca o valor de z (valor inicial de b) em a
            
            }
        }
       
        printf("A ordem crescente �: %.2f < %.2f < %.2f < %.2f.\n", d, c, b, a);

        printf("A ordem decrescente �: %.2f > %.2f > %.2f > %.2f.\n", a, b, c, d);

    } // fim for


    return 0;

} // fim int main

