#include <stdio.h>
#include <locale.h>

// Recebe a idade de 8 pessoas e exibe a quantidade de pessoas em cada faixa etária,
// a porcentagem de pessoas na 1° faixa e na última, ambos em realção ao total de pessoas
// de acordo com a tabela da questão no livro (pg. 146)

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float x, id, CONT1 = 0, CONT2 = 0, CONT3 = 0, CONT4 = 0, CONT5 = 0, P1, P2;

    printf("Insira uma idade: ");

    scanf("%f", &id);

    if(id < 0){

        printf("Insira um número válido para a idade.");

        return 0;

    }

    x = 0;

    for (x = 1; x <= 8; x++) // repetir 8 vezes - contando com o de fora
    {

        if(id <= 15 ){

            CONT1 = CONT1 + 1; // toda vez que a idade se encaixar nesse if, o cont1 (contador 1) soma 1

        }else if(id >= 16 && id <= 30 ){

            CONT2 = CONT2 + 1; // mesma ideia do contador 1 e assim segue os outros contadores (até o 5)

        }else if(id >= 31 && id <= 45 ){

            CONT3 = CONT3 + 1;

        }else if(id >= 46 && id <= 60 ){

            CONT4 = CONT4 + 1;

        }else if(id >60){

            CONT5 = CONT5 + 1;

        }else if(id < 0){

            printf("Insira um número válido para a idade.");

        }

        if(x < 8){ // repetir apenas 7 vezes pois uma ja foi feita antes do for ( porem o processamento - de if e else - precisa se repetir 8 vezes para que todos os numeros passem pelo filtro)
            
            printf("Insira outra idade: ");

            scanf("%f", &id);

        }

    } // fim for

    P1 = (CONT1 / 8) * 100;

    P2 = (CONT5 / 8) * 100;

    printf("Quantidade de pessoas em cada faixa etária:\n1°: %.f\n2°: %.f\n3°: %.f\n4°: %.f\n5°: %.f\n", CONT1, CONT2, CONT3, CONT4, CONT5);

    printf("O número de pessoas na 1° faixa etária equivale a  %.2f%c do total.\n", P1, '%');

    printf("O número de pessoas na 5° faixa etária equivale a %.2f%c do total.", P2, '%');

    return 0;

} // fim int main