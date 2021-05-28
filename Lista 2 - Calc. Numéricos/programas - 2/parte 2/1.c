#include <stdio.h>
#include <locale.h>

// Recebe o c�digo da disciplina, total de aulas no semestre, total de
// faltas no semestre, nota de exerc�cios e trabalhos, notas das tr�s avalia��es e a nota da reavalia��o
// (se houver), e determina se aluno foi aprovado ou reprovado de acordo com os requisitos
// especificados no exerc�cio (parte 2 do pdf)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float codigo, aula, falta, freq, trab, n1, n2, n3, total, reavaliacao;

    printf("Insira o c�digo da disciplina: ");

    scanf("%f", &codigo);

    printf("Insira a quantidade de aulas do semestre e de faltas do aluno: ");

    scanf("%f %f", &aula, &falta);

    if (aula <= 0)
    {

        printf("Insira um valor v�lido para a quantidade de aulas do semestre.");

        return 0;
    }
    else if (falta < 0)
    {

        printf("Insira um valor v�lido para a quantidade de faltas do aluno.");

        return 0;
    }

    freq = (aula - falta) / aula;

    if (freq < 0.75)
    {

        printf("O aluno foi reprovado na disciplina de c�digo %.f (n�o obteve a frequ�ncia m�nima necess�ria).", codigo);

        return 0;
    }

    printf("Insira a nota de exerc�cios e trabalhos alcan�ada pelo aluno: ");

    scanf("%f", &trab);

    if (trab<0 || trab> 25)
    {

        printf("Insira um valor v�lido para a nota de exerc�cios e trabalhos do aluno (at� 25 pontos).");

        return 0;
    }

    printf("Insira as notas das 3 avalia��es: ");

    scanf("%f %f %f", &n1, &n2, &n3);

    total = n1 + n2 + n3 + trab;

    if ((total < 35) || (((total - n1) + 25) < 60) && (((total - n2) + 25) < 60) && (((total - n3) + 25) < 60))
    {

        printf("O aluno foi reprovado na disciplina de c�digo %.f (obteve %.2f pontos).", codigo, total);

        return 0;
    }
    else if (total < 60 && total >= 35)
    { // se a nota total for menor que 35, o aluno nao tem chance de passar mesmo com total na reavalia��o

        printf("Insira a nota da reavalia��o: ");

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

        printf("O aluno foi aprovado na disciplina de c�digo %.f com %.2f pontos.", codigo, total);
    }
    else if (total < 60)
    {

        printf("O aluno foi reprovado na disciplina de c�digo %.f (obteve %.2f pontos).", codigo, total);
    }

    return 0;
}// fim int main