#include <stdio.h>
#include <locale.h>

// Recebe dois valores N e D e informa se um � divis�vel pelo outro

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

        while(D == 0){ // repete at� que o valor inserido seja diferente de 0
            
            printf("VALOR INV�LIDO\nInsira outro valor para o denominador que seja diferente de 0.");
            printf("\nD = ");
            scanf("%f", &D);

        }

        R = N / D;

        printf("O resultado da divis�o de %.2f por %.2f � %.2f.", N, D, R);
        printf("\nVoc� deseja outro c�lculo (S/N)?\n");
        scanf(" %c", &resposta);

        while(resposta != 'S' && resposta != 'N'){ // repete at� que a resposta seja S ou N
            
            printf("RESPOSTA INV�LIDA\nInsira a letra N para n�o e S para sim.");
            printf("\nVoc� deseja outro c�lculo?\n");
            scanf(" %c", &resposta);

        }

    }

    return 0;

}