#include <stdio.h>
#include <locale.h>

// Exibe os primeiros L n�meros da sequ�ncia Fibonacci 
// em que L � um n�mero inteiro positivo inserido pelo usu�rio

int main(){

    setlocale (LC_ALL, "Portuguese");

    int L, i, F, a, b, x;

    printf("Insira um n�mero inteiro positivo: ");
    scanf("%i", &L);

    // um n�mero na sequ�ncia Fibonacci � igual a soma dos dois anteriores a ele (considerando que o primeiro e segundo n�meros sempre s�o 1)

    a = 1; // inicialmente, os valores de 'a' e 'b' s�o pr� determinados para que os dois primeiros valores de F sejam iguais a 1
    b = 0;

    printf("Os %i primeiros n�meros da sequ�ncia de Fibonacci s�o:", L);

    for(i = 1; i <= L; i++){ // repetir o n�mero de vezes digitado pelo usu�rio

        F = a + b; // o valor encontrado nessa conta, ser� armazenado em 'b' no final, pois o pr�ximo n�mero Fibonacci precisa de seu antecessor para ser calculado
        a = b; // a vari�vel 'a' assume o valor de 'b' para que 'b' possa assumir o valor de F (n�mero de fibonacci que acaba de ser calculado)
        b = F; // assim o pr�ximo n�mero de fibonacci a ser calculado, ter� a e b com o valor de seus 2 anteriores

        printf("\n%i�: %i", i, F);
        
    }

    return 0;

}