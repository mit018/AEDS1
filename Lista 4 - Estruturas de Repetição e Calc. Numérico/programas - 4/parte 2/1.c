#include <stdio.h>
#include <locale.h>

// Retorna a representação binária de um inteiro positivo

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int i, j, num, flag = 0;
 
    // 00000000000000000000000000001100 -> exemplo de 12 em binário

    printf("Digite o número a ser convertido para binário: ");
    scanf("%d", &num);

    for (i = 31; i >= 0; i--)
    {

        j = num >> i; // deslocamento de i bits pra direita

        if (j & 1)
        { // compara o último digito de j em binário com 1

            printf("1");
            flag = 1; // só quando o primeiro digito do numero for impresso, flag será 1

        }
        else if (flag)
        { // flag assume o valor de 1 (verdadeiro) e assim os 0s podem ser impressos

            printf("0");
        }

    } //fim for

    return 0;

} // fim int main