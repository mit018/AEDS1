#include <stdio.h>
#include <locale.h>

// Retorna a representa��o bin�ria de um inteiro positivo

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int i, j, num, flag = 0;
 
    // 00000000000000000000000000001100 -> exemplo de 12 em bin�rio

    printf("Digite o n�mero a ser convertido para bin�rio: ");
    scanf("%d", &num);

    for (i = 31; i >= 0; i--)
    {

        j = num >> i; // deslocamento de i bits pra direita

        if (j & 1)
        { // compara o �ltimo digito de j em bin�rio com 1

            printf("1");
            flag = 1; // s� quando o primeiro digito do numero for impresso, flag ser� 1

        }
        else if (flag)
        { // flag assume o valor de 1 (verdadeiro) e assim os 0s podem ser impressos

            printf("0");
        }

    } //fim for

    return 0;

} // fim int main