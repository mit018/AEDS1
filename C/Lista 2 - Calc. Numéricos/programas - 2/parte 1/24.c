#include <stdio.h>
#include <locale.h>

// Recebe pre�o, categoria e situa��o de um produto e calcula o valor de seu aumento,
// imposto, novo pre�o e sua classifica��o de acordo com as tabelas da quest�o no livro (pgs. 93/94)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char situacao;

    float preco, categoria, vaumento, aumento, vimposto, imposto, precof;

    printf("Insira o pre�o do produto e sua categoria (1 - limpeza, 2 - alimenta��o e 3 - vestu�rio): R$");

    scanf("%f %f", &preco, &categoria);

    if (categoria <= 0 || categoria > 3){

        printf("Insira um n�mero v�lido para a categoria (1 a 3)");

        return 0;
    }

    printf("Insira a situa��o do produto (R - necessita de refrigera��o ou N - n�o necessita): ");

    scanf(" %c", &situacao);

    if(preco <= 25){

        if(categoria == 1){

            aumento = 5;

        } else if(categoria == 2){

            aumento = 8;

        } else if(categoria == 3){

            aumento = 10;

        }


    } else if(preco > 25){

        if(categoria == 1){

            aumento = 12;

        } else if(categoria == 2){

            aumento = 15;

        } else if(categoria == 3){

            aumento = 18;

        }
    
    }

    vaumento = preco * (aumento / 100);

    if(categoria == 2 || situacao == 'R'){

        imposto = 5;

    } else if (situacao == 'N'){

        imposto = 8;


    } else{

        printf("Insira uma letra v�lida para a situa��o (R ou N)");

        return 0;

    }

    vimposto = preco * (imposto / 100);

    precof = preco + vaumento - vimposto;

    printf("O valor do aumento de %.f por cento � de R$%.2f.\nO valor do imposto de %.f por cento � de R$%.2f.\nO pre�o final do produto � de R$%.2f.\n", aumento, vaumento, imposto, vimposto, precof);

    if(precof <= 50){

        printf("Classificado como barato.");

    } else if(precof > 50 && precof < 120){

        printf("Classificado como normal.");

    } else if(precof >= 120){

        printf("Classificado como caro.");
    
    }

    return 0;
}// fim int main