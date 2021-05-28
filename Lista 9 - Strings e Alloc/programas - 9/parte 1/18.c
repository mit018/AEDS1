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
        if (correcao[i] == ' ') // se o caractere for um espa�o
        {
            if (i == 0) // se estiver na primeira posi��o da frase
            {
                while (correcao[i] == ' ') // enquanto esse primeiro caractere for um espa�o
                {
                    i++; // pula pra pr�xima posi��o
                }
                correcao[j++] = correcao[i]; // iguala � posi��o seguinte ao(s) espa�o(s)
            }
            else // se a posi��o do espa�o n�o for a primeira
            {
                correcao[j++] = correcao[i];   // iguala � ele sem pular
                while (correcao[i + 1] == ' ') // enquanto os pr�ximos caracteres forem espa�os
                {
                    i++; // s�o pulados
                }
            }
        }
        else // se n�o for um espa�o
        {
            correcao[j++] = correcao[i]; // caractere armazenado normalmente
        }
    }
    // ap�s a corre��o de espa�os duplicados e espa�os antes da frase
    if (correcao[j - 1] == ' ') // se a �ltima posi��o com caractere for um espa�o
    {
        correcao[j - 1] = '\0'; // � substituido pelo caractere que indica fim da frase
    }
    else // se o �ltimo caractere for diferente de um espa�o
    {
        correcao[j] = '\0'; // ent�o o seu seguinte recebe o caractere que indica fim da frase
    }
}// fim void correcao

int contpalavra(char frase[])
{
    int i, cont = 1;
    for (i = 0; i < strlen(frase); i++) // percorre todos os caracteres da frase
    {
        if (frase[i] == ' ') // se for um espa�o, significa o fim de uma palavra
        {
            cont++; // contador de quantos espa�os +1 (pois a �ltima palavra n�o ter� um espa�o depois para indicar seu final)
        }
    }
    return cont;
}// fim int contpalavra

void criptografar(char frase[])
{
    int i = 0, j = 0, k = 0;
    int quant = contpalavra(frase);
    char palavra[quant][1024]; // grupos de palavras de at� 1024 caracteres

    for (i = 0; i < quant; i++)
    {
        k = 0;
        while (frase[j] != ' ' && j < strlen(frase))
        {
            palavra[i][k++] = frase[j++]; // transfere cada palavra da frase para uma linha da matriz
        }
        palavra[i][k] = '\0';
        j++; // pula o espa�o
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
                // transfere normalmente cada caractere da palavra se sua posi��o for menor que a metade do tamanho da palavra
            }
            else
            {
                frase[j++] = '?';
                // muda o caractere para "?" se sua posi��o for maior que a metade do tamanho da palavra
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