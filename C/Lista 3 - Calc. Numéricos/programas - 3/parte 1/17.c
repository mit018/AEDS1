#include <stdio.h>
#include <locale.h>

// Lê um número inderteminado de dados, calcula e mostra
// a porcentagem de audiência de cada canal

int main(){

    setlocale (LC_ALL, "Portuguese");

    int canal;

    float audiencia, totalPessoas = 0, total4 = 0, total5 = 0, total7 = 0, total12 = 0, p4, p5, p7, p12;

    printf("Insira qual canal (4, 5, 7 ou 12) e quantas pessoas o assistiam.");
    printf("\nDigite 0 em %cCanal%c para encerrar a entrada de dados.", '"', '"');

    while(canal != 0){

        printf("\nCanal: ");
        scanf("%i", &canal);

        if(canal != 0){
            
        printf("Aundiência: ");

        scanf("%f", &audiencia);

        if(canal == 4){

            total4 += audiencia; // acumuladores do total de pessoas assistindo a cada canal

        }else if(canal == 5){

            total5 += audiencia;

        }else if(canal == 7){

            total7 += audiencia;

        }else if(canal == 12){

            total12 += audiencia;

        }else{

            printf("Canal inválido.");
            
        }
        
        totalPessoas += audiencia;

        }
        
    }

    p4 = 100 * (total4 / totalPessoas); // porcentagem de pessoas que assiste cada canal
    p5 = 100 * (total5 / totalPessoas);
    p7 = 100 * (total7 / totalPessoas);
    p12 = 100 * (total12 / totalPessoas);

    printf("Audiência de cada canal");
    printf("\nCanal 4: %.2f%c", p4, '%');
    printf("\nCanal 5: %.2f%c", p5, '%');
    printf("\nCanal 7: %.2f%c", p12, '%');
    printf("\nCanal 12: %.2f%c", p12, '%');

    return 0;

}