#include <stdio.h>
#include <locale.h>
#include <math.h>

// recebe um inteiro positivo e testa a igualdade: 1� + 2� + 3� + ... + n� = (n(n + 1)(2n + 1)) / 6

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x;
    float n, soma = 0, conta;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%f", &n);

    for(x = 0; x <= n; x++){ // repete n vezes (para que o �ltimo n�mero no c�lculo abaixo seja n)

        soma += pow(x, 2);

        if(x < n){

            printf("%.f + ", soma);

        }else if(x == n){

            printf("%.f = ", soma);
        }
    }

    conta = (n * (n + 1) * ((2 * n) + 1)) / 6;

    printf("%.2f", conta);

    if(soma == conta){

        printf("\n A igualdade acima � VERDADEIRA.");

    }else if(soma != conta){

        printf("\nA igualdade abaixo � FALSA.");

    }

    return 0;

}
