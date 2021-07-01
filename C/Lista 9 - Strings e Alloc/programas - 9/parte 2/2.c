#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Inverte os caracteres de uma string

void inverter(char frase[])
{
    char copia[strlen(frase)];
    int i, j = strlen(frase) - 1;

    for (i = 0; i < strlen(frase); i++)
    {
        copia[i] = frase[i]; // armazena a frase em uma string auxiliar
    }
    copia[i] = '\0';

    for (i = 0; i < strlen(frase); i++)
    {
        frase[i] = copia[j--]; // sobrepoe em frase, a string copia ao contrário
    }
} // fim void inverter

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *frase = (char *)malloc(sizeof(char) * 1024);

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    inverter(frase);

    printf("Frase invertida:\n%s", frase);

    free(frase);

    return 0;
}