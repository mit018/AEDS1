#include <stdio.h>
#include <locale.h>

// Apresenta um menu com 3 opções (2 operações - média aritmética e ponderada; e 1 para sair)
// e executa a operação de acordo com a escolha do usuário

int main(){

    setlocale (LC_ALL, "Portuguese");

    int opcao;

    float n1, n2, n3, p1, p2, p3, media;

    printf("\nMenu de opções:\n1. Média aritmética\n2. Média ponderada\n3. Sair");
    
    printf("\nDigite a opção desejada: ");

    scanf("%i", &opcao);

    while(opcao != 3){ // executa apenas se a opção escolhida nao for 3

        if(opcao == 1){

            printf("Insira 2 notas: ");

            scanf("%f %f", &n1, &n2);

            media = (n1 + n2) / 2;

            printf("A média aritmética de %.2f e %.2f é %.2f", n1, n2, media);

        }else if(opcao == 2){

            printf("Insira 3 notas: ");

            scanf("%f %f %f", &n1, &n2, &n3);

            printf("Insira seus respectivos pesos: ");

            scanf("%f %f %f", &p1, &p2, &p3);

            media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);

            printf("A média ponderada de %.2f, %.2f e %.2f é %.2f", n1, n2, n3, media);

        }else if(opcao > 3 && opcao < 1){

            printf("Opção inválida");

        }

        printf("\nMenu de opções:\n1. Média aritmética\n2. Média ponderada\n3. Sair");
    
        printf("\nDigite a opção desejada: ");

        scanf("%i", &opcao);

    }// fim while


    return 0;

}