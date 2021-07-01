#include "vetor.h"

using namespace std;
Vetor::Vetor()
{
    v = new int[TAMANHO];
    numElementos = 0;

    for (int i = 0; i < numElementos; i++)
    {
        v[i] = 0;
    }
}
int Vetor::obtemTamanho()
{
    return numElementos;
}

void Vetor::insereNoFinal(int novoElemento)
{
    v[numElementos] = novoElemento;

    numElementos++;
}

int Vetor::posicaoDe(int elemento)
{
    int i, pos;

    for (i = 0; i < numElementos; i++)
    {
        if (elemento == v[i])
        {
            return i;
        }
    }

    return -1;
}

int Vetor::alteraEm(int pos, int novoValor)
{
    for (int i = 0; i < numElementos; i++)
    {
        if (pos == i)
        {
            v[i] = novoValor;
            return 0;
        }
    }
    return -1;
}

int Vetor::elementoEm(int pos)
{
    for (int i = 0; i < numElementos; i++)
    {
        if (pos == i)
        {
            return v[i];
        }
    }
    return -1;
}

void Vetor::reverte()
{   
    int x[TAMANHO];
    int i, j;
    for(i = (numElementos - 1), j = 0; i >= 0; i--, j++){
        x[j] = v[i];
    }

    for(i = 0; i < numElementos; i++){
        v[i] = x[i];
    }
}

void Vetor::imprime()
{   
    cout << "\n";
    for (int i = 0; i < numElementos; i++)
    {
        cout << v[i] << " ";
    }
}
