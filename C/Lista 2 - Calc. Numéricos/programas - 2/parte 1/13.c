#include <stdio.h>
#include <locale.h>

//Recebe o preço de um produto e calcula o novo preço e sua classificação
// de acordo com a tabela da questão no livro (pg. 91)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float preco, precof;

    printf("Insira o preço do produto: R$");

    scanf("%f", &preco);

    if(preco <= 50 && preco > 0){

        precof = preco * 1.05;

    } else if(preco <= 100 && preco > 50){

        precof = preco * 1.1;

    } else if(preco > 100){

        precof = preco * 1.15;

    } else{

        printf("Insira um valor válido.");

        return 0;

    }

    printf("O preço novo é R$%.2f.\n", precof);

    if(precof <= 80){

        printf("O novo preço é classificado como barato.");

    } else if(precof > 80 && precof <= 120){

        printf("O novo preço é classificado como normal.");

    } else if(precof > 120 && precof <= 200){

        printf("O novo preço é classficado como caro.");

    } else if(precof > 200){

        printf("O novo preço é classificado como muito caro.");

    }

    return 0;
}// fim int main