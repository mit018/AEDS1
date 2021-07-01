#include <stdio.h>
#include <locale.h>

// lê um vetor de 10 inteiros, substitui os valores nulos por 1 e mostra o vetor antes e após a troca

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int i, vet[10], vet2[10];

    printf("Insira 10 valores inteiros:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%i", &vet[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if(vet[i] == 0){ // se o valor de vet for nulo
            vet2[i] = 1;
        }else{
            vet2[i] = vet[i];
        }
    }

    printf("\n1° VETOR:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%i\t", vet[i]);
    }

    printf("\n\n2° VETOR:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%i\t", vet2[i]);
    }


    return 0;
}// fim int main