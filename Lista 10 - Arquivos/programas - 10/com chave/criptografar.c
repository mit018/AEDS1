#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

void cod(char string[], int chave)
{
    int i, a, k;
    a = 4 * strlen(string);
    char aux[10], cripto[a];

    for (i = 0; i < 10; i++)
    {
        aux[i] = 0;
    }

    for (i = 0; i < a; i++)
    {
        cripto[i] = 0;
    }

    for (i = 0; i < strlen(string); i++)
    {
        k = (string[i] * 2) + (chave);
        if (i == (strlen(string) - 1))
        {
            sprintf(aux, "%d", k);
        }
        else
        {
            sprintf(aux, "%d ", k);
        }

        strcat(cripto, aux);
    }

    for (i = 0; i < strlen(cripto); i++)
    {
        string[i] = cripto[i];
    }
    string[i] = '\0';

} // fim void cod

int main()
{
    setlocale(LC_ALL, "Portuguese");

    FILE *arq, *novoArq;
    char *string = (char *)malloc(sizeof(char) * 1024);
    int chave;

    arq = fopen("texto.txt", "r");

    if (arq == NULL)
    {
        printf("Houve um erro ao abrir o arquivo.\n");
        return 0;
    }

    fscanf(arq, "%[^\n]", string);

    printf("Insira uma chave para a criptografia (valor inteiro):\n");
    scanf("%i", &chave);

    cod(string, chave);

    novoArq = fopen("cod.txt", "w");

    fprintf(novoArq, "%s", string);

    if (novoArq != NULL)
    {
        printf("Arquivo texto codificado com sucesso.\n");
    }
    else
    {
        printf("Houve um erro na criação de um novo arquivo.\n");
    }

    fclose(novoArq);
    fclose(arq);

    return 0;
}// fim int main