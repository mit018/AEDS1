#include <stdio.h>
#include <locale.h>

// Recebe como parâmetro dois valores X e Z, calcule e retorna X elevado a Z
// sem utilizar funções ou operadores de potência prontos.

void potencia(int x, int z){

    int i, R;

    R = x;

    printf("%i elevado a %i = ", x, z);

    for(i = 1; i < z; i++){

        R *= x; // R = R * x, z vezes
    }
    if(z == 0){
        R = 1;
    }

    printf("%i", R);
}// fim void potencia

int main(){

    setlocale (LC_ALL, "Portuguese");

    int x, z;

    printf("Insira dois valores inteiros");
    printf("\nX: ");
    scanf("%i", &x);
    printf("\nZ: ");
    scanf("%i", &z);

    potencia(x, z);

    return 0;
}// fim int main