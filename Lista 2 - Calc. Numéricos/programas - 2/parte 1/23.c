#include <stdio.h>
#include <locale.h>

// Recebe o c�digo e quantidade do produto comprado e calcula o seu pre�o unit�rio,
// pre�o total da nota, valor do desconto e pre�o final na nota depois do desconto,
// de acordo com a tabela da quest�o no livro (pg. 93)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int codigo, quantidade;

    float precof, preco, nota, desconto, vdesconto;

    printf("Insira o c�digo do produto (de 1 a 40) e a quantidade comprada: ");

    scanf("%d %d", &codigo, &quantidade);

    if (quantidade < 0)
    {

        printf("Insira um n�mero v�lido para a quantidade.");
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

        printf("Insira um c�digo v�lido");

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

    printf("O pre�o unit�rio de cada produto � R$%.2f.\nO pre�o total na nota � R$%.2f.\nO valor do desconto de %.f por cento � de R$%.2f.\nO pre�o final na nota ap�s o desconto � de R$%.2f.", preco, nota, desconto, vdesconto, precof);

    return 0;
}// fim int main