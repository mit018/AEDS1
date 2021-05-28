#include <stdio.h>
#include <locale.h>

/* Pedro comprou um saco de ração com peso em quilos. Ele possui 2 gatos, para os quais fornece
 a quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é
 sempre a mesma. 
 O programa recebe o peso do saco de ração e a quantidade de ração fornecida para cada
 gato, calcula e mostra quanto restará de ração no saco após 5 dias */

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float racao, gramas, resto;

    printf("Insira o peso da ração em quilogramas: ");

    scanf("%f", &racao);

    printf("Insira quantas gramas cada gato receberá: ");

    scanf("%f", &gramas);

    resto = racao - (2 * 5 * (gramas/1000)); //2 * 5 = 2 gatos comendo por 5 dias


    if(resto > 0){

    printf("Em 5 dias ainda restarão %.3f quilos de ração.", resto);

    } else if(resto <= 0){ 

        printf("Em 5 dias a ração terá acabado.");
    }

    return 0;
}// fim int main