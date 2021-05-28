#include <stdio.h>
#include <locale.h>

// Recebe três lados de um triângulo e testa se ele existe. Se sim, indica qual o tipo do triãngulo

int existencia(float a, float b, float c)
{
    int R;
    float sub1, sub2, sub3;
    // calculo da diferença entre 2 lados
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

    // condição para triângulo existir
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

    if (a == b && b == c) // condição para triângulo equilátero
    {
        R = 1;
    }
    else if (a == b && a != c) // condição para triângulo isósceles
    {
        R = 2;
    }
    else if (a != b && a != c && c != b) // condição para triângulo escaleno
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

    printf("Insira três valores positivos para os lados de um triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

    teste1 = existencia(a, b, c);

    if (teste1 == 1)
    {
        printf("O triângulo existe.");
        teste2 = triangulo(a, b, c);
        if (teste2 == 1)
        {
            printf("\nTriângulo equilátero.");
        }
        else if (teste2 == 2)
        {
            printf("\nTriângulo isósceles.");
        }
        else
        {
            printf("\nTriângulo escaleno.");
        }
    }
    else
    {
        printf("O triângulo nao existe.");
    }

    return 0;
} // fim int main