#include <stdio.h>
#include <locale.h>

// Recebe 6 números em um vetor e indica quantos e quais são pares ou ímpares

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int i, vet[6], par = 0, impar = 0;

    printf("Insira 6 números inteiros: ");

    for(i = 0; i < 6; i++){
        scanf("%i", &vet[i]); // percorre todos as 6 posições do vetor (de 0 a 5)
    }

    printf("Dados sobre os números inseridos\n");

    printf("Pares: ");
    for(i = 0; i < 6; i++){
        if((vet[i] % 2) == 0){
            printf("%i\t", vet[i]);
            par++;
        }
    }
    printf("\nQuantidade de pares: %i", par);

    printf("\nímpares: ");
    for(i = 0; i < 6; i++){
        if((vet[i] % 2) != 0){
            printf("%i\t", vet[i]);
            impar++;
        }
    }
    printf("\nQuantidade de ímpares: %i", impar);

    return 0;
}// fim int main