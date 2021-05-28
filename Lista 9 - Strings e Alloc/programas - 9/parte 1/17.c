#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma frase e, a cada duas palavras dela, realiza uma criptografia, ou seja:
// a primeira letra da primeira palavra da frase concatenada com a �ltima letra da segunda palavra,
// concatenada com a segunda letra da primeira palavra e com a pen�ltima letra da segunda palavra e 
// assim por diante. No caso de quantidade de palavras �mpares, a �ltima palavra � simplesmente ser invertida. 

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
    int i, j = 0, k = 0, x;
    int soma, quant = contpalavra(frase);

    char palavra[quant][1024];

    for (i = 0; i < quant; i++)
    {
        k = 0;
        while (frase[j] != ' ' && j < strlen(frase)) // enquanto o caractere for diferente de um espa�o
        {
            // separa cada palavra da frase em cada linha da matriz palavra, caracter por caractere
            palavra[i][k++] = frase[j++]; 
        }// finaliza quando chega em um espa�o

        palavra[i][k] = '\0';
        j++; // pula o espa�o
    }

    k = 0; // k � a posi��o do caractere na frase
    for (i = 0; i < quant - 1; i = i + 2) // percorre por duplas de palavras
    {
        j = 0; // j � a primeira posi��o da primeira palavra
        x = strlen(palavra[i + 1]) - 1; // x � a posi��o da �ltima letra da segunda palavra

        if (strlen(palavra[i]) < strlen(palavra[i + 1])) // se a primeira palavra for menor que a segunda
        {
            while (j < strlen(palavra[i])) // equanto j n�o chegar na �ltima posi��o da primeira palavra
            {
                frase[k++] = palavra[i][j++]; // primeiro caractere � a posi��o j da primeira palavra e assim por diante (j aumenta)
                frase[k++] = palavra[i + 1][x--]; // pr�ximo caractere � a posi��o x da �ltima palavra e assim por diante (x diminui)
            }
            // quando todos os caracteres da primeira palavra foram percorridos
            for (j = x; j >= 0; j--)
            {
                frase[k++] = palavra[i + 1][j]; // resto da segunda palavra � armazenado invertido
            }
        }
        else // se a primeira palavra for maior que a segunda
        {
            while (j < strlen(palavra[i + 1]))
            {
                frase[k++] = palavra[i][j++];
                frase[k++] = palavra[i + 1][x--];
            } 
            // quando todos os caracteres da segunda palavra foram percorridos
            for (x = j; x < strlen(palavra[i]); x++)
            {
                frase[k++] = palavra[i][x]; // resto da primeira palavra � armazenado
            }
        }

        frase[k++] = ' '; // espa�o ap�s a concatena��o de 2 palavras
    }

    if (quant % 2 != 0) // se a quantidade de palavras for �mpar
    {
        for (i = strlen(palavra[quant - 1]) - 1; i >= 0; i--)
        {
            frase[k++] = palavra[quant - 1][i]; // inverte a �ltima palavra
        }
    }

    frase[k] = '\0';

}// fim criptografar

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *frase = (char *)malloc(sizeof(char) * 1024);

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    correcao(frase);
    criptografar(frase);

    printf("\nFrase criptografada:\n%s", frase);

    free(frase);

    return 0;
}// fim int main