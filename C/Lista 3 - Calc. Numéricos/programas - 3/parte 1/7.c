#include <stdio.h>
#include <locale.h>

// Recebe a idade, altura e peso de cinco pessoas e calcula a quatidade de pessoas
// mais velhas que 50 anos, média das alturas das pessoas entre 10 e 20 anos e a
// porcentagem de pessoas com peso inferior a 40kg entre todas as pessoas analisadas

int main(){

    setlocale (LC_ALL, "Portuguese");

    float idade, altura, peso, htotal, hmedia, porc, CONT1 = 0, CONT2 = 0, CONT3 = 0; // htotal = altura total / hmedia = media das alturas

    int i;

    for(i = 1; i <=5; i++){

        printf("%i° Pessoa\n", i);

        printf("Idade: ");

        scanf("%f", &idade);

        printf("Altura em metros: ");

        scanf("%f", &altura);

        printf("Peso em quilos: ");

        scanf("%f", &peso);

        if(idade < 0 || altura < 0 || peso < 0){

            printf("Insira um valor válido.");

        }

        if(idade > 50){

            CONT1++; // contador de quantas pessoas tem com mais de 50 anos

        }else if(idade >= 10 && idade <= 20){

            htotal += altura; // htotal = htotal + altura

            CONT2 ++; // contador de quantas pessoas tem com idades entre 10 e 20

        }
        if(peso < 40){

            CONT3++;

        }

    } // fim for

    hmedia = htotal / CONT2;

    porc = 100 * (CONT3 / 5);

    printf("A quantidade de pessoa acima de 50 anos é de %i.\n", CONT1);

    printf("A média das alturas das pessoas com idades entre 10 e 20 anos é de %.2f.\n", hmedia);

    printf("O número de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas equivale a %.2f%c.", porc, '%');

    return 0;

} // fim int main