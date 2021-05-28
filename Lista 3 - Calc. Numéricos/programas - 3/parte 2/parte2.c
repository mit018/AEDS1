#include <stdio.h>
#include <locale.h>

// Exibe os primeiros L números da sequência Fibonacci 
// em que L é um número inteiro positivo inserido pelo usuário

int main(){

    setlocale (LC_ALL, "Portuguese");

    int L, i, F, a, b, x;

    printf("Insira um número inteiro positivo: ");
    scanf("%i", &L);

    // um número na sequência Fibonacci é igual a soma dos dois anteriores a ele (considerando que o primeiro e segundo números sempre são 1)

    a = 1; // inicialmente, os valores de 'a' e 'b' são pré determinados para que os dois primeiros valores de F sejam iguais a 1
    b = 0;

    printf("Os %i primeiros números da sequência de Fibonacci são:", L);

    for(i = 1; i <= L; i++){ // repetir o número de vezes digitado pelo usuário

        F = a + b; // o valor encontrado nessa conta, será armazenado em 'b' no final, pois o próximo número Fibonacci precisa de seu antecessor para ser calculado
        a = b; // a variável 'a' assume o valor de 'b' para que 'b' possa assumir o valor de F (número de fibonacci que acaba de ser calculado)
        b = F; // assim o próximo número de fibonacci a ser calculado, terá a e b com o valor de seus 2 anteriores

        printf("\n%i°: %i", i, F);
        
    }

    return 0;

}