#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma frase e substitui a metade de cada palavra por "?"

void correcao(char *correcao)
{
    int i, j = 0;

    for (i = 0; i < strlen(correcao); i++)
    {
        if (correcao[i] == ' ') // se o caractere for um espaço
        {
            if (i == 0) // se estiver na primeira posição da frase
            {
                while (correcao[i] == ' ') // enquanto esse primeiro caractere for um espaço
                {
                    i++; // pula pra próxima posição
                }
                correcao[j++] = correcao[i]; // iguala à posição seguinte ao(s) espaço(s)
            }
            else // se a posição do espaço não for a primeira
            {
                correcao[j++] = correcao[i];   // iguala à ele sem pular
                while (correcao[i + 1] == ' ') // enquanto os próximos caracteres forem espaços
                {
                    i++; // são pulados
                }
            }
        }
        else // se não for um espaço
        {
            correcao[j++] = correcao[i]; // caractere armazenado normalmente
        }
    }
    // após a correção de espaços duplicados e espaços antes da frase
    if (correcao[j - 1] == ' ') // se a última posição com caractere for um espaço
    {
        correcao[j - 1] = '\0'; // é substituido pelo caractere que indica fim da frase
    }
    else // se o último caractere for diferente de um espaço
    {
        correcao[j] = '\0'; // então o seu seguinte recebe o caractere que indica fim da frase
    }
}// fim void correcao

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
}// fim int contpalavra

void criptografar(char frase[])
{
    int i = 0, j = 0, k = 0;
    int quant = contpalavra(frase);
    char palavra[quant][1024]; // grupos de palavras de até 1024 caracteres

    for (i = 0; i < quant; i++)
    {
        k = 0;
        while (frase[j] != ' ' && j < strlen(frase))
        {
            palavra[i][k++] = frase[j++]; // transfere cada palavra da frase para uma linha da matriz
        }
        palavra[i][k] = '\0';
        j++; // pula o espaço
    }

    j = 0;
    for (i = 0; i < quant; i++)
    {
        k = 0;
        while (frase[j] != ' ' && j < strlen(frase))
        {
            if (k < (strlen(palavra[i]) / 2))
            {
                frase[j++] = palavra[i][k++]; 
                // transfere normalmente cada caractere da palavra se sua posição for menor que a metade do tamanho da palavra
            }
            else
            {
                frase[j++] = '?';
                // muda o caractere para "?" se sua posição for maior que a metade do tamanho da palavra
            }
        }
        j++;
    }

    frase[j] = '\0';

} // fim int cadapalavra

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *frase = (char *)malloc(sizeof(char) * 1024);
    int i;

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    correcao(frase);

    criptografar(frase);

    printf("\nFrase criptografada:");
    printf("\n%s", frase);

    free(frase);

    return 0;
}// fim int main