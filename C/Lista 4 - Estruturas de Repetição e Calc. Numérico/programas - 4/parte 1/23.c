#include <stdio.h>
#include <locale.h>

// Recebe uma sequência de números e retorna o maior e o menor deles

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int n, x;
    float maior, menor = 0, num;

    printf("Digite a quantidade de números a serem inseridos: ");
    scanf("%i", &n);

    printf("1° número: ", x);
    scanf("%f", &num);

    maior = num;
    menor = num;

    for(x = 1; x <= n; x++){

        if(num > maior){ // se o número digitado for maior do que o maior até agora, então ele será o novo maior número

            maior = num;

        }else if(num < menor){ // se o número digitado for menor do que o menor até agora, então ele será o novo menor número

            menor = num;

        } // se o número ja for igual a um dos dois, o valor não mudará
        
        if(x < n){ // será solicitado um novo número n vezes - 1, pois fora do for ja foi 1 vez
        
            printf("\n%i° Número: ", x + 1);
            scanf("%f", &num);

        }
            
    }  

    printf("O maior número é %.2f.", maior);
    printf("\nO menor número é %.2f.", menor);

    return 0;

}