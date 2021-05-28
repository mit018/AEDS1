#include <stdio.h>
#include <locale.h>

// preencha uma matriz 2 ! 3, calcula e mostra a quantidade
// de elementos da matriz que não pertencem ao intervalo [5,15]

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, mat[2][3], cont = 0;

    printf("Insira 6 valores inteiros para uma matriz 2x3:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%i", &mat[i][j]);
        }
        if(mat[i][j] < 5 && mat[i][j] > 15){
            cont++;
        }
    }

    printf("\nQuantidade de elementos fora do intervalo [5, 15]: %i", cont);

    return 0;
} // fim int main