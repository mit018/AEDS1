#include <stdio.h>
#include <locale.h>

// Recebe dados de 10 produtos (código e quantidade), dados do cliente (código do produdo solicitado e quantidade desejada)
// e informa se será possivel atender o pedido, se sim, atualiza o estoque

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int produto[10], estoque[10], codproduto, qtd, codcliente = 1, i, x = 1;

    printf("Preencha os dados de cada um dos 10 produtos");

    for (i = 0; i < 10; i++)
    {
        printf("\nCódigo do %i° produto: ", x);
        scanf("%i", &produto[i]);

        printf("\nQuantidade do produto em estoque: ");
        scanf("%i", &estoque[i]);

        x++;
    }

    printf("\nInsira os dados do cliente");
    printf("\nInsira 0 em código do cliente para encerrar a entrada de dados");

    while (codcliente != 0)
    {
        printf("\nCódigo do cliente: ");
        scanf("%i", &codcliente);

        if (codcliente != 0)
        {
            printf("Código do produto solicitado: ");
            scanf("%i", &codproduto);

            for (i = 0; i < 10; i++)
            {
                if (i == 9 && codproduto != produto[i]) 
                {// se a condição for verdadeira, nenhuma das posições do vetor produto é igual ao código digitado, o código é inexistente
                    printf("\nCódigo Inexistente");
                }// se a condição anterior nao for verdadeira, significa que ainda faltam posições no vetor para serem comparadas com o código inserido
                else if (codproduto == produto[i])
                { // se o código inserido for igual a alguam posição do vetor, o código existe
                    printf("Quantidade: ");
                    scanf("%i", &qtd);

                    if (qtd > estoque[i])
                    {
                        printf("Não temos estoque suficiente dessa mercadoria.");
                    }
                    
                    else
                    {
                        printf("Pedido atendido. Obrigado e volte sempre!");
                        estoque[i] -= qtd;
                   } // retira a quantidade comprada pelo cliente do estoque, atualizando o valor do vetor na posição correspondente
                    i = 10; // condição de parada do for
                }    
            }
        }
    }

    x = 1; // redefine o numerador dos produtos para 0

    for (i = 0; i < 10; i++)
    {
        printf("\nCódigo do %i° produto: %i", x, produto[i]);
        printf("\nQuantidade do produto em estoque: %i\n", estoque[i]);
        x++;
    }

    return 0;
} // fim int main