#include <stdio.h>
#include <locale.h>

// Recebe um conjunto de números inteiros positivos e mostra o maio e menor valor
// de cada conjunto

int main(){

    setlocale (LC_ALL, "Portuguese");

    int num, maior = 0, menor;

    printf("Insira um número inteiro e positivo\nDigite 0 para encerrar a entrada de números.\nNúmeros negativos não serão considerados.");
    printf("\nNúmero: ");
    scanf("%i", &num);
    
    while(num != 0){

        if(num > 0){

            for(int x = 0; x < 1; x++){ // apenas o primeiro número digitado assumirá o valor de menor

                menor = num;

            }

            if(num > maior){ // se o número digitado for maior do que o maior até agora, então ele será o novo maior número

                maior = num;

            }else if(num < menor){ // se o número digitado for menor do que o menor até agora, então ele será o novo menor número

                menor = num;

            } // se o número ja for igual a um dos dois, o valor não mudará

        }else{

            printf("Número negativo (inválido).");
        }

        printf("\nNúmero: ");
        scanf("%i", &num);

    }

    printf("O maior valor dentre os digitados é %i", maior);
    printf("\nO menor valor dentre os digitados é %i", menor);

    return 0;

}