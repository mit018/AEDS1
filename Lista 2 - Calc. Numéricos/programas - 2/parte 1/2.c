#include <stdio.h>
#include <locale.h>

// Calcula a média aritmética de duas notas e exibe uma mensagem de 
// acordo com a tabela da questão no livro (pg. 90)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;

    printf("Insira 2 notas: ");

    scanf("%f %f", &n1, &n2);

    float soma = n1 + n2;

    float media = (soma) / 2;

    printf("A média das notas é %.2f.\n", media);

    if(media >= 0 && media < 3 ){

        printf("Reprovado");

    } else if(media >= 3 && media < 7){

        printf("Exame");
        
    } else if(media >= 7 && media <= 10){

        printf("Aprovado");
        
    }
    
    return 0;
}// fim int main