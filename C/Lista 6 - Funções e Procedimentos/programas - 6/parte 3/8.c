#include <stdio.h>
#include <locale.h>

// Calcula o m�ximo divisor comum (MDC) de dois n�meros recebidos como
// par�metros.

int mdc(int *a, int *b)
{
    int resto, aux;

    if (*a < *b)
    { // se a menor que b, trocam de lugar entre si para que a sempre maior que b
        aux = *a;
        *a = *b;
        *b = aux;
    } // fim for
    while (resto != 0)
    { // quando o resto da divisao for 0, o mdc foi encontrado, e � o divisor dessa conta

        resto = (*a) % (*b);
        *a = *b; 
        *b = resto;
        // quando o while acabar, a vai ser o ultimo resto da divis�o do valor de a anterior pelo valor de b anterior, ou seja, a assume o valor do mdc (deixou resto 0 na divis�o)
    }// fim while
    return *a;
}// fim int mdc
int main()
{

    setlocale(LC_ALL, "Portuguese");

    int a, b, R = 0;

    printf("Insira dois valores inteiros");
    printf("\nA: ");
    scanf("%i", &a);
    printf("\nB: ");
    scanf("%i", &b);
    
    printf("\nVari�veis de retorno antes da chamada do procedimento\n");
    printf("\na = %i\nb = %i\nR = %i\n", a, b, R);

    printf("\nMDC de %i e %i �", a, b);
    R = mdc(&a, &b);
    printf(" %i\n", R);

    printf("\nVari�veis de retorno depois da chamada do procedimento\n");
    printf("\na = %i\nb = %i\nR = %i\n", a, b, R);

    return 0;
} // fim int main