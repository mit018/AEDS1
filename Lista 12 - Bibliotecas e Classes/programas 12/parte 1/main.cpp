#include "vetor.h"

using namespace std;
int main(int argc, char *argv[])
{
    Vetor *v = new Vetor();
    v->insereNoFinal(10);
    v->insereNoFinal(8);
    v->insereNoFinal(16);
    v->insereNoFinal(7);
    v->insereNoFinal(5);
    v->insereNoFinal(13);

    v->imprime();
    v->alteraEm(3, 19);
    v->alteraEm(15, 9);

    int i;
    for (i = 0; i < v->obtemTamanho(); i++)
        cout << "\nElemento na posicao " << i << ": " << v->elementoEm(i);
    v->reverte();
    v->imprime();
}