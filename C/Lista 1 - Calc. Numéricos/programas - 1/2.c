#include <stdio.h>
#include <locale.h>

/* Calcula e mostra o sal�rio reajustado de um funcion�rio. O aumento
deve ser de 10%. O programa recebe um n�mero real e retorna a o valor reajustado */ 

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float salarioinicial;

    printf("Insira o sal�rio atual: R$");

    scanf("%f", &salarioinicial);

    float salariofinal = salarioinicial * 1.1; //1.1 = 110%
    
    printf("O novo sal�rio � de R$%.2f.", salariofinal);
    
    return 0;

} // fim int main