#include <stdio.h>
#include <locale.h>

// Calcula e retorna a soma e o produto dos dígitos de um número inteiro
// informado pelo usuário.

float somaalgarismos(int *num)
{
    int soma = 0;
    while((*num) > 0){ // processo repete até que o num (inteiro) não seja mais divisível por 10 (ex.: quando é menor que 10)
        soma += ((*num) % 10); // o resto da divisão é o ultimo digito (ex.: 24 % 10 = 4)
        *num /= 10; // num vira o número original sem o último algarismo calculado acima (ex.: num = 24 / 10 -> num = 2)
    }
   return soma;
}// fim float somaalgarismos
produtoalgarismos(int *num)
{
    int produto = 1;
    
    while((*num) > 0){ 
        produto *= ((*num) % 10); 
        (*num) /= 10; 
    }
    return produto;
}// fim float produtoalgarismos

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, numinicial, R = 0;

    printf("Insira um número inteiro: ");
    scanf("%i", &num);

    printf("\nVariáveis de retorno antes da chamada do procedimento soma:\n");
    printf("\nnum = %i\nR = %i\n", num, R);

    numinicial = num;

    R = somaalgarismos(&num);
    printf("\nSoma dos algarismos de %i = %i\n", numinicial, R);

    printf("\nVariáveis de retorno depois da chamada do procedimento soma:\n");
    printf("\nnum = %i\nR = %i\n", num, R);

    printf("\nVariáveis de retorno antes da chamada do procedimento produto:\n");
    printf("\nnum = %i\nR = %i\n", num, R);

    printf("\nProduto dos algarismos de %i = ", numinicial);
    R = produtoalgarismos(&numinicial);
    printf("%i\n", R);

    printf("\nVariáveis de retorno depois da chamada do procedimento produto:\n");
    printf("\nnum = %i\nR = %i\n", numinicial, R);

    return 0;
} // fim int main