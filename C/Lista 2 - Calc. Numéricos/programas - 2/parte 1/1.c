#include <stdio.h>
#include <locale.h>

// Calcula a média aritmética de quatro notas de um aluno e mostra sua situação (aprovado ou reprovado)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4;

    printf("Insira 4 notas: ");

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float soma = n1 + n2 + n3 + n4;

    float media = (soma) / 4;

    if(media >= 7){

        printf("A média das notas é %.2f, portanto o aluno foi aprovado.", media);

    } else if(media < 7){

        printf("A média das notas é %.2f, portanto o aluno foi reprovado.", media);
        
    }
    
    return 0;
}// fim int main