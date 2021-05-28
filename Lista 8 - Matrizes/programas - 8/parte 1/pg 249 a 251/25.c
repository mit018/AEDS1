#include <stdio.h>
#include <locale.h>

// Recebe o preço de dez produtos e os armazena em um vetor;
// Recebe a quantidade estocada de cada um desses produtos, em cinco armazéns diferentes, utilizando
// uma matriz 5x10.
// O programa deverá calcular e mostrar:
// a quantidade de produtos estocados em cada um dos armazéns;
// a quantidade de cada um dos produtos estocados, em todos os armazéns juntos;
// o preço do produto que possui maior estoque em um único armazém;
// o menor estoque armazenado;
// o custo de cada armazém. 

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, estoque[5][10], quantArmazem[5], quantProduto[10], maiorEst[5], menorEst, menorArm, menorProd;
    float produtos[10], precMaiorEst[5], custo[5];

    for (i = 0; i < 5; i++)
    {
        quantArmazem[i] = 0;
        precMaiorEst[i] = 0;
        maiorEst[i] = 0;
        custo[i] = 0;
    }
    for (i = 0; i < 10; i++)
    {
        quantProduto[i] = 0;
    }

    printf("Insira o preço do");
    for (i = 0; i < 10; i++)
    {
        printf("\n%i° produto: R$", i + 1);
        scanf("%f", &produtos[i]);
    }

    printf("\nQuantidade de cada produto nos armazéns");
    for (i = 0; i < 5; i++)
    {
        printf("\n%i° armazém:", i + 1);
        for (j = 0; j < 10; j++)
        {
            printf("\t%i° produto: ", j + 1);
            scanf("%i", &estoque[i][j]);
            quantArmazem[i] += estoque[i][j];
            quantProduto[j] += estoque[i][j];
            custo[i] += (estoque[i][j] * produtos[j]);

            if(estoque[i][j] > maiorEst[i]){
                maiorEst[i] = estoque[i][j];
                precMaiorEst[i] = produtos[j];
            }
        }
    }

    menorEst = estoque[0][0];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if(estoque[i][j] < menorEst){
                menorEst = estoque[i][j];
                menorArm = i;
                menorProd = j;
            }
        }
    }
    

    printf("\nQuantidade total de produtos em cada armazém\n");
    for (i = 0; i < 5; i++)
    {
        printf("%i°: %i produtos\n", i + 1, quantArmazem[i]);
        printf("\tPreço do produto com maior estoque: R$%.2f\n", precMaiorEst[i]);
    }

    printf("\nQuantidade total de cada produto\n");
    for (i = 0; i < 10; i++)
    {
        printf("%i°: %i unidades\n", i + 1, quantProduto[i]);
    }

    printf("\nMenor estoque aramzenado: %i unidades do produto %i no armazém %i\n", menorEst, menorProd + 1, menorArm + 1);

    printf("\nCusto de cada armazém\n");
    for (i = 0; i < 5; i++)
    {
        printf("%i° = R$%.2f\n", i + 1, custo[i]);
    }

    return 0;
} // fim int main