#include <stdio.h>
#include <locale.h>

//Recebe o custo de fábrica de um carro e mostre o preço ao consumidor de acordo
// com a tabela da questão no livro (pg. 91)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float custo, preco;

    printf("Insira o custo de fábrica do carro: R$");

    scanf("%f", &custo);

    if(custo <= 12000 && custo > 0){

        preco = custo * 1.05;

    } else if(custo > 12000 && custo <= 25000){

        preco = custo * 1.25; 

    } else if(custo > 25000){

        preco = custo * 1.35;

    } else{

        printf("Insira um valor válido.");

        return 0;

    }

    printf("O preço do carro será R$%.2f.", preco);

    return 0;

}