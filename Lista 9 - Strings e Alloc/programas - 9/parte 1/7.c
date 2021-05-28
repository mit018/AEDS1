#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma frase e mostra quantas letras diferentes ela possui

int letrasDiferentes(char frase[])
{
    int i, j, cont = 0, M = 65, m = 97, x;

    for (i = 0; i <= 25; i++) // navega de A a Z, tanto maiúsculas (M) quanto minúsculas (m)
    {
        x = 0;
        for (j = 0; j < strlen(frase); j++) // navega por todos os caracteres da frase
        {
            if (frase[j] == M || frase[j] == m)
            {
                x = 1;
            } // quando encontra o caractere correspondente ao decimal M ou m na tabela ASCII, x vale 1
        }
        if (x == 1)
        {
            cont++; // contador de quantos caracteres foram encontrados na frase
        }
        M++; // passa os valores da tabela ASCII para o próximo caractere
        m++;
    }

    return cont;
}// fim int letrasDiferentes

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char frase[1024];
    int i;

    printf("Digite uma frase usando os caracteres de A a Z (maiúsculos ou minúsculos):\n");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; i < strlen(frase) - 1; i++)
    {
        if ((frase[i] < 65 || (frase[i] > 90 && frase[i] < 97) || frase[i] > 122) && frase[i] != ' ')
        {
            printf("Caracteres inválidos, insira novamente:\n");
            fgets(frase, sizeof(frase), stdin);
            i = -1;
        }
    }

    i = letrasDiferentes(frase);

    printf("Quantidade de letras diferentes: ");

    printf("%i", i);

    return 0;
}// fim int main