#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma frase e imprime cada palavra em uma linha

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char frase[1024];
    int tam, i;

    printf("Digite uma frase:\n");
    fgets(frase, sizeof(frase), stdin);

    tam = strlen(frase); // tam = tamanho da frase + 1 (\0)

    for (i = 0; i < (tam - 1); i++)
    {
        if (frase[i] != '\0')
        {
            if (frase[i] == ' ')
            {
                printf("\n"); // quanto o caractere for um espaço, a linha é quebrada
            }
            else
            {
                printf("%c", frase[i]); // se não, o caractere é exibido normalmente
            }
        }
    }

    return 0;
}// fim int main