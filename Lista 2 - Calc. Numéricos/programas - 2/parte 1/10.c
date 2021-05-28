#include <stdio.h>
#include <locale.h>

//Recebe o custo de f�brica de um carro e mostre o pre�o ao consumidor de acordo
// com a tabela da quest�o no livro (pg. 91)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float custo, preco;

    printf("Insira o custo de f�brica do carro: R$");

    scanf("%f", &custo);

    if(custo <= 12000 && custo > 0){

        preco = custo * 1.05;

    } else if(custo > 12000 && custo <= 25000){

        preco = custo * 1.25; 

    } else if(custo > 25000){

        preco = custo * 1.35;

    } else{

        printf("Insira um valor v�lido.");

        return 0;

    }

    printf("O pre�o do carro ser� R$%.2f.", preco);

    return 0;

}