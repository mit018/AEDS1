#include <stdio.h>
#include <locale.h>

// Apresenta um menu com 3 op��es (2 opera��es - m�dia aritm�tica e ponderada; e 1 para sair)
// e executa a opera��o de acordo com a escolha do usu�rio

int main(){

    setlocale (LC_ALL, "Portuguese");

    int opcao;

    float n1, n2, n3, p1, p2, p3, media;

    printf("\nMenu de op��es:\n1. M�dia aritm�tica\n2. M�dia ponderada\n3. Sair");
    
    printf("\nDigite a op��o desejada: ");

    scanf("%i", &opcao);

    while(opcao != 3){ // executa apenas se a op��o escolhida nao for 3

        if(opcao == 1){

            printf("Insira 2 notas: ");

            scanf("%f %f", &n1, &n2);

            media = (n1 + n2) / 2;

            printf("A m�dia aritm�tica de %.2f e %.2f � %.2f", n1, n2, media);

        }else if(opcao == 2){

            printf("Insira 3 notas: ");

            scanf("%f %f %f", &n1, &n2, &n3);

            printf("Insira seus respectivos pesos: ");

            scanf("%f %f %f", &p1, &p2, &p3);

            media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);

            printf("A m�dia ponderada de %.2f, %.2f e %.2f � %.2f", n1, n2, n3, media);

        }else if(opcao > 3 && opcao < 1){

            printf("Op��o inv�lida");

        }

        printf("\nMenu de op��es:\n1. M�dia aritm�tica\n2. M�dia ponderada\n3. Sair");
    
        printf("\nDigite a op��o desejada: ");

        scanf("%i", &opcao);

    }// fim while


    return 0;

}