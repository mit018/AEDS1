#include <stdio.h>
#include <locale.h>

void sequencia(int N){

    float S = 2;
    int i = 1;

    while(i <= N){

        S = S + (1.0 / i);
        i++;
    }

    printf("S = %.2f", S);
}

int main(){

    setlocale (LC_ALL, "Portuguese");

    int N;

    printf("Insira um valor inteiro e positivo maior ou igual a 1: ");
    scanf("%i", &N);

    sequencia(N);

    return 0;
}// fim int main