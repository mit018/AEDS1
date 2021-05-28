#include <stdio.h>
#include <locale.h>

// Recebe um conjunto de n�meros inteiros positivos e mostra o maio e menor valor
// de cada conjunto

int main(){

    setlocale (LC_ALL, "Portuguese");

    int num, maior = 0, menor;

    printf("Insira um n�mero inteiro e positivo\nDigite 0 para encerrar a entrada de n�meros.\nN�meros negativos n�o ser�o considerados.");
    printf("\nN�mero: ");
    scanf("%i", &num);
    
    while(num != 0){

        if(num > 0){

            for(int x = 0; x < 1; x++){ // apenas o primeiro n�mero digitado assumir� o valor de menor

                menor = num;

            }

            if(num > maior){ // se o n�mero digitado for maior do que o maior at� agora, ent�o ele ser� o novo maior n�mero

                maior = num;

            }else if(num < menor){ // se o n�mero digitado for menor do que o menor at� agora, ent�o ele ser� o novo menor n�mero

                menor = num;

            } // se o n�mero ja for igual a um dos dois, o valor n�o mudar�

        }else{

            printf("N�mero negativo (inv�lido).");
        }

        printf("\nN�mero: ");
        scanf("%i", &num);

    }

    printf("O maior valor dentre os digitados � %i", maior);
    printf("\nO menor valor dentre os digitados � %i", menor);

    return 0;

}