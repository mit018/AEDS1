#include <stdio.h>
#include <locale.h>

// Lê o salário e número de filhos de um número não determinado de pessoas
// e retorna a média de salário da população, a média do número de filhos, o maior salário e 
// o percentual de pessoas com salário inferior a R$ 380,00.

void pesquisa()
{
    float salario = 1, salTotal = 0, filTotal = 0, maior = 0, inferior = 0, porc, mediaS, mediaF;
    int filhos, cidadao = 0;

    while (salario != 0)
    {
        printf("Digite 0 em salário para encerrar a entrada de dados");
        printf("\nInsira o salário: R$");
        scanf("%f", &salario);

        if (salario != 0)
        {
            printf("Insira o número de filhos: ");
            scanf("%i", &filhos);

            cidadao++;
            salTotal += salario;
            filTotal += filhos;

            if (salario > maior)
            {

                maior = salario;
            }
            if (salario < 380)
            {

                inferior++;
            }

            mediaS = salTotal / cidadao;
            mediaF = filTotal / cidadao;
            porc = 100 * (inferior / cidadao);
        }
    } // fim while

    printf("Média de salário da população: R$%.2f.\n", mediaS);
    printf("Média do número de filhos da população: %.2f.\n", mediaF);
    printf("Maior salário: R$%.2f.\n", maior);
    printf("Porcentagem de pessoas com salario menor que R$380,00: %.2f%c.\n", porc, '%');

} // fim void pesquisa

int main()
{

    setlocale(LC_ALL, "Portuguese");

    pesquisa();

    return 0;
} // fim int main