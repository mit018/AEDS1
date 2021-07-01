#include "ingresso.h"
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int op;

    cout << "\nOpcoes de ingresso: ";
    cout << "\n1 - Normal";
    cout << "\n2 - VIP";
    cout << "\n\nOpcao escolhida: ";
    cin >> op;

    while (op > 2 || op < 1)
    {
        cout << "\nOpcao invalida, insira novamente: ";
        cin >> op;
    }

    if (op == 1)
    {
        IngressoNormal *i = new IngressoNormal(15);
        cout << "\nTipo escolhido: ";
        i->imprimeTipo();
        cout << "\nPreco do ingresso: ";
        i->imprimeValor();
    }
    else
    {
        cout << "\nOpcoes de ingresso VIP";
        cout << "\n1 - Camarote Inferior";
        cout << "\n2 - Camarote Superior";
        cout << "\n\nOpcao escolhida: ";
        cin >> op;

        while (op > 2 || op < 1)
        {
            cout << "\nOpcao invalida, insira novamente: ";
            cin >> op;
        }

        if (op == 1)
        {
            CamaroteInferior *i = new CamaroteInferior("Primeiro andar, ala leste.", 30, 15);
            cout << "\nTipo escolhido: Ingresso VIP Camarote Inferior";
            cout << "\nPreco total do ingresso: R$" << i->getValorVIP();
        }
        else
        {
            CamaroteSuperior *i = new CamaroteSuperior("Segundo andar, ala oeste.", 20, 30, 15);
            cout << "\nTipo de ingresso escolhido: Ingresso VIP Camarote Superior";
            cout << "\nPreco total do ingresso: R$" << i->getValorCamarote();
        }
    }

    return 0;
}
