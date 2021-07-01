#include <stdio.h>
#include <locale.h>

// Recebe horas, minutos e segundos, soma e converte tudo para segundos

void segundos(float s, float m, float h){

    float R;
    R = s + (60 * m) + (3600 * h);
    printf("%.2f segundos, %.2f minutos e %.2f horas equivalem a %.2f segundos", s, m, h, R);

}// fim void segundos

int main(){

    setlocale (LC_ALL, "Portuguese");

    float s, m, h;

    printf("Insira os segundos: ");
    scanf("%f", &s);
    printf("\nminutos: ");
    scanf("%f", &m);
    printf("\nhoras: ");
    scanf("%f", &h);

    segundos(s, m, h);

    return 0;
}// fim int main