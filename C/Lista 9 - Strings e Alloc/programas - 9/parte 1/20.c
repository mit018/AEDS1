#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma frase a criptografa utilizando a representação ASCII de
// cada caractere mais um espaço, e depois procede à sua descriptografia.

void criptografar(char frase[])
{
    int i, a, k;
    a = 4 * strlen(frase);
    char aux[4], cripto[a];

    for (i = 0; i < 4; i++)
    {
        aux[i] = 0;
    }

    for (i = 0; i < a; i++)
    {
        cripto[i] = 0;
    }

    for (i = 0; i < strlen(frase); i++)
    {
        k = frase[i];
        if (i == (strlen(frase) - 1))
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
        frase[i] = cripto[i];
    }
    frase[i] = '\0';

} // fim void criptografar

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

void descriptografar(char frase[])
{
    int j = 0, i, a, k, l, m = 0;
    int quant = contpalavra(frase), num[quant];

    a = strlen(frase) / 4;

    char ascii[quant][4], cripto[a];
    char *aux = (char *)malloc(sizeof(char) * 4); // ponteiro de caracteres

    for (i = 0; i < quant; i++) // repetição para a quantidade de palavras(conjunto de números decimais)
    {
        k = 0;
        while (frase[j] != ' ' && j < strlen(frase))
        {
            ascii[i][k++] = frase[j++]; // armazena cada conjunto em uma linha de uma matriz de strings
        }
        ascii[i][k] = '\0';
        j++;                     // pula o espaço
        num[i] = atoi(ascii[i]); // transforma o número armazenado n forma de caracteres, em um número inteiro (num na posição i)
        *aux = num[i];           // converte o valor inteiro em caractere (ex.: 97 -> a), e armazena em no ponteiro aux

        aux[strlen(aux)] = '\0'; // ultima posição de aux

        for (l = 0; l < strlen(aux); l++)
        {
            cripto[m++] = aux[l]; // transfere a string de aux para cripto, que acumula todos os caracteres
        }
    }

    cripto[m] = '\0';

    for (i = 0; i < strlen(cripto); i++)
    {
        frase[i] = cripto[i]; // transfere cripto para a frase inicial
    }
    frase[i] = '\0';

    free(aux);

} // fim void descriptografar

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *frase = (char *)malloc(sizeof(char) * 1024);
    int op;

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    criptografar(frase);

    printf("\nFrase criptografada:\n%s", frase);

    printf("\nDescriptografar? (1 - Sim; 0 - Não)\n");
    scanf("%i", &op);

    while (op != 0 && op != 1)
    {
        printf("\nOpção inválida, insira novamente: ");
        scanf("%i", &op);
    }

    if (op == 1)
    {
        descriptografar(frase);
        printf("\nFrase descriptografada:\n%s", frase);
    }

    free(frase);

    return 0;
} // fim int main