#include <stdio.h>
#include <math.h>
#include <locale.h>

// Calcula a �rea de um c�rculo

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float area, raio, pi = 3.14;

    printf("Insira o raio do c�rculo (em metros): ");

    scanf("%f", &raio);

    area = pi * pow(raio, 2); // pi * raio ao quadrado = �rea do c�rculo

    printf("A �rea do c�rculo vale %.2f metros quadrados.", area);

    return 0;
}// fim int main