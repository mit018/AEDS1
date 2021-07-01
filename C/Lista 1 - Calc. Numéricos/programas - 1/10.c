#include <stdio.h>
#include <locale.h>

// Recebe o ano de nascimento de uma pessoa e o ano atual, calcula e mostra 
// a idade dessa pessoa e quantos anos ela terá em 2050.

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int nasceu, atual, idade, futuro;

    printf("Insira o ano atual: ");

    scanf("%d", &atual);

    printf("Insira o seu ano de nascimento: ");

    scanf("%d", &nasceu);

    idade = atual - nasceu; // idade = ano atual - ano de nascimento

    futuro = 2050 - nasceu;

    printf("A sua idade atual é %d e em 2050 será %d", idade, futuro);

    return 0;
}// fim int main