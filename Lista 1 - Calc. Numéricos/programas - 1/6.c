#include <stdio.h>
#include <locale.h>

/* Recebe o sal�rio base de um funcion�rio, calcula e mostra o sal�rio a
receber (gratifica��o de 5% e imposto de 7% sobre o sal�rio base) */

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float salariobase, salariofinal, gratificacao, imposto;

    printf("Insira o sal�rio base: ");

    scanf("%f", &salariobase);

    gratificacao = 0.05 * (salariobase); // 5% do salario inicial
    
    imposto = 0.07 * (salariobase); // 7% do salario inicial

    salariofinal = (salariobase + gratificacao) - imposto;

    printf("O sal�rio final incluindo a gratifica��o de 5 por cento (R$%.2f) e o imposto de 7 por cento (R$%.2f) ser� de R$%.2f.", gratificacao, imposto, salariofinal);

    return 0;
}// fim int main