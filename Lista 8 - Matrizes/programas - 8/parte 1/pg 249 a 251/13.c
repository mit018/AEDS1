#include <stdio.h>
#include <locale.h>

// Preenche uma matriz 6x4 e multiplica cada linha pelo maior elemento da linha em questão 


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, mat[6][4], maior[6];

    for(i = 0; i < 6; i++){
        maior[i] = 0;
    }

    printf("Insira 24 valores inteiros de uma matriz 6x4:\n");

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%i", &mat[i][j]);
            if(mat[i][j] > maior[i]){
                maior[i] = mat[i][j];
            }
        }
    }

    printf("\nMatriz resultante:");
    for (i = 0; i < 6; i++)
    {
        printf("\n");
        for (j = 0; j < 4; j++)
        {
            mat[i][j] *= maior[i];
            printf("%i\t", mat[i][j]);
        }
    }

    
    return 0;
} // fim int main