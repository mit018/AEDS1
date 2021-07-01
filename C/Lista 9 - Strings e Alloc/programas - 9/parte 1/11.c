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

void cadapalavra(char frase[])
{
    int i = 0, j = 0, k = 0, cont = 0, teste;
    int quant = contpalavra(frase);
    char palavra[quant][1024]; // grupo de palavras de até 1024 caracteres
    char comparar[quant][1024]; // outro grupo igual para comparar

    for (i = 0; i < quant; i++)
    {

        k = 0;
        while (frase[j] != ' ' && j < strlen(frase)) // enquanto o caractere for diferente de um espaço
        {
            //separa cada palavra da frase nas linhas das matrizes palavra e comparar
            comparar[i][k] = frase[j]; 
            palavra[i][k++] = frase[j++];
        }// finaliza quando chega em um espaço

        palavra[i][k] = '\0';
        comparar[i][k] = '\0';
        j++; // pula o espaço
    }

    printf("\nQuantas vezes cada palavra aparece na frase:\n");
    for (i = 0; i < quant; i++)
    {
        cont = 0;
        for (j = 0; j < quant; j++)
        {
            teste = strcmp(palavra[i], comparar[j]); 
            // compara a string armazenada na linha i da matriz palavra com a string da linha j da matriz comparar
            // como as matrizes são iguais inicialmente, cada palavra da primeira matriz tem uma correspondente na segunda
            if (teste == 0) // quando o teste vale 0 (as strings são iguais)
            {
                cont++; // contador adiciona um
                comparar[j][0] = '\0'; // a palavra correspondente é "deletada", para que não possa "passar no teste" novamente
            }
        }
        if (cont > 0) // apenas quanto o contador valer mais que 0, ele será exibido
        {// isso pois na matriz palavra, podem existir palavras repetidas e apenas uma terá o contador certo, nas outras repetições será igual a 0
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