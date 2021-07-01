#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma cadeia de caracteres e uma subcadeia e mostra
// quantas vezes a subcadeia aparece dentro da cadeia.

int cadeiaSubCadeia(char cadeia[], char subcadeia[])
{
    int i, j = 0, k, cont = 0, x = 0;
    for (i = 0; i < strlen(cadeia); i++) // percorre todos os caracteres da cadeia
    {
        x = 0;
        k = i;
        for (j = 0; j < strlen(subcadeia); j++)
        {
            if (cadeia[k] == subcadeia[j])
            {
                k++; // avança a cadeia apenas dentro dessa repetição
                x++; // conta quantos caraceteres da subcadeia são iguais aos da cadeia
            }
        }
        if (x == strlen(subcadeia)) // apenas se todos os caracteres da subcadeia foram correspondidos na cadeia
        {
            cont++;    // contador de quantas vezes a condição acima ocorreu
            i = k - 1; // se a condição ocorreu, i pode assumir a última posição verificada (k - 1)
        }
    }
    return cont;
}// fim int cadeiaSubcadeia

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *cadeia = (char *)malloc(sizeof(char) * 1024);
    char *subcadeia = (char *)malloc(sizeof(char) * 1024);
    int n = 0;

    printf("Digite uma cadeia de caracteres:\n");
    scanf("%[^\n]", cadeia);

    printf("Digite uma subcadeia de caracteres (menor que a anterior):\n");
    scanf(" %[^\n]", subcadeia);

    while(strlen(subcadeia) > strlen(cadeia))
    {
        printf("ERRO: A subcadeia deve ser menor que a cadeia digitada primeiramente\n");
        printf("Insira novamente:\n");
        scanf(" %[^\n]", subcadeia);
    }

    n = cadeiaSubCadeia(cadeia, subcadeia);

    if (n > 0)
    {
        printf("%c%s%c aparece %i vez(es) na cadeia", '"', subcadeia, '"', n);
    }
    else
    {
        printf("%c%s%c não aparece na cadeia", '"', subcadeia, '"');
    }

    free(cadeia);
    free(subcadeia);

    return 0;
}// fim int main