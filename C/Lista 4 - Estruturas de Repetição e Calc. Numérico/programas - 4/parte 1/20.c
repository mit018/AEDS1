#include <stdio.h>
#include <locale.h>

// Recebe dois valores N e D e informa se um é divisível pelo outro

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    char resposta = 'S';
    float N, D, R;

    while(resposta == 'S'){

        printf("Insira dois valores (numerador e denominador)");
        printf("\nN = ");
        scanf("%f", &N);

        printf("\nD = ");
        scanf("%f", &D);

        while(D == 0){ // repete até que o valor inserido seja diferente de 0
            
            printf("VALOR INVÁLIDO\nInsira outro valor para o denominador que seja diferente de 0.");
            printf("\nD = ");
            scanf("%f", &D);

        }

        R = N / D;

        printf("O resultado da divisão de %.2f por %.2f é %.2f.", N, D, R);
        printf("\nVocê deseja outro cálculo (S/N)?\n");
        scanf(" %c", &resposta);

        while(resposta != 'S' && resposta != 'N'){ // repete até que a resposta seja S ou N
            
            printf("RESPOSTA INVÁLIDA\nInsira a letra N para não e S para sim.");
            printf("\nVocê deseja outro cálculo?\n");
            scanf(" %c", &resposta);

        }

    }

    return 0;

}