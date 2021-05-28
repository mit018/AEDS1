#include <stdio.h>
#include <locale.h>

// Recebe 7 números inteiros em um vetor e indica quais são míltiplos de 2 e 3, apenas 2 e apenas 3

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int i, vet[7];

    printf("Insira 7 números inteiros: ");

    for(i = 0; i < 7; i++){
        scanf("%i", &vet[i]); // percorre todos as 7 posições do vetor (de 0 a 5)
    }

    printf("Dados sobre os números inseridos\n");

    printf("\nMúltiplos de 2:\n");
    for(i = 0; i < 7; i++){
        if((vet[i] % 2) == 0){
            printf("%i\t", vet[i]);
        }
    }

    printf("\nMúltiplos de 3:\n");
    for(i = 0; i < 7; i++){
        if((vet[i] % 3) == 0){
            printf("%i\t", vet[i]);
        }
    }

    printf("\nMúltiplos de 2 e 3:\n");
    for(i = 0; i < 7; i++){
        if(((vet[i] % 3) == 0) && ((vet[i] % 2) == 0)){
            printf("%i\t", vet[i]);
        }
    }

    return 0;
}// fim int main