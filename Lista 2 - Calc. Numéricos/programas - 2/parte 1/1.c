#include <stdio.h>
#include <locale.h>

// Calcula a m�dia aritm�tica de quatro notas de um aluno e mostra sua situa��o (aprovado ou reprovado)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4;

    printf("Insira 4 notas: ");

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float soma = n1 + n2 + n3 + n4;

    float media = (soma) / 4;

    if(media >= 7){

        printf("A m�dia das notas � %.2f, portanto o aluno foi aprovado.", media);

    } else if(media < 7){

        printf("A m�dia das notas � %.2f, portanto o aluno foi reprovado.", media);
        
    }
    
    return 0;
}// fim int main