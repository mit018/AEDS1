#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma frase e troca a primeira palavra com a �ltima

int espacos(char frase[])
{
    int i, cont = 0;

    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == ' ') // se o caractere for um espa�o
        {
            cont++; // contador de espa�os
        }
    }

    return cont;
} // fim int espacos

void criptografar(char frase[])
{
    int i = 0, cont = 0, j = 0, espaco = espacos(frase);
    char primeira[1024], ultima[1024], meio[strlen(frase)], resultado[strlen(frase)];

    for (i = 0; frase[i] != ' '; i++) // at� chegar no primeiro espa�o da frase (fim da primeira palavra)
    {
        primeira[i] = frase[i];
    }
    primeira[i] = '\0';

    for (i = 0; i < strlen(frase); i++) // percorre toda a frase
    {
        if (frase[i] == ' ')
        {
            cont++; // contagem de quantos espa�os a frase tem
        }
        if (cont == espaco) // quando o contador chegar no �ltimo espa�o
        {
            if (frase[i] != ' ') // pula o espa�o
            {
                ultima[j++] = frase[i]; // armazena os caracteres seguintes
            }
        }
    }
    ultima[j] = '\0';

    j = 0;
    cont = 0;
    for (i = 0; i < strlen(frase) - strlen(ultima); i++) // percorre a frase toda menos a �ltima palavra
    {
        if (frase[i] == ' ')
        {
            cont++; // contagem de quantos espa�os a frase tem
        }
        if (cont > 0) // a partir do primeiro espa�o
        {
            meio[j++] = frase[i]; // armazena os caracteres seguintes
        }
    }
    meio[j] = '\0';

    sprintf(frase, "%s%s%s", ultima, meio, primeira); // concatena todas as strings
}// fim void criptografar

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *frase = (char *)malloc(sizeof(char) * 1024);

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    criptografar(frase);

    printf("\nFrase criptografada:\n%s", frase);

    free(frase);

    return 0;
}// fim int main