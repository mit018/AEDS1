#include <stdio.h>
#include <locale.h>

// Recebe um salário e mostra ele reajustado 
// (aumento de 30% se o salário inicial for inferior a R$500,00)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, salariof;

    printf("Insira o valor do salário: R$");

    scanf("%f", &salario);

    if(salario <= 500 && salario > 0){

        salariof = salario * 1.3;

        printf("O salário reajustado vale R$%.2f", salariof);

    } else if(salario <= 0){

        printf("Valor inválido");

    } else if(salario > 500){

        printf("O valor inserido não se aplica às condições de reajuste.");

    }

    return 0;
}// fim int main