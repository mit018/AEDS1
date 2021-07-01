#include <stdio.h>
#include <locale.h>

// Retorna a soma dos números inteiros existentes entre o número 1 e N inserido pelo usuário

void soma(int N){

    int i, R = 0;

    for(i = 1; i <= N; i++){

        R += i;
    }

    printf("Soma dos números inteiro de 1 a %i = %i", N, R);
}// fim void soma

int main(){

    setlocale (LC_ALL, "Portuguese");

    int N;

    printf("Insira um número inteiro positivo: ");
    scanf("%i", &N);

    soma(N);

    return 0;
}// fim int main