#include <stdio.h>
#include <locale.h>

// Preenche um vetor com quinze n�meros, determina e mostra:
// o maior n�mero e a posi��o por ele ocupada no vetor
// o menor n�mero e a posi��o por ele ocupada no vetor

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
            printf("Valor inv�lido, insira novamente.\n");
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
    
    printf("O maior n�mero � %.2f e ocupa a posi��o %.f no vetor.\n", maior, pmaior);
    printf("O menor n�mero � %.2f e ocupa a posi��o %.f no vetor.", menor, pmenor);


    return 0;
} // fim int main