#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma frase e mostra quantas letras diferentes ela possui

int letras(char frase[])
{
    int i, j, cont = 0, M, m, x;

    for (i = 0; i < strlen(frase); i++) // navega de A a Z, tanto maiúsculas (M) quanto minúsculas (m)
    {
        M = 65;
        m = 97;
        for (j = 0; j <= 25; j++) // navega por todos os caracteres da frase
        {
            if (frase[i] == M || frase[i] == m)
            {
                cont++;
            } // quando encontra o caractere correspondente ao decimal M ou m na tabela ASCII, adiciona uma unidade ao contador
            m++;
            M++;
        }
    }

    return cont;
}// fim int letras

int espacos(char frase[])
{
    int i, cont = 0;

    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == ' ') // se o caractere for um espaço
        {
            cont++; // contador de espaços
        }
    }

    return cont;
} // fim int espacos

int numeros(char frase[])
{
    int i, cont = 0;

    for (i = 0; i < strlen(frase); i++)
    {
        if (frase[i] > 47 && frase[i] < 58) // se o caractere estiver no intervalo dos números na tabela ASCII
        {
            cont++; // contador de números
        }
    }

    return cont;
} // fim int numeros

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *frase = (char *)malloc(sizeof(char) * 1024);
    int L, E, N;

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);


    L = letras(frase);
    E = espacos(frase);
    N = numeros(frase);

    printf("\nLetras: %i\nEspaços: %i\nNúmeros: %i", L, E, N);

    free(frase);
    
    return 0;
}// fim int main