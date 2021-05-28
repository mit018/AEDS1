#include <stdio.h>
#include <locale.h>

// Recebe dois vetores de 10 e 5 valores respectivamente, calcula e imprime 2 vetores resultantes:
// 1° guarda cada número par do primeiro vetor somado a todos do segundo
// 2° guarda a quantidade de divisores que cada número ímpar do primeiro vetor possui no segundo

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x[10], y[5]; // vetores
    int i, j = 0, k = 0, h = 0; // variáveis de repetição
    int par = 0, impar = 0, cont = 0; // contadores
    int  totaly = 0; // acumulador

    printf("Insira 10 números inteiros\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%i", &x[i]);
        if ((x[i] % 2) == 0)
        {
            par++; // quantidade de números pares
        }
        else
        {
            impar++; // quantidade de números impares
        }
    }

    int soma[par], divisores[impar];

    printf("Insira 5 números inteiros\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%i", &y[i]);
        totaly += y[i]; // acumula todos os valores do vetor y
    }

    for (i = 0; i < 10; i++)
    {
        if ((x[i] % 2) == 0)
        { // quando o valor de x for par
            soma[j] = x[i] + totaly;
            j++;
        }
        else if ((x[i] % 2) != 0)
        { // quando o valor de x for ímpar
            cont = 0; // zerar contador
            for (h = 0; h < 5; h++) // repete até que todos os elementos de y tenham sido percorridos e testados como divisores de x
            {
                if ((x[i] % y[h]) == 0)
                {
                    cont++; // conta quantos divisores de x há no vetor y
                }
            }
            divisores[k] = cont; // guarda o número de divisores (cont) na posição k do vetor
            k++;
        }
    }

    printf("Primeiro vetor resultante\n");
    printf("Cada número par do primeiro vetor somado a todos do segundo\n");

    for(i = 0; i < par; i++){
        printf("%i\t", soma[i]);
    }

    printf("\n\nSegundo vetor resultante\n");
    printf("Quantidade de divisores que cada número ímpar do primeiro vetor possui no segundo\n");

    for(i = 0; i < impar; i++){
        printf("%i\t", divisores[i]);
    }

    return 0;
} // fim int main