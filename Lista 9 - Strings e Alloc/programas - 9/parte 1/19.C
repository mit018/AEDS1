#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma frase e a criptografa, substituindo as vogais pelos seguintes
// números: a = 1, e = 2, i = 3, o = 4 e u = 5.

void criptografar(char frase[])
{
    int i;
    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == 'a' || frase[i] == 'A')
        {
            frase[i] = '1';
        }
        else if (frase[i] == 'e' || frase[i] == 'E')
        {
            frase[i] = '2';
        }
        else if (frase[i] == 'i' || frase[i] == 'I')
        {
            frase[i] = '3';
        }
        else if (frase[i] == 'o' || frase[i] == 'O')
        {
            frase[i] = '4';
        }
        else if (frase[i] == 'u' || frase[i] == 'U')
        {
            frase[i] = '5';
        }
    }
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