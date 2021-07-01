#include <stdio.h>
#include <locale.h>
#include <string.h>

// Recebe informações sobre 10 vendedores (nome, valor de suas vendas e comissão) e calcula
// quanto cada um receberá, quem recebe mais e menos e qual o valor total das vendas

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    float vendas[10], comissao[10], receber[10], maior = 0, menor, total;
    char nome[10][1024]; // 10 nomes de até 1024 caracteres
    char nome_maior[1024], nome_menor[1024];
    for (i = 0; i < 10; i++)
    {
        printf("Insira o nome do vendedor: ");
        scanf("%s", &nome[i]);

        printf("Insira o total das vendas deste funcionáio: R$");
        scanf("%f", &vendas[i]);

        total += vendas[i];

        printf("Insira a comissão do vendedor (em %c): ", '%');
        scanf("%f", &comissao[i]);

        receber[i] = (comissao[i]) / 100 * vendas[i];
    }

    menor = receber[0];

    for (i = 0; i < 10; i++)
    {
        if (receber[i] > maior)
        {
            maior = receber[i]; // define o maior valor a receber
            strcpy(nome_maior, nome[i]); // passa a cadeia de caracteres para outro vetor
        }
        if (receber[i] < menor)
        {
            menor = receber[i]; // define o menor valor a receber
            strcpy(nome_menor, nome[i]); // passa a cadeia de caracteres para outro vetor
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("\nNome: %s", nome[i]);
        printf("\nValor a receber: R$%.2f\n", receber[i]);
    }

    printf("\n");
    printf("\nTotal das vendas: R$%.2f", total);
    printf("\nMaior valor a receber é R$%.2f, por %s", maior, nome_maior);
    printf("\nMenor valor a receber é R$%.2f, por %s", menor, nome_menor);
    
    return 0;
} // fim int main