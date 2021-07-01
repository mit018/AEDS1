#include <stdio.h>
#include <locale.h>

// Recebe o tipo de ação, o preço de compra e de venda e calcula o lucro de cada ação,
// a quantidade de ações com lucro superior a R$1000,00, a quantidade com lucro inferior 
// a R$200,00 e o lucro total da empresa

int main(){

    setlocale (LC_ALL, "Portuguese");

    char acao;

    float compra, venda, lucro, lucroT;

    int CONT1 = 0, CONT2 = 0;

    printf("Digite os dados de cada ação (Insira %cF%c na categoria %cTipo%c para encerrar a entrada de dados)", '"', '"', '"', '"');
    
    while(acao != 'F'){
        
        printf("\nTipo (uma letra): ");

        scanf(" %c", &acao);

        if(acao != 'F'){

            printf("\nPreço de compra: R$");

            scanf("%f", &compra);

            printf("\nPreço de venda: R$");

            scanf("%f", &venda);

            lucro = venda - compra;

            printf("\nLucro dessa ação (%c) = R$%.2f.", acao, lucro);

            lucroT += lucro; // acumulador dos lucros das ações

            if(lucro > 1000){

                CONT1++; // contador da quantidade de açoes com lucro maior do que 1000

            }else if(lucro < 200){

                CONT2++; // contador da quantidade de ações com lucro menor do que 200

            }
        
        }

    }

    printf("\nA quantidade de ações com lucro superior a R$1000,00 é %i.", CONT1);

    printf("\nA quantidade de ações com lucro inferior a R$200,00 é %i.", CONT2);
    
    return 0;

}