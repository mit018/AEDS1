#include <stdio.h>
#include <locale.h>

// l� uma senha at� que ela seja v�lida (1234)

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int senha = 0;

    printf("Senha: ");
    scanf("%i", &senha);

    while(senha != 1234){ // repete sempre que a senha digitada for diferente da correta (1234)

        printf("SENHA INV�LIDA");

        printf("\nSenha: ");
        scanf("%i", &senha);

    }// fim while

    printf("ACESSO PERMITIDO");


    return 0;

}// fim int main