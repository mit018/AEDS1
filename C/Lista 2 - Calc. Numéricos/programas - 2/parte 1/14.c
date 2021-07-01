#include <stdio.h>
#include <locale.h>

// Recebe o sal�rio e calcula o reajuste de acordo com
// a tabela da quest�o no livro (pg. 92)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, salariof;

    printf("Insira o sal�rio inicial: R$");

    scanf("%f", &salario);

    if(salario <= 300 && salario > 0){

        salariof = salario * 1.5;

    } else if(salario > 300 && salario <= 500){

        salariof = salario * 1.4;
    
    } else if(salario > 500 && salario <= 700){

        salariof = salario * 1.3;
    
    } else if(salario > 700 && salario <= 800){

        salariof = salario * 1.2;
    
    } else if(salario > 800 && salario <= 1000){

        salariof = salario * 1.1;
    
    } else if(salario > 1000){

        salariof = salario * 1.05;
    
    } else{

        printf("Insira um valor v�lido.");

    }

    printf("O novo sal�rio � e R$%.2f.", salariof);

    return 0;

}