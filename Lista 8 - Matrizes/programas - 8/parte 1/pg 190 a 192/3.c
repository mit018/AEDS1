#include <stdio.h>
#include <locale.h>

// Recebe dados de 10 produtos (c�digo e quantidade), dados do cliente (c�digo do produdo solicitado e quantidade desejada)
// e informa se ser� possivel atender o pedido, se sim, atualiza o estoque

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int produto[10], estoque[10], codproduto, qtd, codcliente = 1, i, x = 1;

    printf("Preencha os dados de cada um dos 10 produtos");

    for (i = 0; i < 10; i++)
    {
        printf("\nC�digo do %i� produto: ", x);
        scanf("%i", &produto[i]);

        printf("\nQuantidade do produto em estoque: ");
        scanf("%i", &estoque[i]);

        x++;
    }

    printf("\nInsira os dados do cliente");
    printf("\nInsira 0 em c�digo do cliente para encerrar a entrada de dados");

    while (codcliente != 0)
    {
        printf("\nC�digo do cliente: ");
        scanf("%i", &codcliente);

        if (codcliente != 0)
        {
            printf("C�digo do produto solicitado: ");
            scanf("%i", &codproduto);

            for (i = 0; i < 10; i++)
            {
                if (i == 9 && codproduto != produto[i]) 
                {// se a condi��o for verdadeira, nenhuma das posi��es do vetor produto � igual ao c�digo digitado, o c�digo � inexistente
                    printf("\nC�digo Inexistente");
                }// se a condi��o anterior nao for verdadeira, significa que ainda faltam posi��es no vetor para serem comparadas com o c�digo inserido
                else if (codproduto == produto[i])
                { // se o c�digo inserido for igual a alguam posi��o do vetor, o c�digo existe
                    printf("Quantidade: ");
                    scanf("%i", &qtd);

                    if (qtd > estoque[i])
                    {
                        printf("N�o temos estoque suficiente dessa mercadoria.");
                    }
                    
                    else
                    {
                        printf("Pedido atendido. Obrigado e volte sempre!");
                        estoque[i] -= qtd;
                   } // retira a quantidade comprada pelo cliente do estoque, atualizando o valor do vetor na posi��o correspondente
                    i = 10; // condi��o de parada do for
                }    
            }
        }
    }

    x = 1; // redefine o numerador dos produtos para 0

    for (i = 0; i < 10; i++)
    {
        printf("\nC�digo do %i� produto: %i", x, produto[i]);
        printf("\nQuantidade do produto em estoque: %i\n", estoque[i]);
        x++;
    }

    return 0;
} // fim int main