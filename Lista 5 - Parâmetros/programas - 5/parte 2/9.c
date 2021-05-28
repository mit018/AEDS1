#include <stdio.h>
#include <locale.h>

void somadiv(int num){

    int i, resto, soma = 0;

    for(i = 1; i <= num; i++){

        resto = num % i;

        if(resto == 0){

            soma += i;
        }
    }

    printf("Soma dos divisores de %i = %i", num, soma);

}

int main(){

    setlocale (LC_ALL, "Portuguese");

    int num;

    printf("Insira um valor inteiro e positivo: ");
    scanf("%i", &num);

    somadiv(num);

    return 0;
}// fim int main