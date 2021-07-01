#include <stdio.h>
#include <locale.h>

// Calcula e retorna a soma dos n primeiros termos de uma progress�o aritm�tica onde o primeiro termo e a
// raz�o s�o informados pelo usu�rio

// t -> primeiro termo
// r -> razao
// R -> return

float somaprogaritmetica(float *r, float *t, int *N)
{
    int i;
    float soma = 0;
    for (i = 1; i < (*N); i++)
    {
        soma += (*t);
        *t += (*r);
    }
    soma += *t;
    return soma;
}// fim int somaprogaritmetica

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float r, t, R = 0;
    int N;

    printf("Informe a raz�o da progress�o aritm�tica: ");
    scanf("%f", &r);
    printf("Insira o primeiro termo: ");
    scanf("%f", &t);
    printf("Insira um n�mero inteiro para calcular a soma dos termos at� sua posi��o: ");
    scanf("%i", &N);

    printf("\nVari�veis de retorno antes da chamada do procedimento\nr = %.2f\nt = %.2f\nN = %i\nR = %.2f\n", r, t, N, R);

    R = somaprogaritmetica(&r, &t, &N);

    printf("\nSoma dos %i primeiros termos: %.2f\n", N, R);

    printf("\nVari�veis de retorno depois da chamada do procedimento\nr = %.2f\nt = %.2f\nN = %i\nR = %.2f\n", r, t, N, R);

    return 0;
} // fim int main