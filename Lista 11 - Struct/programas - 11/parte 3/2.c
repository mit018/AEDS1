#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* cria um controle automatizado de uma empresa com cadastro de 4 vendedores,
e 48 vendas (1 por mes para cada vendedor ) e salva esses dados*/

struct vendedor
{
    int codigo;
    int vendas[12];
} vendedor[4];

struct venda // 12 meses, no máximo 1 venda por mês para cada vendedor -> 12 * 4 = 48 = máximo de vendas
{
    int codVendedor;
    int mes;
    float valor;
} venda[48];

struct mes
{
    int vendas;
} mes[12];

void cadVendedor(int i)
{
    int j;

    printf("\nCÓDIGO: ");
    scanf("%i", &vendedor[i].codigo);

    for (j = 0; j < i; j++)
    {
        if (vendedor[j].codigo == vendedor[i].codigo)
        {
            printf("\nCódigo ja cadastrado, insira novamente: ");
            scanf("%i", &vendedor[i].codigo);
            j = -1; // reseta a posição para o código ser comparado novamente desde a primeira posição
        }
    }
}

int v = 0; // contador de vendas

int cadVenda(int i)
{
    int x = -1, j = 0, op;

    printf("\nCÓDIDO DO VENDEDOR: ");
    scanf("%i", &venda[i].codVendedor);

    while (j < 4)
    {
        if (venda[i].codVendedor == vendedor[j].codigo)
        {
            x = j; // guarda o número do vendedor o qual o código corresponde ao código inserido
        }

        if (j == 3 && x == -1)
        {
            printf("\nNão há nenhum(a) vendedor(a) registrado(a) com esse código. Insira novamente: ");
            scanf("%i", &venda[i].codVendedor);
            j = 0;
        }
        else
        {
            j++;
        }
    }

    printf("\nMÊS (digite um número inteiro de 1 a 12): ");
    scanf("%i", &venda[i].mes);

    while (venda[i].mes < 1 || venda[i].mes > 12)
    {
        printf("\nMês inválido, insira novamente (digite um número inteiro de 1 a 12): ");
        scanf("%i", &venda[i].mes);
    }

    while (vendedor[x].vendas[venda[i].mes - 1] >= 1)
    {
        printf("\nEste vendedor já possui uma venda cadastrada para o mês %i", venda[i].mes);
        printf("\n\n0 - Cancelar e voltar ao MENU");
        printf("\n1 - Insirir outro mês");
        printf("\n2 - Inserir outro código de vendedor");
        printf("\n\nOpção escolhida: ");
        scanf("%i", &op);

        while (op > 2 || op < 0)
        {
            printf("\nOpção inválida, insira novamente: ");
            scanf("%i", &op);
        }

        if (op == 0)
        {
            v--;
            return 0;
        }
        else if (op == 1)
        {
            printf("\nMÊS (digite um número inteiro de 1 a 12): ");
            scanf("%i", &venda[i].mes);

            while (venda[i].mes < 1 || venda[i].mes > 12)
            {
                printf("\nMês inválido, insira novamente (digite um número inteiro de 1 a 12): ");
                scanf("%i", &venda[i].mes);
            }
        }
        else
        {
            printf("\nCÓDIDO DO VENDEDOR: ");
            scanf("%i", &venda[i].codVendedor);

            while (j < 4)
            {
                if (venda[i].codVendedor == vendedor[j].codigo)
                {
                    x = j; // guarda o número do vendedor o qual o código corresponde ao código inserido
                }

                if (j == 3 && x == -1)
                {
                    printf("\nNão há nenhum(a) vendedor(a) registrado(a) com esse código. Insira novamente: ");
                    scanf("%i", &venda[i].codVendedor);
                    j = 0;
                }
                else
                {
                    j++;
                }
            }
        }
    }

    printf("\nVALOR: R$");
    scanf("%f", &venda[i].valor);

    while (venda[i].valor < 0)
    {
        printf("\nValor indisponível, insira novamente: R$");
        scanf("%f", &venda[i].valor);
    }

    vendedor[x].vendas[venda[i].mes - 1]++; // contador de vendas por mes e vendedor
    mes[venda[i].mes - 1].vendas++;         // contador de vendas por mes
    return 0;
}

