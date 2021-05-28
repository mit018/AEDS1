#include <stdio.h>
#include <locale.h>

/* Pedro comprou um saco de ra��o com peso em quilos. Ele possui 2 gatos, para os quais fornece
 a quantidade de ra��o em gramas. A quantidade di�ria de ra��o fornecida para cada gato �
 sempre a mesma. 
 O programa recebe o peso do saco de ra��o e a quantidade de ra��o fornecida para cada
 gato, calcula e mostra quanto restar� de ra��o no saco ap�s 5 dias */

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float racao, gramas, resto;

    printf("Insira o peso da ra��o em quilogramas: ");

    scanf("%f", &racao);

    printf("Insira quantas gramas cada gato receber�: ");

    scanf("%f", &gramas);

    resto = racao - (2 * 5 * (gramas/1000)); //2 * 5 = 2 gatos comendo por 5 dias


    if(resto > 0){

    printf("Em 5 dias ainda restar�o %.3f quilos de ra��o.", resto);

    } else if(resto <= 0){ 

        printf("Em 5 dias a ra��o ter� acabado.");
    }

    return 0;
}// fim int main