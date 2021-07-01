#include <stdio.h>
#include <locale.h>

// Exibe o maior dentre três números inseridos

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b, c;

    printf("Insira três números: ");

    scanf("%f %f %f", &a, &b, &c);

    if((a > b && a > c) || (a == b && a > c) || (a == c && a > b)){

        printf("%.2f é o maior valor os três.", a);

    } else if((b > a && b > c) || (b == a && b > c) || (b == c && b > a)){

        printf("%.2f é o maior valor os três.", b);

    } else if((c > a && c > b) || (c == a && c > b) || (c == b && c > a)){

        printf("%.2f é o maior valor os três.", c);

    } else if(a == b && a == c){

        printf("Os três números são iguais (%.2f).", a);

    }

    return 0;
}// fim int main