int menu()
{
    int op;

    printf("\n\nMENU");
    printf("\n1 - Cadastrar vendedor");
    printf("\n2 - Cadastrar venda");
    printf("\n3 - Consultar as vendas de um funcionário em determinado mês");
    printf("\n4 - Consultar ao total de vendas de determinado vendedor");
    printf("\n5 - Mostrar o número do vendedor que mais vendeu em determinado mês");
    printf("\n6 - Mostrar o número do mês com mais vendas");
    printf("\n7 - Salvar dados");
    printf("\n8 - Sair");

    printf("\n\nOpção escolhida: ");
    scanf("%i", &op);

    while (op < 0 || op > 8)
    {
        printf("\n\nOpcao inválida, insira novamente: ");
        scanf("%i", &op);
    }

    return op;
}
void pesquisar(char tipo)
{
    int mes, x = -1, cod, i = 0, k = 0, cont;
    float valorTotal;

    printf("\nInsira o código de um vendedor: ");
    scanf("%i", &cod);

    while (i < 4)
    {
        if (cod == vendedor[i].codigo)
        {
            x = i; // guarda o número do vendedor que possui o código correspondente ao digitado
        }
        if (i == 3 && x == -1) // se chegar no último vendedor e não houver nenhum código correspondente ao digitado
        {
            printf("\n\nNão há nenhum(a) vendedor(a) registrado(a) com esse código. Insira novamente: ");
            scanf("%i", cod);
            i = 0;
        }
        else
        {
            i++;
        }
    }

    if (tipo == 'm')
    {
        printf("\nDigite um mês (1 a 12): ");
        scanf("%i", &mes);

        while (mes < 1 || mes > 12)
        {
            printf("\nMês inválido, insira novamente (digite um número inteiro de 1 a 12): ");
            scanf("%i", &mes);
        }
        cont = 0;
        for (k = 0; k < v; k++)
        {
            if (vendedor[x].codigo == venda[k].codVendedor && mes == venda[k].mes)
            {
                printf("\nVenda do funcionário (código = %i) no mês %i", vendedor[x].codigo, mes);
                printf("\nValor da venda: R$%.2f", venda[k].valor);
                cont++;
            }
        }

        if (cont == 0)
        {
            printf("Não há nenhuma venda desse vendedor no mês %i", mes);
        }
    }
    else if (tipo == 'v')
    {
        cont = 0;
        for (i = 0; i < 12; i++)
        {
            cont += vendedor[x].vendas[i];
        }
        printf("\nTotal de vendas do funcionário: %i", cont);

        valorTotal = 0;
        for (i = 0; i < v; i++)
        {
            if (venda[i].codVendedor == vendedor[x].codigo)
            {
                printf("\n\nVenda %i", i + 1);
                printf("\nMês: %i", venda[i].mes);
                printf("\nValor: R$%.2f", venda[i].valor);

                valorTotal = valorTotal + venda[i].valor;
            }
        }
        printf("\n\nValor total vendido: R$%.2f", valorTotal);
    }
}

int mostrar(char tipo)
{

    int i = 0, Mes, x = -1;

    if (tipo == 'v')
    {
        float maior = 0;
        printf("\nDigite um mês (1 a 12): ");
        scanf("%i", &Mes);

        while (Mes < 1 || Mes > 12)
        {
            printf("\nMês inválido, insira novamente (digite um número inteiro de 1 a 12): ");
            scanf("%i", &Mes);
        }

        for (i = 0; i < v; i++)
        {
            if (venda[i].mes == Mes)
            {
                if (venda[i].valor > maior)
                {
                    maior = venda[i].valor;
                    x = i;
                }
            }
        }
        if (x == -1)
        {
            printf("\nNão há vendas cadastradas nesse mês.");
        }
        else
        {
            printf("\nVendedor que mais vendeu no mês %i", Mes);
            printf("\nCódigo: %i", venda[x].codVendedor);
            printf("\nValor vendido: R$%.2f", maior);
        }
    }
    else if (tipo == 'm')
    {
        int maior = 0, x = -1;

        for (i = 0; i < 12; i++)
        {
            if (mes[i].vendas > maior)
            {
                maior = mes[i].vendas;
                x = i;
            }
        }

        printf("O mês com maior vendas (%i no total) é o %i", mes[x].vendas, x + 1);
    }
}

void salvar()
{
    FILE *arq;
    int i = 0, cont = 0, vendas = 0, j = 0;
    while (vendedor[i].codigo != 0)
    {
        cont = 1;
        arq = fopen("dados.txt", "a");
        if (!arq)
        {
            printf("\nFalha na abertura/criação do arquivo de texto para armazenar os dados.");
        }
        fprintf(arq, "\n\nVendedor %i\nCódigo: %i", i + 1, vendedor[i].codigo);

        vendas = 0;
        for (j = 0; j < 12; j++)
        {
            if (vendedor[i].vendas[j] != 0)
            {
                vendas++;
            }
        }
        fprintf(arq, "\nTotal de vendas realizadas: %i", vendas);
        i++;
        fclose(arq);
    }
    i = 0;
    while (venda[i].codVendedor != 0)
    {
        cont = 1;
        arq = fopen("dados.txt", "a");
        if (!arq)
        {
            printf("\nFalha na abertura/criação do arquivo de texto para armazenar os dados.");
        }
        fprintf(arq, "\n\nVenda %i\nCódigo do vendedor: %i\nMês: %i\nValor: R$%.2f", i + 1, venda[i].codVendedor, venda[i].mes, venda[i].valor);
        i++;
        fclose(arq);
    }

    if (cont == 0)
    {
        printf("\nNão há dados para serem salvos");
    }
    else
    {
        printf("Dados salvos com sucesso no arquivo de texto %cdados%c", '"', '"');
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, op;

    op = menu();

    while (op != 8)
    {
        if (op == 1)
        {
            for (i = 0; i < 4; i++)
            {
                printf("Cadastro do %i° vendedor\n", i + 1);
                cadVendedor(i);
            }
            op = menu();
        }
        else if (op == 2)
        {
            if (v >= 48)
            {
                printf("Cadastro de novas vendas indisponível\nMotivo: limite de 48 vendas atingido (apenas 1 venda por vendedor por mês)\n");
            }
            else
            {
                printf("Cadastro da %i° venda\n", v + 1);
                cadVenda(v);
                v++;
            }
            op = menu();
        }
        else if (op == 3)
        {
            pesquisar('m');
            op = menu();
        }
        else if (op == 4)
        {
            pesquisar('v');
            op = menu();
        }
        else if (op == 5)
        {
            mostrar('v');
            op = menu();
        }
        else if (op == 6)
        {
            mostrar('m');
            op = menu();
        }
        else
        {
            salvar();
            op = menu();
        }
    }

    return 0;
}