#include <stdio.h>
#include <locale.h>

// Recebe tr�s lados de um tri�ngulo e testa se ele existe. Se sim, indica qual o tipo do tri�ngulo

int existencia(float a, float b, float c)
{
    int R;
    float sub1, sub2, sub3;
    // calculo da diferen�a entre 2 lados
    sub1 = a - b; 
    sub2 = a - c;
    sub3 = c - b;
    // se for negativa, torna a ser positiva
    if(sub1 < 0){
        sub1 = -(sub1);
    }
    if(sub2 < 0){
        sub2 = -(sub2);
    }
    if(sub3 < 0){
        sub3 = -(sub3);
    }

    // condi��o para tri�ngulo existir
    if ((a <= (b + c) && a > sub3) || (b <= (c + a) && b > sub2) || (c <= (b + a) && c > sub1))
    { 
        R = 1;
    }
    else
    {
        R = 0;
    }
    return R;
} // fim int existencia

int triangulo(float a, float b, float c)
{
    int R;

    if (a == b && b == c) // condi��o para tri�ngulo equil�tero
    {
        R = 1;
    }
    else if (a == b && a != c) // condi��o para tri�ngulo is�sceles
    {
        R = 2;
    }
    else if (a != b && a != c && c != b) // condi��o para tri�ngulo escaleno
    {
        R = 3;
    }
    return R;
}// int triangulo

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, c;
    int teste1, teste2;

    printf("Insira tr�s valores positivos para os lados de um tri�ngulo: ");
    scanf("%f %f %f", &a, &b, &c);

    teste1 = existencia(a, b, c);

    if (teste1 == 1)
    {
        printf("O tri�ngulo existe.");
        teste2 = triangulo(a, b, c);
        if (teste2 == 1)
        {
            printf("\nTri�ngulo equil�tero.");
        }
        else if (teste2 == 2)
        {
            printf("\nTri�ngulo is�sceles.");
        }
        else
        {
            printf("\nTri�ngulo escaleno.");
        }
    }
    else
    {
        printf("O tri�ngulo nao existe.");
    }

    return 0;
} // fim int main