#include <stdio.h>
#include <locale.h>

// Recebe a altura e o sexo de uma pessoa e retorna seu peso ideal.
// Para homens: peso ideal = 72.7 *alt ? 58;
// para mulheres: peso ideal = 62.1 *alt ? 44.7

void pesoideal(float alt, char sexo){

    float pesoid;

    if(sexo == 'H'){

        pesoid = (72.7 * alt) - 58;
    }else if(sexo == 'M'){

        pesoid = (62.1 * alt) - 44.7;
    }else{

        printf("Caractere inválido.");
    }

    if(alt <= 0){

        printf("Altura inválida.");
    }

    printf("O seu peso ideal é %.2fkg.", pesoid);
}// fim void pesoideal

int main(){

    setlocale (LC_ALL, "Portuguese");

    float alt, peso;
    char sexo;

    printf("Insira sua altura em metros: ");
    scanf("%f", &alt);

    printf("Insira seu sexo (M- mulher; H- homem): ");
    scanf(" %c", &sexo);

    pesoideal(alt, sexo);

    return 0;
}// fim int main