#include <stdio.h>
#include <locale.h>

//Calcula e retorna o en�simo termo de uma progress�o aritm�tica onde o primeiro termo e a
// raz�o s�o informados pelo usu�rio

// t -> primeiro termo
// r -> razao
// R -> return

float progaritmetica(float *r, float *t, int *N)
{
    int i;
    for (i = 1; i < (*N); i++)
    {
        *t += (*r);
    }
    return *t;
} // fim progaritmetica

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float r, t, R = 0;
    int N;

    printf("Informe a raz�o da progress�o aritm�tica: ");
    scanf("%f", &r);
    printf("Insira o primeiro termo: ");
    scanf("%f", &t);
    printf("Insira um n�mero inteiro para a posi��o do valor da progress�o a ser exibido: ");
    scanf("%i", &N);

    printf("\nVari�veis de retorno antes da chamada do procedimento\nr = %.2f\nt = %.2f\nN = %i\nR = %.2f\n", r, t, N, R);

    R = progaritmetica(&r, &t, &N);
    printf("\n%i� termo: %.2f\n", N, R);

    printf("\nVari�veis de retorno depois da chamada do procedimento\nr = %.2f\nt = %.2f\nN = %i", r, t, N);

    return 0;
} // fim int main