#include <stdio.h>
#include <locale.h>

// Recebe o valor de um carro e mostra uma tabela com o preço final, quatidade de
// parcelas e valor da parcela de acordo com as informações da questão no livro (pg. 147)

int main(){

    setlocale (LC_ALL, "Portuguese");

    float valor, final, finalVista, i, acrescimo, cadaparcela;

    int parcela;

    printf("Insira o valor do carro: R$");

    scanf("%f", &valor);

    finalVista = valor * 0.8;

    final = valor * 1.03; // acrescimo referente a 6 parcelas

    cadaparcela = final / 6;

    printf("-------------------------+-----------------------+----------------\n");
    printf("| Quantidade de parcelas | Valor de cada parcela | Preço final   |\n");
    printf("-------------------------+-----------------------+----------------\n");
    printf("|        À VISTA         |        R$%.2f      |    R$%.2f   |\n", valor, finalVista);
    printf("-------------------------+-----------------------+----------------\n");
    printf("|          6             |        R$%.2f       |   R$%.2f   |\n", cadaparcela, final);
    
    for(i = 2; i <= 10; i++){

        parcela = 6 * i;

        acrescimo = 0.03 * i;

        final = valor * (acrescimo + 1);

        cadaparcela = final / parcela;

        printf("-------------------------+-----------------------+----------------\n");

        printf("|          %i            |        R$%.2f        |   R$%.2f   |\n", parcela, cadaparcela, final);

    
    } // fim for

    printf("-------------------------+-----------------------+----------------\n");

    return 0;

}// fim int main