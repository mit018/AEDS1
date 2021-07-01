#include <stdio.h>
#include <locale.h>

// Calcula a média ponderada de três notas

int main ()
{
    setlocale (LC_ALL, "Portuguese");

    float nota1, nota2, nota3;

    int p1, p2, p3;

    printf("Insira três notas: ");

    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Seus respectivos pesos: ");

    scanf("%i %i %i", &p1, &p2, &p3);

    float media =((nota1 * p1) + (nota2 * p2) + (nota3 * p3)) / (p1 + p2 + p3);

    printf("A média das notas é %.2f.", media);

    return 0;
}// fim int main