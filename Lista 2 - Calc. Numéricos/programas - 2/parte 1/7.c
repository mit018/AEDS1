#include <stdio.h>
#include <locale.h>

// Recebe um sal�rio e mostra ele reajustado 
// (aumento de 30% se o sal�rio inicial for inferior a R$500,00)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, salariof;

    printf("Insira o valor do sal�rio: R$");

    scanf("%f", &salario);

    if(salario <= 500 && salario > 0){

        salariof = salario * 1.3;

        printf("O sal�rio reajustado vale R$%.2f", salariof);

    } else if(salario <= 0){

        printf("Valor inv�lido");

    } else if(salario > 500){

        printf("O valor inserido n�o se aplica �s condi��es de reajuste.");

    }

    return 0;
}// fim int main