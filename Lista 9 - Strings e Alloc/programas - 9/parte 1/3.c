#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Retira todos os espa�os de uma frase

void tirarEspacos(char frase[])
{
    int i, j = 0;
    for (i = 0; i < strlen(frase); i++)
    {
        while (frase[i] == ' ')
        {
            // enquanto o carctere for um espa�o, pula para o caractere da frente
            i++;
        }
        frase[j++] = frase[i]; // iguala a pr�pria frase aos novos caracteres
    }
    frase[j] = '\0';
}// fim void tirarEspacos

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char frase[1024];

    printf("Digite uma frase:\n");
    fgets(frase, sizeof(frase), stdin);

    tirarEspacos(frase);

    printf("Frase sem espa�os em branco:\n");

    printf("%s", frase);

    return 0;
}// fim int main