#include <stdio.h>
#include <locale.h>

// Recebe a idade e a opini�o de quinze espectadores, calcula e mostra a m�dia das idades
// das pessoas que responderam �timo, a quantidade de pessoas que responderam regular e a
// porcentagem de pessoas que responderam bom entre todos os analisados

int main(){

    setlocale (LC_ALL, "Portuguese");

    int opiniao;

    float idade, somaidades = 0, media, regular, CONT1 = 0, CONT3 = 0, CONT2 = 0, porcBOM;

    for(int i = 1; i <= 15; i++){ // repetir 15 vezes
    
    printf("Insira a idade: ");

    scanf("%f", &idade);

    printf("\nInsira a opini�o (1 - �timo; 2 - bom; 3 - regular): ");

    scanf("%i", &opiniao);

    if(idade < 0 || opiniao < 1 || opiniao > 3){

        printf("Inv�lido.");

        return 0;

    }

    if(opiniao == 1){

        somaidades += idade; // somaidades = somaidades + idade

        CONT1++; // contador de opini�es "�timo"

    }else if(opiniao == 2){

        CONT2++; // contador de opini�es "bom"

    }else if(opiniao == 3){

        CONT3++; // contador de opini�es "regular"

    }
    
    } // fim do for


    
    porcBOM = 100 * (CONT2 / 15);

    if(CONT1 == 0){

        printf("A quantidade de pessoas que responderam %c�timo%c � 0.", '"', '"');

    }else{

        media = somaidades / CONT1;

        printf("A m�dia das idades das pessoas que responderam %c�timo%c � %.2f.", '"', '"', media);
        
    }

    printf("\nA quantidade de pessoas que responderam %cregular%c � %.f.", '"', '"', CONT3);

    printf("\nA quatidade de pessoas que responderam %cbom%c equivale a %.2f%c.", '"', '"', porcBOM, '%');

    return 0;

} // fim int main