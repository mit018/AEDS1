#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma frase e, a cada duas palavras dela, realiza uma criptografia, ou seja:
// a primeira letra da primeira palavra da frase concatenada com a última letra da segunda palavra,
// concatenada com a segunda letra da primeira palavra e com a penúltima letra da segunda palavra e 
// assim por diante. No caso de quantidade de palavras ímpares, a última palavra é simplesmente ser invertida. 

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
    int i, j = 0, k = 0, x;
    int soma, quant = contpalavra(frase);

    char palavra[quant][1024];

    for (i = 0; i < quant; i++)
    {
        k = 0;
        while (frase[j] != ' ' && j < strlen(frase)) // enquanto o caractere for diferente de um espaço
        {
            // separa cada palavra da frase em cada linha da matriz palavra, caracter por caractere
            palavra[i][k++] = frase[j++]; 
        }// finaliza quando chega em um espaço

        palavra[i][k] = '\0';
        j++; // pula o espaço
    }

    k = 0; // k é a posição do caractere na frase
    for (i = 0; i < quant - 1; i = i + 2) // percorre por duplas de palavras
    {
        j = 0; // j é a primeira posição da primeira palavra
        x = strlen(palavra[i + 1]) - 1; // x é a posição da última letra da segunda palavra

        if (strlen(palavra[i]) < strlen(palavra[i + 1])) // se a primeira palavra for menor que a segunda
        {
            while (j < strlen(palavra[i])) // equanto j não chegar na última posição da primeira palavra
            {
                frase[k++] = palavra[i][j++]; // primeiro caractere é a posição j da primeira palavra e assim por diante (j aumenta)
                frase[k++] = palavra[i + 1][x--]; // próximo caractere é a posição x da última palavra e assim por diante (x diminui)
            }
            // quando todos os caracteres da primeira palavra foram percorridos
            for (j = x; j >= 0; j--)
            {
                frase[k++] = palavra[i + 1][j]; // resto da segunda palavra é armazenado invertido
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
                frase[k++] = palavra[i][x]; // resto da primeira palavra é armazenado
            }
        }

        frase[k++] = ' '; // espaço após a concatenação de 2 palavras
    }

    if (quant % 2 != 0) // se a quantidade de palavras for ímpar
    {
        for (i = strlen(palavra[quant - 1]) - 1; i >= 0; i--)
        {
            frase[k++] = palavra[quant - 1][i]; // inverte a última palavra
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