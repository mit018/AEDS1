#include <stdio.h>
#include <locale.h>

// Recebe a idade de um nadador e mostre sua categoria de acordo
// com a tabela da questão no livro (pg. 92)

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Insira a idade do(a) nadador(a): ");

    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7){

        printf("A categoria do(a) nadador(a) é Infantil.");

    } else if(idade >= 8 && idade <= 10){

        printf("A categoria do(a) nadador(a) é Juvenil.");

    } else if(idade >= 11 && idade <= 15){

        printf("A categoria do(a) nadador(a) é Adolescente.");

    } else if(idade >= 16 && idade <= 30){

        printf("A categoria do(a) nadador(a) é Adulto.");

    } else if(idade > 30){

        printf("A categoria do(a) nadador(a) é Sênior.");

    } else if(idade <= 0){

        printf("Insira uma idade válida.");
    
    } else if(idade < 5){

        printf("O(a) nadadador(a) não se classifica em nenhuma das categorias.");

    }
    return 0;
}// fim int main