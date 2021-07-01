#include <stdio.h>
#include <locale.h>

// Verifica a validade de uma senha fornecida pelo usuário

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int senha;

    printf("Senha: ");

    scanf("%d", &senha);

    if(senha == 4531){

        printf("Senha correta.\nAcesso permitido.");

    } else {

        printf("Senha incorreta.\nAcesso negado.");

    }

    return 0;

}