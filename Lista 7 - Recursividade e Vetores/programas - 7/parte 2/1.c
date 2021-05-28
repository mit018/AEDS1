#include <stdio.h>
#include <locale.h>

// Imprime: 
// os elementos de um vetor na ordem armazenada e na ordem contr�ria, 
// calculo da soma dos elementos e da m�dia.

void vetorcrescente(int A[], int n)
{
    if(n >= 0){
        vetorcrescente(A, n - 1);
        printf("%i\t", A[n]); // chama a fun��o todas as vezes necess�rias e s� depois imprime
    }
}// fim void vetorcrescente
void vetordecrescente(int A[], int n)
{
    if(n >= 0){
        printf("%i\t", A[n]); // imprime o valor antes de chamar a fun��o novamente
        vetordecrescente(A, n - 1);
    }
}// fim void vetordecrescente
int vetorsomatorio(int A[], int n)
{
    if(n > 0)
    {
        return A[n] + vetorsomatorio(A, n - 1);
    }
    else if(n == 0)
    {
        return A[0];
    }
}// fim void vetorsomatorio
float vetormedia(int A[], int n, int x)
{
    if(n == x){
        
        return (float)(A[x] + vetormedia(A, n, x - 1)) / (n + 1);
    }
    else if(x > 0)
    {
        return (float)(A[x] + vetormedia(A, n, x - 1));
    }
    else if(x == 0)
    {
        return (float)A[0];
    }
}// fim void vetormedia

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int soma, i, n;
    float media;

    printf("Digite a quantidade de n�meros a serem lidos: ");
    scanf("%i", &n);

    printf("Insira %i n�meros:\n", n);

    int A[n];

    for(i = 0; i < n; i++)
    {
        scanf("%i", &A[i]);
    }

    printf("\nOrdem armazenada:\n");
    vetorcrescente(A, n - 1);

    printf("\nOrdem contr�ria � armazenada:\n");
    vetordecrescente(A, n - 1);

    printf("\nSomat�rio do valor dos elementos:\n");
    soma = vetorsomatorio(A, n - 1);
    printf("%i", soma);

    printf("\nM�dia de todos os elementos:\n");
    media = vetormedia(A, n - 1, n - 1);
    printf("%.2f", media);

    return 0;
} // fim int main