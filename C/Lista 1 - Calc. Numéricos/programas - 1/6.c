#include <stdio.h>
#include <locale.h>

/* Recebe o salário base de um funcionário, calcula e mostra o salário a
receber (gratificação de 5% e imposto de 7% sobre o salário base) */

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float salariobase, salariofinal, gratificacao, imposto;

    printf("Insira o salário base: ");

    scanf("%f", &salariobase);

    gratificacao = 0.05 * (salariobase); // 5% do salario inicial
    
    imposto = 0.07 * (salariobase); // 7% do salario inicial

    salariofinal = (salariobase + gratificacao) - imposto;

    printf("O salário final incluindo a gratificação de 5 por cento (R$%.2f) e o imposto de 7 por cento (R$%.2f) será de R$%.2f.", gratificacao, imposto, salariofinal);

    return 0;
}// fim int main