#include <stdio.h>
#include <locale.h>

// Calcula e retorna o enésimo termo de uma progressão geométrica onde o primeiro termo e a
// razão são informados pelo usuário

float proggeometrica(float r, float t, int N)
{
    int i;
    for (i = 1; i < N; i++)
    {
        t *= r;
    }
    return t;
}// fim int proggeometrica

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float r, t, R;
    int N;

    printf("Informe a razão da progressão geométrica: ");
    scanf("%f", &r);
    printf("Insira o primeiro termo: ");
    scanf("%f", &t);
    printf("Insira um número inteiro para a posição do valor da progressão a ser exibido: ");
    scanf("%i", &N);

    R = proggeometrica(r, t, N);
    
    printf("%i° termo: %.2f", N, R);
    return 0;
} // fim int main