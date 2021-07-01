#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

// verifica se uma palavra é um palíndromo

int palindromo(char palavra[], int n, int x)
{
    if (palavra[n] == palavra[x]) // compara os caracteres nas posições espelhadas (primeira e última, segunda e penúltima) já que n vai diminuindo e x aumentando conforme a função é chamada
    {
        palindromo(palavra, n - 1, x + 1);
        return 1;
    }
}// fim int palindromo

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *string = (char *)malloc(sizeof(char) * 1024); // alocação de memória de tamanho 1024 (array de ponteiro com 1024 casas)
    int n, teste;

    printf("Digite uma palavra (toda maiúscula ou toda minúscula): ");
    scanf("%s", string);

    n = strlen(string); // guarda em n quantos caracteres tem na variável string

    char palavra[n];
    strcpy(palavra, string); // transfere o "valor" da string para o vetor palavra

    teste = palindromo(palavra, n - 1, 0);
    if (teste == 1)
    {
        printf("%s é um palíndromo", palavra);
    }
    else
    {
        printf("%s não é um palíndromo", palavra);
    }

    return 0;
} // fim int main
