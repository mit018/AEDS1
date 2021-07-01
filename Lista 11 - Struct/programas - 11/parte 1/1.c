#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

/* cria um controle automatizado de uma clínica médica com cadastro de 5 pacientes,
3 médicos e no máximo 30 consultas (2 consultas por médico por dia) */

struct paciente
{
    int codigo;
    char nome[50];
    char endereco[50];
    int telefone;
} paciente[5];

struct medico
{
    int codigo;
    char nome[50];
    int telefone;
} medico[3];

struct consulta
{
    int num;
    int dia;
    char hora[5];
    int codMedico;
    int codPaciente;
} consulta[30];

void cadastro(int i, char tipo)
{
    int j = 0;

    printf("\nCÓDIGO: ");
    if (tipo == 'p')
    {
        scanf("%i", &paciente[i].codigo);
        getc(stdin); // pega o enter

        for (j = 0; j < i; j++)
        {
            if (paciente[i].codigo == paciente[j].codigo) // se o código for igual a algum já existente, deve ser inserido novamente
            {
                printf("Código ja cadastrado, insira novamente: ");
                scanf("%i", &paciente[i].codigo);
                getc(stdin); // pega o enter
                j = -1; // reseta a posição para o código ser comparado novamente desde a posição anterior
            }
        }
    }
    else if (tipo == 'm')
    {
        scanf("%i", &medico[i].codigo);
        getc(stdin); // pega o enter

        for (j = 0; j < i; j++)
        {
            if (medico[i].codigo == medico[j].codigo)  // se o código for igual a algum já existente, deve ser inserido novamente
            {
                printf("Código ja cadastrado, insira novamente: ");
                scanf("%i", &medico[i].codigo);
                getc(stdin); // pega o enter
                j = -1; // reseta a posição para o código ser comparado novamente desde a posição anterior
            }
        }
    }

    printf("\nNOME: ");
    if (tipo == 'p')
    {
        scanf("%[^\n]", paciente[i].nome);
        getc(stdin);  // pega o enter

        printf("\nENDEREÇO: ");
        scanf("%[^\n]", paciente[i].endereco);
        getc(stdin);  // pega o enter
    }
    else if (tipo == 'm')
    {
        scanf("%[^\n]", medico[i].nome);
        getc(stdin); // pega o enter
    }

    printf("\nTELEFONE: ");
    if (tipo == 'p')
    {
        scanf("%i", &paciente[i].telefone);
        getc(stdin); // pega o enter
    }
    else if (tipo == 'm')
    {
        scanf("%i", &medico[i].telefone);
        getc(stdin); // pega o enter
    }
}

int menu()
{
    int op;

    printf("\n\nMENU");
    printf("\n0 - Sair");
    printf("\n1 - Cadastrar pacientes");
    printf("\n2 - Cadastrar médicos");
    printf("\n3 - Cadastrar consultas");
    printf("\n4 - Pesquisar por um(a) médico(a) e um dia da semana");
    printf("\n5 - Pesquisar por um dia da semana");

    printf("\n\nOpção escolhida: ");
    scanf("%i", &op);

    while (op < 0 || op > 5)
    {
        printf("\n\nOpcao inválida, insira novamente: ");
        scanf("%i", &op);
    }

    return op;
}

struct cont
{
    int cont;
} contMedicoDia[3][5]; // contadores para cada médico em cada dia da semana

int cadastroConsulta(int i)
{
    int j, x = -1, op;

    printf("\nNÚMERO: ");
    scanf("%i", &consulta[i].num);

    for (j = 0; j < i; j++)
    {
        if (consulta[i].num == consulta[j].num) // se já há uma consulta registrada com esse número, deve ser inserido novamente
        {
            printf("\nNúmero da consulta ja cadastrado, insira novamente: ");
            scanf("%i", &consulta[i].num);
            j = -1; // reseta a posição para o código ser comparado novamente desde a posição anterior
        }
    }

    printf("\nDIA DA SEMANA (digite um número inteiro de 2 a 6 - segunda a sexta-feria): ");
    scanf("%i", &consulta[i].dia);

    while (consulta[i].dia > 6 && consulta[i].dia < 2)
    {
        printf("\nDia da semana inválido, insira novamente: ");
        scanf("%i", &consulta[i].dia);
    }

    printf("\nHORÁRIO (ex.: 18:00h): ");
    scanf(" %s", consulta[i].hora);

    printf("\nCÓDIGO DO(a) MÉDICO(a): ");
    scanf("%i", &consulta[i].codMedico);

    j = 0;
    while (j < 3)
    {
        if (consulta[i].codMedico == medico[j].codigo)
        {
            x = j; // guarda o número do médico o qual o código corresponde ao código inserido
        }

        if (j == 2 && x == -1)
        {
            printf("\nNão há nenhum(a) médico(a) registrado(a) com esse código. Insira novamente: ");
            scanf("%i", &consulta[i].codMedico);
            j = 0;
        }
        else
        {
            j++;
        }
    }

    while (contMedicoDia[x][consulta[i].dia].cont == 2)
    {
        printf("O(a) médico(a) %s atingiu o máximo de consultas (2) para esse dia da semana.", medico[x].nome);
        printf("\n\n0 - Cancelar e voltar ao MENU");
        printf("\n1 - Redefinir código do(a) médico(a)");
        printf("\n2 - Redefinir dia da semana");
        printf("\n\nOpção escolhida: ");
        scanf("%i", &op);

        while (op < 0 || op > 2)
        {
            printf("\nOpção inválida, insira novamente: ");
            scanf("%i", &op);
        }

        if (op == 0)
        {
            consulta[i].num = -1; // apaga o número da consulta
            return 0;
        }
        else if (op == 1)
        {
            printf("\nCÓDIGO DO(a) MÉDICO(a): ");
            scanf("%i", &consulta[i].codMedico);

            j = 0;
            x = -1;
            while (j < 3)
            {
                if (consulta[i].codMedico == medico[j].codigo)
                {
                    x = j; // guarda o número do médico o qual o código corresponde ao código inserido
                }

                if (j == 2 && x == -1)
                {
                    printf("\nNão há nenhum(a) médico(a) registrado(a) com esse código. Insira novamente: ");
                    scanf("%i", &consulta[i].codMedico);
                    j = 0;
                }
                else
                {
                    j++;
                }
            }
        }
        else
        {
            printf("\nDIA DA SEMANA (digite um número inteiro de 2 a 6 - segunda a sexta-feria): ");
            scanf("%i", &consulta[i].dia);

            while (consulta[i].dia > 6 && consulta[i].dia < 2)
            {
                printf("Dia da semana inválido, insira novamente: ");
                scanf("%i", &consulta[i].dia);
            }
        }
    }

    contMedicoDia[x][consulta[i].dia].cont++; // adiciona o contador de consultas do médico no determinado dia da semana

    printf("\nCÓDIGO DO PACIENTE: ");
    scanf("%i", &consulta[i].codPaciente);

    j = 0;
    x = 0;
    while (j < 5)
    {
        if (consulta[i].codPaciente == paciente[j].codigo)
        {
            x = 1;
        }
        if (j == 4 && x == 0)
        {
            printf("\nNao há nenhum paciente registrado com esse código. Insira novamente: ");
            scanf("%i", &consulta[i].codPaciente);
            j = 0;
        }
        else
        {
            j++;
        }
    }
    return 0;
}

