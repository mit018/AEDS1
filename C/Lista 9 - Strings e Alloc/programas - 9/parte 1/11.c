#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma frase e conta quantas vezes cada palavra aparece

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

void cadapalavra(char frase[])
{
    int i = 0, j = 0, k = 0, cont = 0, teste;
    int quant = contpalavra(frase);
    char palavra[quant][1024]; // grupo de palavras de at� 1024 caracteres
    char comparar[quant][1024]; // outro grupo igual para comparar

    for (i = 0; i < quant; i++)
    {

        k = 0;
        while (frase[j] != ' ' && j < strlen(frase)) // enquanto o caractere for diferente de um espa�o
        {
            //separa cada palavra da frase nas linhas das matrizes palavra e comparar
            comparar[i][k] = frase[j]; 
            palavra[i][k++] = frase[j++];
        }// finaliza quando chega em um espa�o

        palavra[i][k] = '\0';
        comparar[i][k] = '\0';
        j++; // pula o espa�o
    }

    printf("\nQuantas vezes cada palavra aparece na frase:\n");
    for (i = 0; i < quant; i++)
    {
        cont = 0;
        for (j = 0; j < quant; j++)
        {
            teste = strcmp(palavra[i], comparar[j]); 
            // compara a string armazenada na linha i da matriz palavra com a string da linha j da matriz comparar
            // como as matrizes s�o iguais inicialmente, cada palavra da primeira matriz tem uma correspondente na segunda
            if (teste == 0) // quando o teste vale 0 (as strings s�o iguais)
            {
                cont++; // contador adiciona um
                comparar[j][0] = '\0'; // a palavra correspondente � "deletada", para que n�o possa "passar no teste" novamente
            }
        }
        if (cont > 0) // apenas quanto o contador valer mais que 0, ele ser� exibido
        {// isso pois na matriz palavra, podem existir palavras repetidas e apenas uma ter� o contador certo, nas outras repeti��es ser� igual a 0
            printf("\n%s: %i", palavra[i], cont);
        }
    }
}// fim int cadapalavra

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *frase = (char *)malloc(sizeof(char) * 1024);
    int i;

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    correcao(frase);

    cadapalavra(frase);

    free(frase);

    return 0;
}// fim int main