#include <stdio.h>
#include <locale.h>
#include <math.h>

// Calculadora com as seguintes opções: Soma, Subtração, Multiplicação, Divisão,
// Raiz quadrada, potência, seno, cosseno, hipotenusa de um triângulo retângulo, tangente,
// logaritmo, área de um triângulo, área de uma circunferência e fatorial

void menu()
{
    printf("\n");
    printf("\nMenu");
    printf("\n0- Sair");
    printf("\n1- Soma");
    printf("\n2- Subtração");
    printf("\n3- Multiplicação");
    printf("\n4- Divisão");
    printf("\n5- Raiz quadrada");
    printf("\n6- Potência");
    printf("\n7- Seno");
    printf("\n8- Cosseno");
    printf("\n9- Hipotenusa de um triângulo retângulo");
    printf("\n10- Tangente");
    printf("\n11- Logaritmo");
    printf("\n12- Área de um retângulo");
    printf("\n13- Área de uma circunferência");
    printf("\n14- Fatorial");
}// fim void menu

void soma(float a, float b)
{
    float R;
    R = a + b;
    printf("%.3f + %.3f = %.3f", a, b, R);
}// fim void soma

void subtracao(float a, float b)
{
    float R;
    R = a - b;
    printf("%.3f - %.3f = %.3f", a, b, R);
}// fim void subtracao

void multiplicacao(float a, float b)
{
    float R;
    R = a * b;
    printf("%.3f * %.3f = %.3f", a, b, R);
}// fim void multiplicacao

void divisao(float a, float b)
{
    float R;
    R = a / b;
    printf("%.3f / %.3f = %.3f", a, b, R);
}// fim void divisao

void fatorial(int d)
{
    int i;
    printf("%i! = ", d);

    for (i = d - 1; i > 0; i--)
    {
        d *= i;
    }

    printf("%i", d);
}// fim void fatorial

void raiz(int d)
{

    int R;
    R = sqrt(d);

    printf("raiz de %i = %i", d, R);
}// fim void raiz

void potencia(float a, int d)
{

    float R;
    R = pow(a, d);

    printf("%.3f^%i = %.3f", a, d, R);
}// fim void potencia

void seno(float a)
{

    float R;
    R = sin(a);

    printf("seno de %.2f = %.2f", a, R);
}// fim void seno

void cosseno(float a)
{

    float R;
    R = cos(a);

    printf("cosseno de %.2f = %.2f", a, R);
}// fim void cosseno

void tangente(float a)
{

    float R;
    R = tan(a);

    printf("tangente de %.2f = %.2f", a, R);
}// fim void tangente

void hipotenusa(float a, float b)
{

    float R;
    R = sqrt((pow(a, 2) + pow(b, 2)));

    printf("hipotenusa = %.2f", R);
}// fim void hipotenusa

void logaritmo(float a, float b)
{

    float R;
    R = log10(a) / log10(b);

    printf("log de %.2f na base %.2f = %.2f", a, b, R);
}// fim void logaritmo

void areacirculo(float a)
{

    float R;
    R = 3.14 * pow(a, 2);

    printf("área = %.2f", R);
}// fim void areacirculo

void arearetangulo(float a, float b)
{

    float R;
    R = a * b;

    printf("área = %.2f", R);
}// fim void arearetangulo

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, c;
    int op, d;

    do
    {
        menu();
        printf("\nOpção: ");
        scanf("%i", &op);

        if (op == 1 || op == 2 || op == 3 || op == 4)
        {
            printf("Insira dois valores:\n");
            scanf("%f %f", &a, &b);

            switch (op)
            {
            case 1:
                soma(a, b);
                break;
            case 2:
                subtracao(a, b);
                break;
            case 3:
                multiplicacao(a, b);
                break;
            case 4:
                divisao(a, b);
                break;
            }
        }
        else if (op == 5 || op == 14)
        {
            printf("Insira um valor inteiro:\n");
            scanf("%i", &d);

            switch (op)
            {
            case 5:

                raiz(d);

                break;

            case 14:

                fatorial(d);

                break;

            default:
                break;
            }
        }
        else if (op == 6)
        {

            printf("Insira um valor e sua potencia:\n");
            scanf("%f %i", &a, &d);

            potencia(a, d);
        }
        else if (op == 7 || op == 8 || op == 10)
        {

            printf("Insira um ângulo (em radianos):\n");
            scanf("%f", &a);

            switch (op)
            {
            case 7:
                seno(a);
                break;

            case 8:
                cosseno(a);
                break;

            case 10:
                tangente(a);
                break;

            default:
                break;
            }
        }
        else if (op == 9)
        {

            printf("Insira os dois catetos:\n");
            scanf("%f %f", &a, &b);

            hipotenusa(a, b);
        }
        else if (op == 11)
        {

            printf("Insira um valor e a base do logaritmo:\n");
            scanf("%f %f", &a, &b);

            logaritmo(a, b);
        }
        else if (op == 12)
        {

            printf("Insira os dois lados:\n");
            scanf("%f %f", &a, &b);

            arearetangulo(a, b);
        }
        else if (op == 13)
        {

            printf("Insira o raio da circunferência:\n");
            scanf("%f", &a);

            areacirculo(a);
        }

    } while (op != 0); // fim do-while

    return 0;
}// fim int main