#include <stdio.h>
#include <locale.h>

// Recebe uma sequ�ncia de n�meros e retorna o maior e o menor deles

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int n, x;
    float maior, menor = 0, num;

    printf("Digite a quantidade de n�meros a serem inseridos: ");
    scanf("%i", &n);

    printf("1� n�mero: ", x);
    scanf("%f", &num);

    maior = num;
    menor = num;

    for(x = 1; x <= n; x++){

        if(num > maior){ // se o n�mero digitado for maior do que o maior at� agora, ent�o ele ser� o novo maior n�mero

            maior = num;

        }else if(num < menor){ // se o n�mero digitado for menor do que o menor at� agora, ent�o ele ser� o novo menor n�mero

            menor = num;

        } // se o n�mero ja for igual a um dos dois, o valor n�o mudar�
        
        if(x < n){ // ser� solicitado um novo n�mero n vezes - 1, pois fora do for ja foi 1 vez
        
            printf("\n%i� N�mero: ", x + 1);
            scanf("%f", &num);

        }
            
    }  

    printf("O maior n�mero � %.2f.", maior);
    printf("\nO menor n�mero � %.2f.", menor);

    return 0;

}