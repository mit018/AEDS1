#include <stdio.h>
#include <locale.h>

// Recebe o código e quantidade do produto comprado e calcula o seu preço unitário,
// preço total da nota, valor do desconto e preço final na nota depois do desconto,
// de acordo com a tabela da questão no livro (pg. 93)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int codigo, quantidade;

    float precof, preco, nota, desconto, vdesconto;

    printf("Insira o código do produto (de 1 a 40) e a quantidade comprada: ");

    scanf("%d %d", &codigo, &quantidade);

    if (quantidade < 0)
    {

        printf("Insira um número válido para a quantidade.");
    }

    if (codigo >= 1 && codigo <= 10)
    {

        preco = 10;
    }
    else if (codigo >= 11 && codigo <= 20)
    {

        preco = 15;
    }
    else if (codigo >= 121 && codigo <= 30)
    {

        preco = 20;
    }
    else if (codigo >= 31 && codigo <= 40)
    {

        preco = 15;
    }
    else
    {

        printf("Insira um código válido");

        return 0;
    }

    nota = preco * quantidade;

    if (nota <= 250)
    {
        desconto = 5;
    }
    else if (nota > 250 && nota <= 500)
    {
        desconto = 10;
    }
    else if (nota > 500)
    {
        desconto = 15;
    }

    vdesconto = nota * (desconto / 100);

    precof = nota - vdesconto;

    printf("O preço unitário de cada produto é R$%.2f.\nO preço total na nota é R$%.2f.\nO valor do desconto de %.f por cento é de R$%.2f.\nO preço final na nota após o desconto é de R$%.2f.", preco, nota, desconto, vdesconto, precof);

    return 0;
}// fim int main