#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// testa se uma frase é uma permutação de outra

int testePermutacao(char frase1[], char frase2[])
{
    int i = 0, j = 0, cont = 0;
    for (i = 0; i < strlen(frase1); i++)
    {
        for (j = 0; j < strlen(frase2); j++)
        {
            if (frase1[i] == frase2[j])
            {
                frase2[j] = '_';
                cont++;
            }
        }
    }
    if (cont == strlen(frase1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}// fim int testePermutacao

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *frase1 = (char *)malloc(sizeof(char) * 1024);
    char *frase2 = (char *)malloc(sizeof(char) * 1024);
    int teste;

    printf("Digite a primeira frase:\n");
    scanf("%[^\n]", frase1);

    printf("Digite a segunda frase:\n");
    scanf(" %[^\n]", frase2);

    teste = testePermutacao(frase1, frase2);

    if (teste == 1)
    {
        printf("\nA frase 2 é uma permutação da frase 1.");
    }
    else
    {
        printf("\nA frase 2 não é uma permutação da frase 1.");
    }

    free(frase1);
    free(frase2);

    return 0;
}// fim int main