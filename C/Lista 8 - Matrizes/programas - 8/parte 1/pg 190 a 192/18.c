#include <stdio.h>
#include <locale.h>

// Preenche um vetor com quinze números, determina e mostra:
// o maior número e a posição por ele ocupada no vetor
// o menor número e a posição por ele ocupada no vetor

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float maior = 0, menor, vet[15], pmaior, pmenor;
    int i;

    printf("Insira 15 valores positivos:\n");

    for (i = 0; i < 15; i++)
    {
        scanf("%f", &vet[i]);
        if(vet[i] <= 0){
            printf("Valor inválido, insira novamente.\n");
            i--;
        }
    }

    menor = vet[0];

    for (i = 0; i < 15; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
            pmaior = i;
        }
        else if (vet[i] < menor)
        {
            menor = vet[i];
            pmenor = i;
        }
    }
    
    printf("O maior número é %.2f e ocupa a posição %.f no vetor.\n", maior, pmaior);
    printf("O menor número é %.2f e ocupa a posição %.f no vetor.", menor, pmenor);


    return 0;
} // fim int main