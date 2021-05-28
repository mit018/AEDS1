#include <stdio.h>
#include <locale.h>

// Recebe dois números e executa uma operação de acordo com a tabela
// da questão no livro (pg. 90)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, operacao, media, diferenca, produto, divisao;

    printf("Insira dois números: ");

    scanf("%f %f", &a, &b);

    printf("1- Média entre os números digitados;\n2- Diferença do maior pelo menor;\n3- Produto entre os números digitados;\n4- Divisão do primeiro pelo segundo.\nInsira qual operação será feita (1 a 4): ");

    scanf("%f", &operacao);

    if(operacao == 1){

        media = (a + b) / 2;

        printf("A média entre os números é %.2f.", media);

    } else if(operacao == 2){

        if(a > b){

            diferenca = a - b;

            printf("A diferença entre o maior e o menor é %.2f.", diferenca);
        }

        if(b > a){

            diferenca = b - a;

            printf("A diferença entre o maior e o menor é %.2f.", diferenca);
        }

    } else if(operacao == 3){

        produto = a * b;

        printf("O produto entre os números é %.2f.", produto);

    } else if(operacao == 4){

        if(b == 0){

            printf("O divisor precisa ser diferente de 0");

        }else{

            divisao = a / b;

            printf("A divisão entre os números é %2.f.", divisao);

        }

    } else if(operacao > 4 || operacao < 1){

        printf("ERRO: Digite um número válido para o tipo de operação (entre 1 e 4).");

    }

    return 0;
}// fim int main