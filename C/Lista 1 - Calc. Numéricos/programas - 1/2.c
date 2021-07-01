#include <stdio.h>
#include <locale.h>

/* Calcula e mostra o salário reajustado de um funcionário. O aumento
deve ser de 10%. O programa recebe um número real e retorna a o valor reajustado */ 

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float salarioinicial;

    printf("Insira o salário atual: R$");

    scanf("%f", &salarioinicial);

    float salariofinal = salarioinicial * 1.1; //1.1 = 110%
    
    printf("O novo salário é de R$%.2f.", salariofinal);
    
    return 0;

} // fim int main