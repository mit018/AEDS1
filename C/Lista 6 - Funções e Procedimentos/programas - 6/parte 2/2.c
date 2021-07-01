#include <stdio.h>
#include <locale.h>

// Calcula e retorna a soma dos n primeiros termos de uma progressão aritmética onde o primeiro termo e a
// razão são informados pelo usuário

float somaprogaritmetica(float r, float t, int N)
{
    int i;
    float soma = 0;
    for (i = 1; i < N; i++)
    {
        soma += t;
        t += r;
    }
    soma += t;
    return soma;
}// fim int somaprogaritmetica

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float r, t, R;
    int N;

    printf("Informe a razão da progressão aritmética: ");
    scanf("%f", &r);
    printf("Insira o primeiro termo: ");
    scanf("%f", &t);
    printf("Insira um número inteiro para calcular a soma dos termos até sua posição: ");
    scanf("%i", &N);

    R = somaprogaritmetica(r, t, N);

    printf("Soma dos %i primeiros termos: %.2f", N, R);

    return 0;
} // fim int main