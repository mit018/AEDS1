#include <stdio.h>
#include <locale.h>

// lê o número de alunos existentes em uma turma, suas notas e calcula a média
// aritmética das notas.

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x, N;
    float nota, total, media;

    printf("Insira a quantidade de alunos na sala: ");
    scanf("%i", &N);

    printf("Insira a nota de cada aluno");

    for(x = 1; x <= N; x++){

        printf("\n%i°: ", x);
        scanf("%f", &nota);

        total += nota;

    }

    media = total / N;

    printf("Média das notas dos %i alunos: %.2f", N, media);
    
    return 0;

}