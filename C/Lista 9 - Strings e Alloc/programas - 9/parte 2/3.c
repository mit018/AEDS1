#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma frase e determina a posição da primeira, ultima e todas as ocorrências
// de uma letra nessa frase

void ocorrencia(char frase[], char letra)
{
    int i, tam = strlen(frase), posicao[tam], x = 0, cont = 0, j = 0;

    for (i = 0; i < strlen(frase); i++) // percorre toda a frase
    {
        if(frase[i] == letra)
        {
            cont++; // contador de aparições da letra na frase
            posicao[j++] = i; // guarda o número de sua posição
        }
    }

    if (cont > 0)
    {
        printf("\nPosições das ocorrências da letra '%c' na string\n", letra);
        printf("\nPrimeira: %i\n", posicao[0]);
        printf("Última: %i\n", posicao[cont - 1]);

        printf("\nTodas as ocorrências\n");
        for (i = 0; i < cont; i++)
        {
            printf("%i°: posição %i\n", i + 1, posicao[i]);
        }
    }
    else
    {
        printf("\nA letra não aparece na string.");
    }

} // fim void ocorrencia

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *frase = (char *)malloc(sizeof(char) * 1024), letra;

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    printf("\nDigite uma letra:\n");
    scanf(" %c", &letra);

    ocorrencia(frase, letra);

    free(frase);

    return 0;
} // fim int main