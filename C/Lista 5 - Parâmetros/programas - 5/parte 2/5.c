#include <stdio.h>
#include <locale.h>

// Recebe um valor inteiro e verifique se ele � positivo ou negativo

void verificacao(int a){

    if(a > 0){

        printf("%i � positivo", a);
    }else if(a < 0){

        printf("%i � negativo", a);
    }
}// fim void verificacao

int main(){

    setlocale (LC_ALL, "Portuguese");

    int a;

    printf("Insira um n�mero inteiro: ");
    scanf("%i", &a);

    verificacao(a);

    return 0;
}// fim int main