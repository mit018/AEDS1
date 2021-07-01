#include <stdio.h>
#include <locale.h>

// Recebe o tipo e o valor de um investimento e calcula o valor corrigido após 
// um mes de acordo com o tipo (especificado na tabela da questão no livro - pg. 92)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tipo;

    float rendimento, valor;

    printf("Especifique o tipo de investimento (1 para Poupança e 2 para Fundos de renda fixa) e seu valor: ");

    scanf("%d %f", &tipo, &valor);

    if(valor <= 0){

    printf("Insira um valor válido.");

    }

    if(tipo == 1){

        rendimento = valor * 1.03;

    } else if(tipo == 2){

        rendimento = valor * 1.04;

    } else{

        printf("Insira um número válido para o tipo de investimento (1 ou 2)");

    }


    printf("O valor do investimento após um mês é de R$%.2f.", rendimento);

    return 0;
}// fim int main