#include <stdio.h>
#include <locale.h>

// Recebe o sexo e a resposta (sim ou não) de 10 pessoas e exibe o número de pessoas que
// responderam cada uma das opções, o número de mulheres que responderam sim e a porcentagem
// de homens que responderam não, dentre todos os homens analisados

int main(){

    setlocale (LC_ALL, "Portuguese");

    char sexo, resposta;

    int contSIM = 0, contNAO = 0, Msim = 0;

    float Hnao = 0, homens = 0, porc;

    for(int i = 1; i <= 10; i++){
    
    printf("Insira o sexo do entrevistado (H - homem; M - mulher): ");

    scanf(" %c", &sexo);

    printf("Insira a resposta do entrevistado (S - sim; N - não): ");

    scanf(" %c", &resposta);

    if(sexo != 'H' && sexo != 'M' || resposta != 'S' && resposta != 'N'){

        printf("Insira uma letra válida.");

        return 0;

    }

    if(resposta == 'S'){

        contSIM++; // contador de pessoas que responderam sim

        if(sexo == 'M'){

            Msim++; // contador de mulheres que responderam sim

        }

    }else if(resposta == 'N'){

        contNAO++; // contador de pessoas que responderam não

        if(sexo == 'H'){

            Hnao++; // contador de homens que responderam não

        }

    }

    if(sexo == 'H'){

        homens++; // contador da quantidade de homens entrevistados

    }


    } // fim for


    porc = (Hnao / homens) * 100;

    printf("O número de pessoas que responderam SIM é %i", contSIM);

    printf("\nO número de pessoas que responderam NÃO é %i", contNAO);

    printf("\nO número de mulheres que responderam SIM é %i", Msim);

    if(homens == 0){

        printf("\nNenhum homem foi entrevistado");

    }else{

    printf("\nA quantidade de homens que responderam NÃO equivale a %.2f%c do número de homens entrevistados", porc, '%');

    }

    return 0;

} // fim int main