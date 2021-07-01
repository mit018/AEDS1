#include <stdio.h>
#include <locale.h>

// Calcula a média e o devio padrão de uma sequência de números

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int cont = 0;
    float num, media, total;

    printf("Insira dois ou mais números para calcular sua média (digite 0 para encerrar)");
   

    do{

        cont++; // contador de quantos números foram inseridos

        printf("\n%i°: ", cont);
        scanf("%f", &num);

        total += num; // acumulador dos valores digitados

        
    }while(num != 0); // fim do - while

    media = total / (cont - 1); // tira uma unidade do contador pois o 0 conta como número inserido

    printf("A média dos números digitados é %.2f", media);

    return 0;

}// fim int main

/* impossível fazer desvio padrão sem usar vetor, pois precisa armazenar o valor de cada número digitado */
