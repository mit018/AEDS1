#include <stdio.h>
#include <locale.h>

// Exibe o maior dentre tr�s n�meros inseridos

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, c;

    printf("Insira tr�s n�meros: ");

    scanf("%f %f %f", &a, &b, &c);

    if((a > b && a > c) || (a == b && a > c) || (a == c && a > b)){

        printf("%.2f � o maior valor os tr�s.", a);

    } else if((b > a && b > c) || (b == a && b > c) || (b == c && b > a)){

        printf("%.2f � o maior valor os tr�s.", b);

    } else if((c > a && c > b) || (c == a && c > b) || (c == b && c > a)){

        printf("%.2f � o maior valor os tr�s.", c);

    } else if(a == b && a == c){

        printf("Os tr�s n�meros s�o iguais (%.2f).", a);

    }

    return 0;
}// fim int main