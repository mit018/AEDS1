#include <stdio.h>
#include <locale.h>

// Recebe o sexo e a resposta (sim ou n�o) de 10 pessoas e exibe o n�mero de pessoas que
// responderam cada uma das op��es, o n�mero de mulheres que responderam sim e a porcentagem
// de homens que responderam n�o, dentre todos os homens analisados

int main(){

    setlocale (LC_ALL, "Portuguese");

    char sexo, resposta;

    int contSIM = 0, contNAO = 0, Msim = 0;

    float Hnao = 0, homens = 0, porc;

    for(int i = 1; i <= 10; i++){
    
    printf("Insira o sexo do entrevistado (H - homem; M - mulher): ");

    scanf(" %c", &sexo);

    printf("Insira a resposta do entrevistado (S - sim; N - n�o): ");

    scanf(" %c", &resposta);

    if(sexo != 'H' && sexo != 'M' || resposta != 'S' && resposta != 'N'){

        printf("Insira uma letra v�lida.");

        return 0;

    }

    if(resposta == 'S'){

        contSIM++; // contador de pessoas que responderam sim

        if(sexo == 'M'){

            Msim++; // contador de mulheres que responderam sim

        }

    }else if(resposta == 'N'){

        contNAO++; // contador de pessoas que responderam n�o

        if(sexo == 'H'){

            Hnao++; // contador de homens que responderam n�o

        }

    }

    if(sexo == 'H'){

        homens++; // contador da quantidade de homens entrevistados

    }


    } // fim for


    porc = (Hnao / homens) * 100;

    printf("O n�mero de pessoas que responderam SIM � %i", contSIM);

    printf("\nO n�mero de pessoas que responderam N�O � %i", contNAO);

    printf("\nO n�mero de mulheres que responderam SIM � %i", Msim);

    if(homens == 0){

        printf("\nNenhum homem foi entrevistado");

    }else{

    printf("\nA quantidade de homens que responderam N�O equivale a %.2f%c do n�mero de homens entrevistados", porc, '%');

    }

    return 0;

} // fim int main