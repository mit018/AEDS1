#include <stdio.h>
#include <locale.h>

// calcula a soma dos dígitos de um número usando recursividade

int somadigitos(int num)
{
    if(num < 10){
        return num;
    }else{
        return (num % 10) + somadigitos(num / 10);
    }
}

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int num, R;
    
    printf("Insira um número inteiro positivo: ");
    scanf("%i", &num);

    R = somadigitos(num);

    printf("Soma dos dígitos de %i = %i", num, R);

    return 0;
}// fim int main