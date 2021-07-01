#include <stdio.h>
#include <locale.h>

// Exibe um menu de 4 op��es e executa a escolhida pelo usu�rio (Novo sal�rio, f�rias, d�cimo terceiro e sair)
// de acordo com a especifica��o da quest�o no livro (pg. 149/150)


int main(){

    setlocale (LC_ALL, "Portuguese");

    int opcao;

    float salario, novosal, ferias, meses, decimoter;

    printf("Menu de op��es:");
    printf("\n1. Novo sal�rio\n2. F�rias\n3. D�cimo terceiro\n4. Sair");
    printf("\nDigite a op��o desejada: ");
    scanf("%i", &opcao);

    while(opcao != 4){

        if(opcao == 1){

            printf("Insira o sal�rio: R$");
            scanf("%f", &salario);

            if(salario <= 210){

                novosal = salario * 1.15;

            }else if(salario > 210 && salario <= 600){

                novosal = salario * 1.1;

            }else if(salario > 600){

                novosal = salario * 1.05;

            }

            printf("O novo sal�rio vale R$%.2f", novosal);

        }else if(opcao == 2){

            printf("Insira o sal�rio: R$");
            scanf("%f", &salario);

            ferias = salario + (salario / 3);

            printf("O valor das f�rias � R$%.2f", ferias);

        }else if(opcao == 3){

            printf("Insira o sal�rio: R$");
            scanf("%f", &salario);

            printf("\nInsira o n�mero de meses de trabalho na empresa (at� 12): ");
            scanf("%f", &meses);

            decimoter = salario * (meses / 12);

            printf("O valor do d�cimo terceiro � R$%.2f", decimoter);

        }else{

            printf("Insira uma op��o v�lida (de 1 a 4)");

        }

        printf("\nDigite a op��o desejada: ");
        scanf("%i", &opcao);

    }// fim for

    return 0;

}// fim int main