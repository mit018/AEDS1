#include <stdio.h>
#include <locale.h>

// Le um vetor com quinze posições para números inteiros e divide todos os seus elementos pelo maior valor

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float vet[15], vet2[15], maior = 0;
    int i;

    printf("Insira 15 valores inteiros:\n");

    for (i = 0; i < 15; i++)
    {
        scanf("%f", &vet[i]);
    }

    for (i = 0; i < 15; i++)
    {
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    
    for (i = 0; i < 15; i++)
    {
        vet[i] = vet[i] / maior;
    }

    printf("\nValores do vetor após serem divididos pelo maior número inserido (%.2f)\n", maior);
    for (i = 0; i < 15; i++)
    {
        printf("%f\n", vet[i]);
    }

    return 0;
} // fim int main