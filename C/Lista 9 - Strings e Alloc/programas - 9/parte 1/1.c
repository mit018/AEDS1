#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Criptografa uma frase escrevendo-a ao contrário e substituindo consoantes por "#"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char frase[1024];
    int tam, i;

    printf("Digite uma frase para ser criptografada:\n");
    fgets(frase, sizeof(frase), stdin); // fgets pega o /0

    tam = strlen(frase); // tam = quantos caracteres há na frase, contando com \0

    printf("%i", tam);

    for (i = tam - 2; i >= 0; i--) // -2 pois o número das posições é menor em uma unidade do tamanho, e para descartar o \0
    {
        if (frase[i] != '\0')
        {
            if (frase[i] == ' ' || frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'o' || frase[i] == 'U' || frase[i] == 'u')
            {
                printf("%c", frase[i]); // se o caractere for uma vogal ou um espaço, é exibido normalmente
            }
            else
            {
                frase[i] = '#'; // se não, é substituido por '#'
                printf("%c", frase[i]);
            }
        }
    }

    return 0;
}// fim int main