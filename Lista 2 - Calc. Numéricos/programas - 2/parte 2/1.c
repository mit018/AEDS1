#include <stdio.h>
#include <locale.h>

// Recebe o código da disciplina, total de aulas no semestre, total de
// faltas no semestre, nota de exercícios e trabalhos, notas das três avaliações e a nota da reavaliação
// (se houver), e determina se aluno foi aprovado ou reprovado de acordo com os requisitos
// especificados no exercício (parte 2 do pdf)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float codigo, aula, falta, freq, trab, n1, n2, n3, total, reavaliacao;

    printf("Insira o código da disciplina: ");

    scanf("%f", &codigo);

    printf("Insira a quantidade de aulas do semestre e de faltas do aluno: ");

    scanf("%f %f", &aula, &falta);

    if (aula <= 0)
    {

        printf("Insira um valor válido para a quantidade de aulas do semestre.");

        return 0;
    }
    else if (falta < 0)
    {

        printf("Insira um valor válido para a quantidade de faltas do aluno.");

        return 0;
    }

    freq = (aula - falta) / aula;

    if (freq < 0.75)
    {

        printf("O aluno foi reprovado na disciplina de código %.f (não obteve a frequência mínima necessária).", codigo);

        return 0;
    }

    printf("Insira a nota de exercícios e trabalhos alcançada pelo aluno: ");

    scanf("%f", &trab);

    if (trab<0 || trab> 25)
    {

        printf("Insira um valor válido para a nota de exercícios e trabalhos do aluno (até 25 pontos).");

        return 0;
    }

    printf("Insira as notas das 3 avaliações: ");

    scanf("%f %f %f", &n1, &n2, &n3);

    total = n1 + n2 + n3 + trab;

    if ((total < 35) || (((total - n1) + 25) < 60) && (((total - n2) + 25) < 60) && (((total - n3) + 25) < 60))
    {

        printf("O aluno foi reprovado na disciplina de código %.f (obteve %.2f pontos).", codigo, total);

        return 0;
    }
    else if (total < 60 && total >= 35)
    { // se a nota total for menor que 35, o aluno nao tem chance de passar mesmo com total na reavaliação

        printf("Insira a nota da reavaliação: ");

        scanf("%f", &reavaliacao);

        if ((n1 <= n2 && n1 < n3) || (n1 <= n3 && n1 < n2) || (n1 == n2 == n3))
        {

            total = reavaliacao + n2 + n3 + trab;
        }
        else if ((n2 <= n1 && n2 < n3) || (n2 <= n3 && n2 < n1))
        {

            total = reavaliacao + n1 + n3 + trab;
        }
        else if ((n3 <= n1 && n3 < n2) || (n3 <= n2 && n2 < n1))
        {

            total = reavaliacao + n1 + n2 + trab;
        }
    }

    if (total >= 60)
    {

        printf("O aluno foi aprovado na disciplina de código %.f com %.2f pontos.", codigo, total);
    }
    else if (total < 60)
    {

        printf("O aluno foi reprovado na disciplina de código %.f (obteve %.2f pontos).", codigo, total);
    }

    return 0;
}// fim int main