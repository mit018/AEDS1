#include <stdio.h>
#include <locale.h>

// Calcula (e imprime) os elementos da seguinte sequência: 1 + (1/2) + (1/3) + ... (1/N)

float sequencia(float N)
{
    float R;

    if (N == 1)
    {
        printf("1");
        return 1;
    }
    else
    {   
        R = (1 / N) + sequencia(N - 1); // primeiro calcula tudo
        printf(" + (1 / %.f)", N); // depois imprime cada número
        return R; // depois retorna a resposta do cálculo
    }
}// fim float sequencia

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float N, R;

    printf("Insira um número inteiro positivo: ");
    scanf("%f", &N);

    R = sequencia(N);

    printf(" = %.2f", R);

    return 0;
} // fim int main