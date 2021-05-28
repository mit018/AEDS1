#include <stdio.h>
#include <locale.h>

// Recebe dois n�meros e executa uma opera��o de acordo com a tabela
// da quest�o no livro (pg. 90)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, operacao, media, diferenca, produto, divisao;

    printf("Insira dois n�meros: ");

    scanf("%f %f", &a, &b);

    printf("1- M�dia entre os n�meros digitados;\n2- Diferen�a do maior pelo menor;\n3- Produto entre os n�meros digitados;\n4- Divis�o do primeiro pelo segundo.\nInsira qual opera��o ser� feita (1 a 4): ");

    scanf("%f", &operacao);

    if(operacao == 1){

        media = (a + b) / 2;

        printf("A m�dia entre os n�meros � %.2f.", media);

    } else if(operacao == 2){

        if(a > b){

            diferenca = a - b;

            printf("A diferen�a entre o maior e o menor � %.2f.", diferenca);
        }

        if(b > a){

            diferenca = b - a;

            printf("A diferen�a entre o maior e o menor � %.2f.", diferenca);
        }

    } else if(operacao == 3){

        produto = a * b;

        printf("O produto entre os n�meros � %.2f.", produto);

    } else if(operacao == 4){

        if(b == 0){

            printf("O divisor precisa ser diferente de 0");

        }else{

            divisao = a / b;

            printf("A divis�o entre os n�meros � %2.f.", divisao);

        }

    } else if(operacao > 4 || operacao < 1){

        printf("ERRO: Digite um n�mero v�lido para o tipo de opera��o (entre 1 e 4).");

    }

    return 0;
}// fim int main