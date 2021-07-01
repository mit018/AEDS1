#include <stdio.h>
#include <locale.h>

// Recebe a idade de um nadador e mostre sua categoria de acordo
// com a tabela da quest�o no livro (pg. 92)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Insira a idade do(a) nadador(a): ");

    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7){

        printf("A categoria do(a) nadador(a) � Infantil.");

    } else if(idade >= 8 && idade <= 10){

        printf("A categoria do(a) nadador(a) � Juvenil.");

    } else if(idade >= 11 && idade <= 15){

        printf("A categoria do(a) nadador(a) � Adolescente.");

    } else if(idade >= 16 && idade <= 30){

        printf("A categoria do(a) nadador(a) � Adulto.");

    } else if(idade > 30){

        printf("A categoria do(a) nadador(a) � S�nior.");

    } else if(idade <= 0){

        printf("Insira uma idade v�lida.");
    
    } else if(idade < 5){

        printf("O(a) nadadador(a) n�o se classifica em nenhuma das categorias.");

    }
    return 0;
}// fim int main