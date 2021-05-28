#include <stdio.h>
#include <locale.h>

// Recebe um número indeterminado de votos e exibe o total de votos para cada candidato,
// total de votos nulos, em branco, a porcentagem de nulos sobre o total e a porcentagem
// de votos em branco sobre o total

int main(){

    setlocale (LC_ALL, "Portuguese");

    int voto;

    float v1, v2, v3, v4, nulo, branco, total = 0, porcNulo, porcBranco;

    printf("Escolha entre as opções\n1. Candidato 1\n2. Candidato 2\n3. Candidato 3\n4. Candidato 4\n5. Nulo\n6. Branco\n0. Encerrar a entrada de votos");

    printf("\nVoto: ");

    scanf("%i", &voto);

    while(voto != 0){

        if(voto != 0){

            total++;

            if(voto == 1){

                v1++; // contador de votos no valor de 1 (candidato 1)

            }else if(voto == 2){

                v2++; // contador de votos no valor de 2 (candidato 2) - assim segue os seguintes

            }else if(voto == 3){

                v3++; 

            }else if(voto == 4){

                v4++;

            }else if(voto == 5){

                nulo++;

            }else if(voto == 6){

                branco++;

            }else{

                printf("Voto inválido (válido apenas de 0 a 6).");

                return 0;

            }

            printf("\nVoto: ");

            scanf("%i", &voto);

        }

    }// fim for

    porcBranco = 100 * (branco / total);

    porcNulo = 100 * (nulo / total);

    printf("\nTotal de votos para cada candidato");
    printf("\n1: %.f", v1);
    printf("\n2: %.f", v2);
    printf("\n3: %.f", v3);
    printf("\n4: %.f", v4);
    printf("\nTotal de votos nulos: %.f", nulo);
    printf("\nPorcentagem de votos nulos sobre o total de votos: %.2f%c", porcNulo, '%');
    printf("\nTotal de votos em branco: %.f", branco);
    printf("\nPorcentagem de votos em branco sobre o total de votos: %.2f%c", porcBranco, '%');

    return 0;

}// fim int main