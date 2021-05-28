#include <stdio.h>
#include <locale.h>

// recebe o c�digo, pre�o de compra e venda de uma mercadoria, retorna quantas
// proporcionam lucro < 10%, entre 10% e 20% e > 20%
// e o valor total de compra e venda de todas as mercadorias, assim como o lucro total

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int cod, x = 0, y = 0, z = 0;
    float compra, venda, lucro, porcLucro, lucroT  = 0, compraT = 0, vendaT = 0;

    printf("Insira os dados sobre a mercadoria (Digite 0 em c�digo para encerrar a entrada)");

    printf("\nC�digo: ");
    scanf("%i", &cod);
    
    while(cod != 0){

        printf("Pre�o de compra: R$");
        scanf("%f", &compra);

        compraT += compra; // acumulador dos pre�os de compra

        printf("Pre�o de venda: R$");
        scanf("%f", &venda);

        vendaT += venda; // acumulador dos pre�os de compra

        lucro = venda - compra;

        lucroT += lucro; // acumulador dos valores de lucro

        porcLucro = 100 * (lucro / venda); // lucro em rela��o ao pre�o de venda (porcentagem)

        if(porcLucro < 10){

            x++; // contadores para a quantidade de produtos com porcentagem de lucro na faixa desejada (especificada dentro do if)

        }else if(porcLucro >= 10 && porcLucro <= 20){

            y++;

        }else if(porcLucro > 20){

            z++;

        }
        
        printf("\nC�digo: ");
        scanf("%i", &cod);

    }

    printf("\nQuantidade de mercadorias com lucro\n");
    printf("menor que 10%c: %i\n", '%', x);
    printf("maior ou igual a 10%c e menor ou igual a 20%c: %i\n", '%', '%', y);
    printf("maior que 20%c: %i\n", '%', z);

    printf("\nPre�o de compra total: R$%.2f.", compraT);
    printf("\nPre�o de venda total: R$%.2f.", vendaT);
    printf("\nLucro total: R$%.2f.", lucroT);

    return 0;

}