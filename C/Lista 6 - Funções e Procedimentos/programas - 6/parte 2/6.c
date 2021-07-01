#include <stdio.h>
#include <locale.h>

// Calcula e retorna convers�es de Celcius para Fahrenheit (e vice-versa)
// e polegadas para cent�metros (e vice-versa)

float PolCm(float N) // polegadas para cent�metros
{
    float R;
    R = 2.54 * N;

    return R;
} // fim PolCm

float CmPol(float N) // cent�metros para polegadas
{
    float R;
    R = N / 2.54;

    return R;
} // fim CmPol

float CelFah(float N) // celcius para fahrenheit
{
    float R;

    R = (N * 1.8) + 32;
    return R;
}// fim CelFah

float FahCel(float N) // fahrenheit para celcius
{
    float R;

    R = (N - 32) / 1.8;
    return R;
} // fim FahCel

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float N, R;

    printf("Insira um valor: ");
    scanf("%f", &N);

    R = PolCm(N);
    printf("\n%.2f Polegadas = %.2f Cent�metros.", N, R);

    R = CmPol(N);
    printf("\n%.2f Cent�metros = %.2f Polegadas.", N, R);

    R = CelFah(N);
    printf("\n%.2f� Celcius = %.2f� Fahrenheit.", N, R);

    R = FahCel(N);
    printf("\n%.2f� Fahrenheit = %.2f� Celcius.", N, R);

    return 0;
} // fim int main