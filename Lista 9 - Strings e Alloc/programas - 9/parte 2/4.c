#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

// verifica se uma palavra � um pal�ndromo

int palindromo(char palavra[], int n, int x)
{
    if (palavra[n] == palavra[x]) // compara os caracteres nas posi��es espelhadas (primeira e �ltima, segunda e pen�ltima) j� que n vai diminuindo e x aumentando conforme a fun��o � chamada
    {
        palindromo(palavra, n - 1, x + 1);
        return 1;
    }
}// fim int palindromo

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *string = (char *)malloc(sizeof(char) * 1024); // aloca��o de mem�ria de tamanho 1024 (array de ponteiro com 1024 casas)
    int n, teste;

    printf("Digite uma palavra (toda mai�scula ou toda min�scula): ");
    scanf("%s", string);

    n = strlen(string); // guarda em n quantos caracteres tem na vari�vel string

    char palavra[n];
    strcpy(palavra, string); // transfere o "valor" da string para o vetor palavra

    teste = palindromo(palavra, n - 1, 0);
    if (teste == 1)
    {
        printf("%s � um pal�ndromo", palavra);
    }
    else
    {
        printf("%s n�o � um pal�ndromo", palavra);
    }

    return 0;
} // fim int main
