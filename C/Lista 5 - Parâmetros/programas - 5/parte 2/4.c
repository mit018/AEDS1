#include <stdio.h>
#include <locale.h>
#include <math.h>

// Calcula o volume de uma esfera de raio r

void volumeesfera(float r){

    float volume;
    volume = (4 * pow(r, 3)) / 3;
    printf("Volume da esfera de raio %.2f = %.2f", r, volume);
}// fim void volumeesfera

int main(){

    setlocale (LC_ALL, "Portuguese");

    float r;

    printf("Insira o raio da esfera: ");
    scanf("%f", &r);

    volumeesfera(r);

    return 0;
}// fim int main