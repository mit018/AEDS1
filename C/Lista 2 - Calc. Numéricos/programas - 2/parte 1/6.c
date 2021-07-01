#include <stdio.h>
#include <locale.h>
#include <math.h>

// Recebe dois números e executa uma dentre três opções listadas
// na questão (pg. 90)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, potencia, raiz1, raiz2, raiz3, raiz4;

    char operacao;

    printf("Insira dois números: ");

    scanf("%f %f", &a, &b);

    printf("a) O primeiro número elevado ao segundo número;\nb) Raiz quadrada de cada um dos números;\nc) Raiz cúbica de cada um dos números.\nInsira qual operação será feita (a, b ou c): ");

    scanf(" %c", &operacao);

    if(operacao == 'a'){

        potencia = pow(a, b);

        printf("%.2f elevado a %.2f vale %.2f.", a, b, potencia);

    } else if(operacao == 'b'){

        raiz1 = sqrt(a);

        raiz2 = sqrt(b);

        printf("A raiz quadrada de %.2f é %.2f e de %.2f é %.2f.", a, raiz1, b, raiz2);

    } else if(operacao == 'c'){

        raiz3 = cbrt(a);

        raiz4 = cbrt(b);

        printf("A raiz cúbica de %.2f é %.2f e de %.2f é %.2f.", a, raiz3, b, raiz4);

    } else if(operacao != 'a' && operacao != 'b' && operacao != 'c'){

        printf("ERRO: Digite uma letra válida para o tipo de operação (a, b ou c).");

    }

    return 0;
}// fim int main