#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// recebe uma frase e a criptografa, retirando das palavras suas vogais, armazenando-as
// e também suas posições originais em vetores. Mstra a frase criptografada e posteriormente a descriptografa.

void criptografia(char frase[])
{
    int i, tam = strlen(frase), posicao[tam], op, j = 0;
    char vogal[tam], copia[tam];

    for (i = 0; i < strlen(frase); i++) // percorre toda a frase
    {
        copia[i] = frase[i]; // cria uma cópia da frase
        if (frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'u' || frase[i] == 'U')
        {// sempre que encontrar uma vogal
            posicao[j] = i; // guarda o número de sua posição
            vogal[j++] = frase[i]; // guarda a vogal
        }
    }
    copia[i] = '\0';

    j = 0;
    for (i = 0; i < strlen(frase); i++) // percorre toda a frase
    {
        while (frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'U' || frase[i] == 'u')
        {// sempre que encontrar uma vogal
            i++; // pula esse caractere
        }
        frase[j++] = frase[i]; // sobrepoe na frase original
    }
    frase[j] = '\0';

    printf("\nFrase criptografada:\n%s", frase);

    printf("\nDescriptografar? (1 - Sim; 0 - Não)\n");
    scanf("%i", &op);

    while (op != 0 && op != 1)
    {
        printf("\nOpção inválida, insira novamente: ");
        scanf("%i", &op);
    }

    if (op == 0)
    {
        return 0;
    }

    j = 0;
    for (i = 0; i < tam; i++) // repete a tam vezes (tam = tamanho da frase originalmente -> antes da criptografia)
    {
        if (i == posicao[j]) // quando estiver em uma posição i correspondente a um posição guardada de uma vogal
        {
            frase[i] = vogal[j]; // sobrepoe a vogal na frase
        }
        else // se não
        {
            frase[i] = copia[i]; // trasfere a frase normalmente
        }
        j++;
    }
    frase[i] = '\0';
    
    printf("\nFrase descriptografada:\n%s", frase);

} // fim void criptografia

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *frase = (char *)malloc(sizeof(char) * 1024);

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    criptografia(frase);

    free(frase);

    return 0;
} // fim int main