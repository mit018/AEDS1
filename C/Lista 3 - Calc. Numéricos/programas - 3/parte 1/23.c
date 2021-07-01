#include <stdio.h>
#include <locale.h>

// Exibe um menu de 4 opções e executa a escolhida pelo usuário (Novo salário, férias, décimo terceiro e sair)
// de acordo com a especificação da questão no livro (pg. 149/150)


int main(){

    setlocale (LC_ALL, "Portuguese");

    int opcao;

    float salario, novosal, ferias, meses, decimoter;

    printf("Menu de opções:");
    printf("\n1. Novo salário\n2. Férias\n3. Décimo terceiro\n4. Sair");
    printf("\nDigite a opção desejada: ");
    scanf("%i", &opcao);

    while(opcao != 4){

        if(opcao == 1){

            printf("Insira o salário: R$");
            scanf("%f", &salario);

            if(salario <= 210){

                novosal = salario * 1.15;

            }else if(salario > 210 && salario <= 600){

                novosal = salario * 1.1;

            }else if(salario > 600){

                novosal = salario * 1.05;

            }

            printf("O novo salário vale R$%.2f", novosal);

        }else if(opcao == 2){

            printf("Insira o salário: R$");
            scanf("%f", &salario);

            ferias = salario + (salario / 3);

            printf("O valor das férias é R$%.2f", ferias);

        }else if(opcao == 3){

            printf("Insira o salário: R$");
            scanf("%f", &salario);

            printf("\nInsira o número de meses de trabalho na empresa (até 12): ");
            scanf("%f", &meses);

            decimoter = salario * (meses / 12);

            printf("O valor do décimo terceiro é R$%.2f", decimoter);

        }else{

            printf("Insira uma opção válida (de 1 a 4)");

        }

        printf("\nDigite a opção desejada: ");
        scanf("%i", &opcao);

    }// fim for

    return 0;

}// fim int main