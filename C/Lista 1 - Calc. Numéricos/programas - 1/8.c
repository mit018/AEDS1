#include <stdio.h>
#include <math.h>
#include <locale.h>

// Calcula a área de um triângulo

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float area, triangulo;

    printf("Insira o tipo de triângulo (1 - retângulo, 2 - equilátero ou 3 - escaleno): ");

    scanf("%f", &triangulo);

    if(triangulo == 1 ){ 

        float c1, c2;

        printf("Insira o valor dos catetos: ");

        scanf("%f %f", &c1, &c2);

        area = (c1 * c2)/2; // área de triângulo retângulo

        printf("A área do triângulo vale %.2f.", area);

    } else if(triangulo == 2 ){ 

    float lado;

    printf("Insira o valor do lado: ");

    scanf("%f", &lado);

    area = (pow(lado, 2) * sqrt(3)) / 4; // Ã¡rea de triângulo equilátero

    printf("A area do triângulo vale %.2f.", area);

} else if(triangulo == 3 ){

        float perimetro, l1, l2, l3, x;

        printf("Insira o valor dos três lados: ");

        scanf("%f %f %f", &l1, &l2, &l3);

        perimetro = l1 + l2 + l3;

        x = perimetro / 2;

        area = sqrt(x * (x - l1) * (x - l2) * (x - l3)); // área de triângulo escaleno

        printf("A área do triângulo vale %.2f unidades de medida.", area);
    } 

    return 0;
}// fim int main