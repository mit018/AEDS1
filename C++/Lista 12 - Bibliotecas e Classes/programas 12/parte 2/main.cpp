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
    v->insereNoFinal(15);
    v->insereNoFinal(22);
    v->insereNoFinal(56);
    v->insereNoFinal(2);
    v->insereNoFinal(16);
    v->insereNoFinal(27);

    v->imprime();
    v->alteraEm(3, 19);
    v->alteraEm(15, 9);

    v->remover(16);
    v->remover(1);
    v->imprime();

    v->remover(27);
    v->remover(10);
    v->remover(8);
    v->imprime();

    int i;
    cout << "\n";

    for (i = 0; i < v->obtemTamanho(); i++)
        cout << "\nElemento na posicao " << i << ": " << v->elementoEm(i);

    cout << "\n";

    v->reverte();
    v->imprime();
}