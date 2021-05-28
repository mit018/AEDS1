#include <stdio.h>
#include <locale.h>

// Retorna a soma dos n�meros inteiros existentes entre o n�mero 1 e N inserido pelo usu�rio

void soma(int N){

    int i, R = 0;

    for(i = 1; i <= N; i++){

        R += i;
    }

    printf("Soma dos n�meros inteiro de 1 a %i = %i", N, R);
}// fim void soma

int main(){

    setlocale (LC_ALL, "Portuguese");

    int N;

    printf("Insira um n�mero inteiro positivo: ");
    scanf("%i", &N);

    soma(N);

    return 0;
}// fim int main