#include <stdio.h>
#include <locale.h>

// Calcula e retorna a soma e o produto dos dígitos de um número inteiro
// informado pelo usuário.

float somaalgarismos(int num)
{
    int soma = 0;
    while(num > 0){ // processo repete até que o num (inteiro) não seja mais divisível por 10 (ex.: quando é menor que 10)
        soma += (num % 10); // o resto da divisão é o ultimo digito (ex.: 24 % 10 = 4)
        num /= 10; // num vira o número original sem o último algarismo calculado acima (ex.: num = 24 / 10 -> num = 2)
    }
   return soma;
}
produtoalgarismos(int num)
{
    
    int produto = 1;
    while(num > 0){ 
        produto *= (num % 10); 
        num /= 10; 
    }
    return produto;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, R;

    printf("Insira um número inteiro: ");
    scanf("%i", &num);

    R = somaalgarismos(num);
    printf("\nSoma dos algarismos de %i = %i", num, R);

    R = produtoalgarismos(num);
    printf("\nProduto dos algarismos de %i = %i", num, R);

    return 0;
} // fim int main