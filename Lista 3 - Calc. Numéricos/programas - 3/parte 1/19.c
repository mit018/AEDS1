#include <stdio.h>
#include <locale.h>

// Recebe o tipo de a��o, o pre�o de compra e de venda e calcula o lucro de cada a��o,
// a quantidade de a��es com lucro superior a R$1000,00, a quantidade com lucro inferior 
// a R$200,00 e o lucro total da empresa

int main(){

    setlocale (LC_ALL, "Portuguese");

    char acao;

    float compra, venda, lucro, lucroT;

    int CONT1 = 0, CONT2 = 0;

    printf("Digite os dados de cada a��o (Insira %cF%c na categoria %cTipo%c para encerrar a entrada de dados)", '"', '"', '"', '"');
    
    while(acao != 'F'){
        
        printf("\nTipo (uma letra): ");

        scanf(" %c", &acao);

        if(acao != 'F'){

            printf("\nPre�o de compra: R$");

            scanf("%f", &compra);

            printf("\nPre�o de venda: R$");

            scanf("%f", &venda);

            lucro = venda - compra;

            printf("\nLucro dessa a��o (%c) = R$%.2f.", acao, lucro);

            lucroT += lucro; // acumulador dos lucros das a��es

            if(lucro > 1000){

                CONT1++; // contador da quantidade de a�oes com lucro maior do que 1000

            }else if(lucro < 200){

                CONT2++; // contador da quantidade de a��es com lucro menor do que 200

            }
        
        }

    }

    printf("\nA quantidade de a��es com lucro superior a R$1000,00 � %i.", CONT1);

    printf("\nA quantidade de a��es com lucro inferior a R$200,00 � %i.", CONT2);
    
    return 0;

}