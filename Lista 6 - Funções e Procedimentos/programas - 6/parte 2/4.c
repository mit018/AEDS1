#include <stdio.h>
#include <locale.h>

// Calcula e retorna a soma dos n primeiros termos de uma progress�o geom�trica onde o primeiro termo e a
// raz�o s�o informados pelo usu�rio

float somaproggeometrica(float r, float t, int N)
{
    int i;
    float soma = 0;
    for(i = 1; i < N; i++){
        soma += t;
        t *= r;
    }
    soma += t;

    return soma;
}// fim int somaproggeometrica

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float r, t, R;
    int N;

    printf("Informe a raz�o da progress�o geom�trica: ");
    scanf("%f", &r);
    printf("Insira o primeiro termo: ");
    scanf("%f", &t);
    printf("Insira um n�mero inteiro para calcular a soma dos termos at� sua posi��o: ");
    scanf("%i", &N);

    R = somaproggeometrica(r, t, N);

    printf("Soma dos %i primeiros termos: %.2f", N, R);
    return 0;
} // fim int main