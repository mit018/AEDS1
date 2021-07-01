#include <stdio.h>
#include <locale.h>

// Preenche dois vetores de dez posições cada, determina e mostra um terceiro 
// contendo os elementos dos dois vetores anteriores ordenados de maneira decrescente

void vetorDecrescente(int vetor[], int n)
{
    int i, j, aux;
    for(i = 1; i < n; i++){
        for(j = 0; j < i; j++){ // i sempre será 1 unidade menor que j
        // compara dois valores armazenados em duas posições consecutivas do vetor
            if(vetor[j] < vetor[i]){ 
            // se o valor da posição antecessora for menor que o da seguinte, trocam de lugar
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
} // fim void vetorDecrescente

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet1[10], vet2[10], vet3[20]; // vetores
    int i;                            // variaveis de repetição

    printf("Insira 10 valores para o primeiro vetor:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%i", &vet1[i]);
    }

    printf("Insira mais 10 valores para o segundo vetor:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%i", &vet2[i]);
    }

    for (i = 0; i < 10; i++)
    {
        vet3[i] = vet1[i];
        vet3[i + 10] = vet2[i];
    }

    vetorDecrescente(vet3, 20); // organiza os 20 valores do vetor em ordem decrescente

    printf("Ordem descrescente dos valores:\n");

    for (i = 0; i < 20; i++)
    {
        printf("%i\t", vet3[i]);
    }

    return 0;
} // fim int main