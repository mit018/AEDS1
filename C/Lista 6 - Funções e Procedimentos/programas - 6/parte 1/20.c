#include <stdio.h>
#include <locale.h>

// L� o sal�rio e n�mero de filhos de um n�mero n�o determinado de pessoas
// e retorna a m�dia de sal�rio da popula��o, a m�dia do n�mero de filhos, o maior sal�rio e 
// o percentual de pessoas com sal�rio inferior a R$ 380,00.

void pesquisa()
{
    float salario = 1, salTotal = 0, filTotal = 0, maior = 0, inferior = 0, porc, mediaS, mediaF;
    int filhos, cidadao = 0;

    while (salario != 0)
    {
        printf("Digite 0 em sal�rio para encerrar a entrada de dados");
        printf("\nInsira o sal�rio: R$");
        scanf("%f", &salario);

        if (salario != 0)
        {
            printf("Insira o n�mero de filhos: ");
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

    printf("M�dia de sal�rio da popula��o: R$%.2f.\n", mediaS);
    printf("M�dia do n�mero de filhos da popula��o: %.2f.\n", mediaF);
    printf("Maior sal�rio: R$%.2f.\n", maior);
    printf("Porcentagem de pessoas com salario menor que R$380,00: %.2f%c.\n", porc, '%');

} // fim void pesquisa

int main()
{

    setlocale(LC_ALL, "Portuguese");

    pesquisa();

    return 0;
} // fim int main