#include <stdio.h>
#include <locale.h>
#include <math.h>

// Recebe coordenadas de dois pontos quaisquer no plano cartesiano e
// escreve a distância entre eles

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int flag = 1;
    float x1, x2, y1, y2, D;
    printf("Insira as coordenadas de cada ponto para saber a distância (D) entre eles.\n(Digite 0 em todos para encerrar)");
    
    while(flag){ // se flag = 1 então a condição é verdadeira, se = a 0, falsa.

        printf("\nPonto P");
        printf("\nx = ");
        scanf("%f", &x1);
        printf("y = ");
        scanf("%f", &y1);

        printf("\nPonto Q");
        printf("\nx = ");
        scanf("%f", &x2);
        printf("y = ");
        scanf("%f", &y2);

        D = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2))); // distância = raiz quadrada da soma dos quadrados da diferença entre o x e y de cada ponto

        if(x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0){

            printf("D = %.2f", D);
            
        }else{

            flag = 0; // cancela o while
        }
    
    }// fim while

    return 0;

}// fim int main

