#include <stdio.h>
#include <locale.h>

// Recebe a identificação da turma e a quantidade de alunos matriculados de 14 turmas diferentes,
// o número de matrícula do aluno e a situação de prensença na prova (presente ou ausente).
// Calcula a porcentagem de ausência das 14 turmas, escreve a identificação da turma,
// a porcentagem calculada e determina quantas turmas tiveram porcentagem de ausência superior a 5%

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, x, y = 0, alunos, mat;
    char id, situ;
    float ausente = 0, porcA, porcP;

    printf("Dados sobre a turma");

    for (i = 1; i <= 14; i++)
    {

        printf("\nIdentificação (Letra): ");
        scanf(" %c", &id);

        printf("Número de matriculados: ");
        scanf("%i", &alunos);

        printf("Dados sobre os alunos");

        for (x = 1; x <= alunos; x++) // repetir a entrada de dados para os alunos de acordo com o número de matricualdos inserido
        {

            printf("\nNúmero de matrícula: ");
            scanf("%i", &mat);

            printf("Presente (P) ou Ausente (A) na prova: ");
            scanf(" %c", &situ);

            if (situ == 'A')
            {

                ausente++; // contador da quatidade de ausentes na turma
            }

            porcA = 100 * (ausente / alunos);

            if (porcA > 5)
            {

                y++; // contador de quantas turma tem a porcentagem de ausência superior a 5%
            }
        }

        printf("A quantidade de alunos ausentes da prova de Fundamentos de Computação em relação a turma %c equivale a %.2f%c do total.", id, porcA, '%');
    
        ausente = 0;
    }

    printf("\n%i turmas possuem a porcentagem de ausência superior a 5%c.", y, '%');

    return 0;
    
}// fim int main