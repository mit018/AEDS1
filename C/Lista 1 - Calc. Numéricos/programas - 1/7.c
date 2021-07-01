#include <stdio.h>
#include <math.h>
#include <locale.h>

/* Recebe o valor de um dep�sito e o da taxa de juros, calcula e mostra o valor do rendimento
e o valo total depois do rendimento */

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float deposito, taxa, rendimento, final, tempo;

    char juros, unidadedetempo;

    printf("Insira o valor do dep�sito: ");

    scanf("%f", &deposito);

    // o printf seguinte diz ao usu�rio que a frequ�ncia do juros � mensal e pede pra especificar o tipo de juros.

    printf("Insira qual o tipo de juros  (S - simples ou C - composto): ");

    scanf(" %c", &juros);

    printf("Insira a taxa de juros (porcentagem): ");

    scanf("%f", &taxa);

    // O printf seguinte diz ao usu�rio para especificar a quantidade de tempo que passou/vai passar. O juros será aplicado determinadas vezes em função da unidade de tempo escolhida. 

    printf("Insira por quanto tempo o juros ser� aplicado (ex.: 10 meses ou anos): "); 

    scanf("%f %c", &tempo, &unidadedetempo);


    if(juros == 'S'){ // se o juros for simples

        if(unidadedetempo == 'm'){

            final = deposito * (1 + (tempo * (taxa / 100)));

            printf("O rendimento final ap�s %.2f m�s(es) vale R$%.2f.\n", tempo, final);

        } else if(unidadedetempo == 'a'){

            final = deposito * (1 + (12 * tempo * (taxa / 100)));

            printf("O rendimento final ap�s %.2f ano(s) vale R$%.2f.\n", tempo, final);
        }


    } else if(juros == 'C'){ // se o juros for composto

        if(unidadedetempo == 'm'){

            final = deposito * pow((1 + (taxa / 100)), tempo);

            printf("O rendimento final ap�s %.2f mes(es) vale R$%.2f.\n", tempo, final);

        } else if(unidadedetempo == 'a'){

            final = deposito * pow((1 + (taxa / 100)), (12 * tempo));

            printf("O rendimento final ap�s %.2f ano(s) vale R$%.2f.\n", tempo, final);

        }

    }
    
    rendimento = final - deposito; // valor do ganho em juros

    printf("O total ganho em juros vale R$%.2f.", rendimento);

    return 0;
}// fim int main