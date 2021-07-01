#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>


// Recebe uma frase e conta quantas palavras ela possui

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

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *frase = (char *)malloc(sizeof(char) * 1024);
    int i;

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    correcao(frase);
    i = contpalavra(frase);

    printf("\nQuantidade de palavras na frase = %i", i);

    free(frase);

    return 0;
}