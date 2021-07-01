#include <stdio.h>
#include <locale.h>

// Calcula a m�dia e o devio padr�o de uma sequ�ncia de n�meros

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int cont = 0;
    float num, media, total;

    printf("Insira dois ou mais n�meros para calcular sua m�dia (digite 0 para encerrar)");
   

    do{

        cont++; // contador de quantos n�meros foram inseridos

        printf("\n%i�: ", cont);
        scanf("%f", &num);

        total += num; // acumulador dos valores digitados

        
    }while(num != 0); // fim do - while

    media = total / (cont - 1); // tira uma unidade do contador pois o 0 conta como n�mero inserido

    printf("A m�dia dos n�meros digitados � %.2f", media);

    return 0;

}// fim int main

/* imposs�vel fazer desvio padr�o sem usar vetor, pois precisa armazenar o valor de cada n�mero digitado */
