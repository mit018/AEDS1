#include <stdio.h>
#include <locale.h>

// Calcula e retorna conversões de Celcius para Fahrenheit (e vice-versa)
// e polegadas para centímetros (e vice-versa)

float PolCm(float *N) // polegadas para centímetros
{
    float R;
    R = 2.54 * (*N);

    return R;
} // fim PolCm

float CmPol(float *N) // centímetros para polegadas
{
    float R;
    R = (*N) / 2.54;

    return R;
} // fim CmPol

float CelFah(float *N) // celcius para fahrenheit
{
    float R;

    R = ((*N) * 1.8) + 32;
    return R;
}// fim CelFah

float FahCel(float *N) // fahrenheit para celcius
{
    float R;

    R = ((*N) - 32) / 1.8;
    return R;
} // fim FahCel

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float N, R;

    printf("Insira um valor: ");
    scanf("%f", &N);

    printf("\nVariáveis de retorno antes da chamada do procedimento polegadas para centímetros\n");
    printf("\nN = %.2f\nR = %.2f\n", N, R);

    R = PolCm(&N);
    printf("\n%.2f Polegadas = %.2f Centímetros.\n", N, R);

    printf("\nVariáveis de retorno depois da chamada do procedimento polegadas para centímetros\n");
    printf("\nN = %.2f\nR = %.2f\n", N, R);

    printf("\nVariáveis de retorno antes da chamada do procedimento centímetros para polegadas\n");
    printf("\nN = %.2f\nR = %.2f\n", N, R);

    R = CmPol(&N);
    printf("\n%.2f Centímetros = %.2f Polegadas.\n", N, R);

    printf("\nVariáveis de retorno depois da chamada do procedimento centímetros para polegadas\n");
    printf("\nN = %.2f\nR = %.2f\n", N, R);

    printf("\nVariáveis de retorno antes da chamada do procedimento Celcius para Fahrenheit\n");
    printf("\nN = %.2f\nR = %.2f\n", N, R);

    R = CelFah(&N);
    printf("\n%.2f° Celcius = %.2f° Fahrenheit.\n", N, R);

    printf("\nVariáveis de retorno depois da chamada do procedimento Celcius para Fahrenheit\n");
    printf("\nN = %.2f\nR = %.2f\n", N, R);

    printf("\nVariáveis de retorno antes da chamada do procedimento Fahrenheit para Celcius\n");
    printf("\nN = %.2f\nR = %.2f\n", N, R);

    R = FahCel(&N);
    printf("\n%.2f° Fahrenheit = %.2f° Celcius.\n", N, R);

    printf("\nVariáveis de retorno depois da chamada do procedimento Fahrenheit para Celcius\n");
    printf("\nN = %.2f\nR = %.2f\n", N, R);

    return 0;
} // fim int main