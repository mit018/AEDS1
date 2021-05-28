#include <stdio.h>
#include <locale.h>

// Calcula e retorna a soma e o produto dos d�gitos de um n�mero inteiro
// informado pelo usu�rio.

float somaalgarismos(int *num)
{
    int soma = 0;
    while((*num) > 0){ // processo repete at� que o num (inteiro) n�o seja mais divis�vel por 10 (ex.: quando � menor que 10)
        soma += ((*num) % 10); // o resto da divis�o � o ultimo digito (ex.: 24 % 10 = 4)
        *num /= 10; // num vira o n�mero original sem o �ltimo algarismo calculado acima (ex.: num = 24 / 10 -> num = 2)
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

    printf("Insira um n�mero inteiro: ");
    scanf("%i", &num);

    printf("\nVari�veis de retorno antes da chamada do procedimento soma:\n");
    printf("\nnum = %i\nR = %i\n", num, R);

    numinicial = num;

    R = somaalgarismos(&num);
    printf("\nSoma dos algarismos de %i = %i\n", numinicial, R);

    printf("\nVari�veis de retorno depois da chamada do procedimento soma:\n");
    printf("\nnum = %i\nR = %i\n", num, R);

    printf("\nVari�veis de retorno antes da chamada do procedimento produto:\n");
    printf("\nnum = %i\nR = %i\n", num, R);

    printf("\nProduto dos algarismos de %i = ", numinicial);
    R = produtoalgarismos(&numinicial);
    printf("%i\n", R);

    printf("\nVari�veis de retorno depois da chamada do procedimento produto:\n");
    printf("\nnum = %i\nR = %i\n", numinicial, R);

    return 0;
} // fim int main