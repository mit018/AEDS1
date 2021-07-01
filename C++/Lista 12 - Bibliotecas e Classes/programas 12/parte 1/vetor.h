#include <cstdlib>
#include <iostream>

class Vetor
{
private:
    int *v;           // Armazena os elementos
    int numElementos; // Informação sobre o número de elementos inseridos

public:
    const static int TAMANHO = 10;
    Vetor();
    int obtemTamanho();
    void insereNoFinal(int novoElemento);
    int posicaoDe(int elemento);
    int alteraEm(int pos, int novoValor);
    int elementoDe(int pos);
    int elementoEm(int pos);
    void reverte();
    void imprime();
};