int c = 0; // número de consultas

void pesquisar(char tipo)
{

    int dia, i = 0, x = -1, k = 0, cont = 0;
    char nome[50];

    printf("\nInsira um dia da semana (digite um inteiro de 2 a 6 - segunda a sexta-feira): ");
    scanf("%i", &dia);
    getc(stdin);

    while (dia > 6 && dia < 2)
    {
        printf("\nDia da semana inválido, insira novamente: ");
        scanf("%i", &dia);
        getc(stdin); // pega o enter
    }

    if (tipo == 'm')
    {

        printf("\nDigite o nome de um(a) médico(a) registrado(a): ");
        scanf("%[^\n]", nome);
        getc(stdin); // pega o enter

        while (i < 3)
        {
            if (strcmp(nome, medico[i].nome) == 0) 
            {
                x = i; // guarda o número do médico que possui o nome correspondente ao digitado
            }
            if (i == 3 && x == -1) // se chegar no último médico e não houver nenhum nome correspondente ao digitado
            {
                printf("\n\nNão há nenhum(a) médico(a) registrado(a) com esse nome. Insira novamente: ");
                scanf("%[^\n]", nome);
                getc(stdin); // pega o enter
                i = 0;
            }
            else
            {
                i++;
            }
        }
        for (i = 0; i < c; i++)
        {
            k = 0;
            while (consulta[i].codMedico == medico[k].codigo)
            {
                if (strcmp(medico[k].nome, nome) == 0)
                {
                    cont++; // contador de consultas com o código correspondente ao médico digitado
                }
                k++;
            }
        }
        printf("\n\nHá %i consulta(s) para o(a) médico(a) %s na %i° feira.", cont, nome, dia);
    }
    else if (tipo == 'd')
    {
        printf("\nConsultas para a %i° feira", dia);
        for (i = 0; i < c; i++)
        {
            if (dia == consulta[i].dia)
            {
                k = 0;
                while (consulta[i].codMedico != medico[k].codigo)
                {
                    k++; // adiciona até encontrar o código do médico correspondente ao da consulta
                }

                strcpy(nome, medico[k].nome);

                printf("\n\n%i° Consulta", i + 1);
                printf("\nNOME DO MÉDICO RESPONSÁVEL: %s", nome);
                printf("\nNÚMERO: %i", consulta[i].num);
                printf("\nHORÁRIO: %s", consulta[i].hora);
                printf("\nCÓDIGO DO MÉDICO(a): %i", consulta[i].codMedico);
                printf("\nCÓDIGO DO PACIENTE: %i", consulta[i].codPaciente);
            }
            else
            {
                printf("\nNão há consultas marcadas para esse dia da semana.");
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op = menu();

    while (op != 0)
    {
        if (op == 1)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Cadastro do %i° paciente\n", i + 1);
                cadastro(i, 'p');
            }
            op = menu();
        }
        else if (op == 2)
        {
            for (int i = 0; i < 3; i++)
            {
                printf("Cadastro do %i° medico\n", i + 1);
                cadastro(i, 'm');
            }
            op = menu();
        }
        else if (op == 3)
        {
            if (c >= 30)
            {
                printf("Cadastro de novas consultas indisponível\nMotivo: limite de 30 consultas atingido (apenas 2 consultas por medico)\n");
            }
            else
            {
                printf("Cadastro da %i° consulta\n", c + 1);
                cadastroConsulta(c);
                c++;
            }
            op = menu();
        }
        else if (op == 4)
        {
            pesquisar('m');
            op = menu();
        }
        else
        {
            pesquisar('d');
            op = menu();
        }
    }

    return 0;
}
