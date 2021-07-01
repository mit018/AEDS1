#include <stdio.h>
#include <locale.h>

// Recebe v�rias idades, calcula e mostra a m�dia das idades digitadas

int main(){

    setlocale (LC_ALL, "Portuguese");

    int CONT = 0;

    float media, idade = 1, somaidades = 0;

    printf("Para encerrar a entrada das idades, digite 0.");

    while(idade != 0){

        CONT++; // contador para a quantidade de idades digitadas

        printf("\n%i� idade: ", CONT);

        scanf("%f", &idade);

        if(idade < 0){

            printf("Insira um n�mero v�lido para a idade.");

            return 0;

        }

        somaidades += idade; // somaidades = somaidades + idade

    } // fim while quando idade = 0

    media = somaidades / (CONT - 1); // retira uma unidade do contador referente ao 0 digitado para encerrar a entrada das idades

    printf("A m�dia das idades digitadas � %.2f", media);

    return 0;

}// fim int main