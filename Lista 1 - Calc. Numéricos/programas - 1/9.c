#include <stdio.h>
#include <math.h>
#include <locale.h>

// Calcula a área de um círculo

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float area, raio, pi = 3.14;

    printf("Insira o raio do círculo (em metros): ");

    scanf("%f", &raio);

    area = pi * pow(raio, 2); // pi * raio ao quadrado = área do círculo

    printf("A área do círculo vale %.2f metros quadrados.", area);

    return 0;
}// fim int main