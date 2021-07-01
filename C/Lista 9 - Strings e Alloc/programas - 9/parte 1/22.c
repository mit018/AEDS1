#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

// Recebe uma sequência de caracteres e mostra qual é a letra que ocorre na
// maior subsequência e o tamanho dessa subsequência


void criptografar(char frase[])
{
    int i = 0, cont, maior = 0, maiorChar;

    while (i < strlen(frase)) // percorre todas as letras da frase
    {
        cont = 1; // todas as letras aparecem pelo menos 1 vez
        while (frase[i] == frase[i + 1])
        {// se a letra seguinte for igual a anterior
            cont++; // contador aumenta
            i++; // pula pra próxima prosição
        }// encerra quando duas letras consecutivas forem diferentes uma da outra

        if (cont > maior)
        {// se o contador de uma letra for maior do que todos anteriores
            maior = cont; // a letra é definida como a que repetiu mais
            maiorChar = frase[i]; // caractere salvo como inteiro (valor decimal na tabela ascii)
        }
        i++;// avança a string
    }

    printf("\nMaior %c, tamanho %i", maiorChar, maior);
}// fim criptografar

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *frase = (char *)malloc(sizeof(char) * 1024);

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    criptografar(frase);

    free(frase);

    return 0;
}// fim int main