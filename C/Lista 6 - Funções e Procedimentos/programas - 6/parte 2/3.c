#include <stdio.h>
#include <locale.h>

// Calcula e retorna o en�simo termo de uma progress�o geom�trica onde o primeiro termo e a
// raz�o s�o informados pelo usu�rio

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

    printf("Informe a raz�o da progress�o geom�trica: ");
    scanf("%f", &r);
    printf("Insira o primeiro termo: ");
    scanf("%f", &t);
    printf("Insira um n�mero inteiro para a posi��o do valor da progress�o a ser exibido: ");
    scanf("%i", &N);

    R = proggeometrica(r, t, N);
    
    printf("%i� termo: %.2f", N, R);
    return 0;
} // fim int main