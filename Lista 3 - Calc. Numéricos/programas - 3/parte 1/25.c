#include <stdio.h>
#include <locale.h>

// Recebe o c�digo do cliente, tipo de investimento, valor investido e calcula
// o rendimento mensal de acordo com o tipo, o total investido e o total de juros pagos

int main(){

    setlocale (LC_ALL, "Portuguese");

    int codigo, inv;

    float valor, rendMensal, totalinv = 0, rend1 = 0, rend2 = 0, rend3 = 0;

    printf("Digite o c�digo do cliente (0 para encerrar a entrada de dados)\nC�digo: ");
    scanf("%i", &codigo);

    if(codigo == 0){

        return 0;

    }

    printf("Op��es dispon�veis\n1. Poupan�a\n2. Poupan�a plus\n3. Fundos de renda fixa");
    
    while(codigo != 0){

        printf("\nN�mero escolhido para o tipo de investimento: ");
        scanf("%i", &inv);

        if(inv > 3 && inv < 1){

            printf("Insira um n�mero v�lido para o tipo de investimento (1 a 3)");
            
            return 0;
        }

        printf("Insira o valor do investimento: R$");
        scanf("%f", &valor);

        if(inv == 1){

            rend1 += (0.015 * valor); //acumulador do rendimento mensal de cada tipo de investimento

        }else if(inv == 2){

            rend2 += (0.02 * valor);

        }else if(inv == 3){

            rend3 += (0.04 * valor);

        }

        totalinv += valor; // acumulador do valor investido por cada cliente
        
        printf("\nC�digo: ");

        scanf("%i", &codigo);

    }// fim for
    
    rendMensal = (rend1 + rend2 + rend3); // valor da renda total, que � o juros pago pelo banco

    printf("Rendimento mensal para cada tipo de investimento");
    printf("\n1. Poupan�a: R$%.2f.", rend1);
    printf("\n2. Poupan�a plus: R$%.2f.", rend2);
    printf("\n3. Fundos de renda fixa: R$%.2f.", rend3);

    printf("\nTotal investido: R$%.2f", totalinv);

    printf("\nTotal de juros pagos: R$%.2f", rendMensal);

    return 0;

}// fim int main