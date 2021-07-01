#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int contpalavra(char frase[])
{
    int i, cont = 1;
    for (i = 0; i < strlen(frase); i++) // percorre todos os caracteres da frase
    {
        if (frase[i] == ' ') // se for um espaço, significa o fim de uma palavra
        {
            cont++; // contador de quantos espaços +1 (pois a última palavra não terá um espaço depois para indicar seu final)
        }
    }
    return cont;
} // fim int contpalavra

void decod(char string[], int chave)
{
    int j = 0, i, a, k, l, m = 0;
    int quant = contpalavra(string), num[quant];

    a = strlen(string) / 4;

    char ascii[quant][10], cripto[a];
    char *aux = (char *)malloc(sizeof(char) * 10); // ponteiro de caracteres

    for (i = 0; i < quant; i++) // repetição para a quantidade de palavras(conjunto de números decimais)
    {
        k = 0;
        while (string[j] != ' ' && j < strlen(string))
        {
            ascii[i][k++] = string[j++]; // armazena cada conjunto em uma linha de uma matriz de strings
        }
        ascii[i][k] = '\0';
        j++;                      // pula o espaço
        num[i] = atoi(ascii[i]);  // transforma o número armazenado n forma de caracteres, em um número inteiro (num na posição i)
        *aux = (num[i] - (chave)) / 2; // converte o valor inteiro em caractere (ex.: 207 - 13 = 194 -> 194 / 2 = 97 -> a), e armazena em no ponteiro aux

        aux[strlen(aux)] = '\0'; // ultima posição de aux

        for (l = 0; l < strlen(aux); l++)
        {
            cripto[m++] = aux[l]; // transfere a string de aux para cripto, que acumula todos os caracteres
        }
    }

    cripto[m] = '\0';

    for (i = 0; i < strlen(cripto); i++)
    {
        string[i] = cripto[i]; // transfere cripto para a string inicial
    }
    string[i] = '\0';

    free(aux);

} // fim void decod

int main()
{
    setlocale(LC_ALL, "Portuguese");

    FILE *arq, *novoArq;
    char *string = (char *)malloc(sizeof(char) * 1024);
    int chave;

    arq = fopen("cod.txt", "r");

    if (arq == NULL)
    {
        printf("Houve um erro ao abrir o arquivo.\n");
        return 0;
    }

    fscanf(arq, "%[^\n]", string);

    printf("Insira uma chave para a descriptografia (valor inteiro):\n");
    scanf("%i", &chave);

    decod(string, chave);

    novoArq = fopen("decod.txt", "w");

    fprintf(novoArq, "%s", string);

    if (novoArq != NULL)
    {
        printf("Arquivo texto decodificado com sucesso.\n");
    }
    else
    {
        printf("Houve um erro na criação de um novo arquivo.\n");
    }

    fclose(novoArq);
    fclose(arq);

    return 0;
}// fim int main